//Cole, Jordan
//CO SCI_802_26188FA19V
//Chap. 3 Housing costs
//Write a program that asks the user to enter their monthly housing-related expenses.
//The program should then display the total monthly cost of these expenses and the total annual cost of these expenses.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double rent, util, phone, cable, totalMonthly, totalAnnual;         //Create variable for the following costs: rent, utilities, phone, cable, total-monthly, and total-annual
    
    cout << "Enter your monthly cost for the following: " << endl;      //Instruct the user to enter their costs
    cout << endl;
    
    cout << left << setw(20) << "Rent or Mortgage:" << " $";
    cin >> rent;                                                        //User input: Rent
    
    cout << left << setw(20) << "Utilities:" << " $";
    cin >>util;                                                         //User input: Utilities
    
    cout << left << setw(20) << "Phone(s):" << " $";
    cin >> phone;                                                       //User input: Phone
    
    cout << left << setw(20) << "Cable:" << " $";
    cin >> cable;                                                       //User input: Cable
    
    totalMonthly = rent + util + phone + cable;                         //Calculate total monthly cost
    totalAnnual = totalMonthly * 12;                                    //Calculate total annual cost
    
    cout << endl;
    
    //Output total monthly and annual costs
    cout << left << setw(30) << "Total monthly housing costs:" << " $" << setprecision(2) << fixed << totalMonthly << endl;
    cout << left << setw(30) << "Total annual housing costs:" << " $" << totalAnnual << endl;
   
    system("pause");
    return 0;
}
