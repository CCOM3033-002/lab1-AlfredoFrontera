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

double grossProfit = adultTickets * ADULT_TICKET_PRICE + childTickets * CHILD_TICKET_PRICE;
double netProfit = grossProfit * THEATER_PERCENTAGE;
double distributorProfit = grossProfit - netProfit;

cout << endl;
cout << left << setw(30) << "Movie Name:" << right << "\"" << movieName << "\"" << endl;
cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(10) << adultTickets << endl;
cout << left << setw(30) << "Child Tickets Sold:" << right << setw(10) << childTickets << endl;

cout << fixed << showpoint << setprecision(2);
cout << left << setw(30) << "Gross Box Office Profit:" << right << "$" << setw(10) << grossProfit << endl;
cout << left << setw(30) << "Net Box Office Profit:" << right << "$" << setw(10) << netProfit << endl;
cout << left << setw(30) << "Amount Paid to Distributor:" << right << "$" << setw(10) << distributorProfit << endl;

return 0;
}

