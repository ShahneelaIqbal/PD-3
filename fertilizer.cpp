#include<iostream>
using namespace std;

main(){

int bagSize;
int costOfBag;
int area;
int costOfFertilizerPerPound;
int costOfFertilizerPerSquareFeet;


cout << "Enter bag size in pounds:  ";
cin >> bagSize;
cout << "Cost of bag:  ";
cin >> costOfBag;
cout << "Area covered by each bag in square feet:  ";
cin >> area;

costOfFertilizerPerPound=costOfBag/bagSize;
costOfFertilizerPerSquareFeet=area*bagSize;

cout << "Cost of fertilizer per pound:   ";
cout << costOfFertilizerPerPound;
cout << endl;
cout << "Cost of fertilizer per square feet:  ";
cout << costOfFertilizerPerSquareFeet;
cout << endl;







}