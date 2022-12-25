#include<iostream>
using namespace std;

main(){

float price;
int totalKiloOfVeges;
int totalKiloOfFruits;
price=1.94;
float totalEaring;
float pkr;

cout << "Enter total kilo of Vegetables:  ";
cin >> totalKiloOfVeges;
cout << "Enter total kilo of fruits:  ";
cin >> totalKiloOfFruits;

totalEaring=(totalKiloOfVeges*price)+(totalKiloOfFruits*price);
pkr=totalEaring/price;
cout << "Total Earing in pkr is:  ";
cout << pkr;
}