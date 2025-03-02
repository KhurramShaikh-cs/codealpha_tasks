#include <iostream>
using namespace std;

int main() {
    int numCourses;
    int totalCredits = 0, totalGradePoints = 0;
    
    cout << "Enter number of courses: ";
    cin >> numCourses;
    
    for (int i = 0; i < numCourses; ++i) {
        int credits, gradePoint;
        char grade;
        
        cout << "\nEnter credits for course " << i + 1 << ": ";
        cin >> credits;
        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;
        
        switch (toupper(grade)) {
            case 'A': gradePoint = 4; break;
            case 'B': gradePoint = 3; break;
            case 'C': gradePoint = 2; break;
            case 'D': gradePoint = 1; break;
            case 'F': gradePoint = 0; break;
            default: cout << "Invalid grade!"; return 1;
        }
        
        totalCredits += credits;
        totalGradePoints += gradePoint * credits;
    }
    
    int cgpa = (totalGradePoints * 100) / totalCredits;
    cout << "\nCGPA: " << cgpa / 100 << "." << cgpa % 100 << endl;
    
    return 0;
}

