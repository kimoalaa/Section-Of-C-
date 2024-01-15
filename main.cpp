#include <iostream>
using namespace std;
int main() {
    int numStudents;

    again:
    cout << "Enter The Number Of Student: ";
    cin >> numStudents;

    int maxGrade = -1;
    for (int i = 1; i <= numStudents; i++) {
        int grade;

        cout << "Please Enter Your Degree : ";
        cin >> grade;

        while (grade < 0 || grade > 100) {
            cout << "Please Enter The Degree between 1 => 100 :";
            cin >> grade;
        }
        if (grade > maxGrade) {
            maxGrade = grade;
        }
    }

        cout << "The Hight degree Is : " << maxGrade << endl;
        cout << "Do you want to enter a different number of students Y Or N?";
        char yes = 'y';
        cin >> yes ;
        if (yes == 'y'){
            goto again;
        }else{
            exit;
        }

    return 0;
}
