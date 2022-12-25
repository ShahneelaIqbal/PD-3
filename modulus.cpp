#include <iostream>
using namespace std;

main(){

int number;
int rem1;
int rem2;
int rem3;
int rem4;
int quo1;
int quo2;
int quo3;
int quo4;
int sum;

cout << "Enter four digit number:  ";
cin >> number;

rem1=number%10;
quo1=number/10;
rem2=quo1%10;
quo2=quo1/10;
rem3=quo2%10;
quo3=quo2/10;
rem4=quo3%10;
quo4=quo3/10;
sum=rem1+rem2+rem3+rem4;

cout << "Total is:  ";
cout << sum;











}