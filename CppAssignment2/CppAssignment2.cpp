// CppAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the number of the question you would like to see (1 or 2): ";
    cin >> num1;

    switch (num1) {
    default:
        cout << "Invalid number";
        break;
    case 1:
        int dataPrices[] = { 30, 50, 80 };
        int callSmsPrices[] = { 30, 50 };
        int packageChoice, dataChoice, callSmsChoice;
        double totalPrice;

        cout << "Select package: " << endl;
        cout << "1. Data" << endl;
        cout << "2. Call and SMS" << endl;
        cout << "3. Data + Call and SMS" << endl;
        cin >> packageChoice;

        if (packageChoice == 1) {
            cout << "Select a data plan:\n";
            cout << "1. 20 G for 30 days - $30\n";
            cout << "2. 50 G for 60 days - $50\n";
            cout << "3. 100 G for 90 days - $80\n";
            cin >> dataChoice;

            totalPrice = dataPrices[dataChoice - 1];
            cout << "Total Price: $" << totalPrice << endl;
        }

        else if (packageChoice == 2) {
            cout << "Select a Call and SMS plan:\n";
            cout << "1. 60 min + 100 SMS/month - $30\n";
            cout << "2. 120 min + 200 SMS/month - $50\n";
            cin >> callSmsChoice;

            totalPrice = callSmsPrices[callSmsChoice - 1];
            cout << "Total Price: $" << totalPrice << endl;

        }
        else if (packageChoice == 3) {
            cout << "Select a data plan:\n";
            cout << "1. 20 G for 30 days - $30\n";
            cout << "2. 50 G for 60 days - $50\n";
            cout << "3. 100 G for 90 days - $80\n";
            cin >> dataChoice;

            cout << "Select a Call and SMS plan:\n";
            cout << "1. 60 min + 100 SMS/month - $30\n";
            cout << "2. 120 min + 200 SMS/month - $50\n";
            cin >> callSmsChoice;

            totalPrice = dataPrices[dataChoice - 1] + callSmsPrices[callSmsChoice - 1];
            totalPrice *= 0.8;

            cout << "Total Price after 20% discount: $" << totalPrice << endl;
        }
        else {
            cout << "Invalid package choice!" << endl;
        }
        break;
    case 2:



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
