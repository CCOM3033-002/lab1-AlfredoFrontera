/*
Asignación 1: Binary Digit
Nombre:Alfredo F. Frontera Del Valle
Núm. Est: 801-21-1568 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributor's Profit of a movie playing in the theater."<< endl << endl;
}

string movieName;
int adultTickets, childTickets;
const double ADULT_TICKET_PRICE = 10.00;
const double CHILD_TICKET_PRICE = 6.00;
const double THEATER_PERCENTAGE = 0.20;

cout << "Enter the name of the movie: ";
getline(cin, movieName);
cout << "Enter the amount of adult tickets sold: ";
cin >> adultTickets;
cout << "Enter the amount of child tickets sold: ";
cin >> childTickets;

