#include<iostream>
using namespace std;

main(){

string movieName;
int adultTicketPrice;
int childTicketPrice;
int adultTicketSold;
int childTicketSold;
float percentageToCharity;
int totalPrice;
float amountToCharity;
float remaining;

cout << "Enter movie name:  ";
cin >> movieName;
cout << "Enter adult ticket price:  ";
cin >> adultTicketPrice;
cout << "Enter child ticket price:  ";
cin >> childTicketPrice;
cout << "Enter adult ticket sold:  ";
cin >> adultTicketSold;
cout << "Enter child ticket sold:  ";
cin >> childTicketSold;
cout << "Enter amount donated to charity:  ";
cin >> percentageToCharity;

totalPrice=(adultTicketSold*adultTicketPrice)+(childTicketSold*childTicketPrice);
amountToCharity=(totalPrice*percentageToCharity)/100;
remaining=totalPrice-amountToCharity;

cout << "Total Amount Generated:  ";
cout << totalPrice;
cout << endl;
cout << "Remaining Amount is:  ";
cout <<  remaining;


}