#include <iostream>
using namespace std;

main(){
string name;
float subjectMarks1;
float subjectMarks2;
float subjectMarks3;
float subjectMarks4;
float subjectMarks5;
float obtainedMarks;
float percentage;

cout << "Enter Your Name:  ";
cin >> name;
cout << "Enter Subject 1 Marks: ";
cin >> subjectMarks1;
cout << "Enter Subject 2 Marks: ";
cin >> subjectMarks2;
cout << "Enter Subject 3 Marks: ";
cin >> subjectMarks3;
cout << "Enter Subject 4 Marks: ";
cin >> subjectMarks4;
cout << "Enter Subject 5 Marks: ";
cin >> subjectMarks5;
obtainedMarks=subjectMarks1+subjectMarks2+subjectMarks3+subjectMarks4+subjectMarks5;
percentage=(obtainedMarks*100)/500;
cout << "Percentage is:  ";
cout << percentage;
}