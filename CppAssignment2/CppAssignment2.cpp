#include <iostream>
using namespace std;

class StudentPassScore {
private:
    double studentScore; 
    int yearOfSubject;    

public:
    StudentPassScore(double score, int year) {
        studentScore = score;
        yearOfSubject = year;
    }

    void passingGradeOne() {
        if (studentScore >= 50) {
            cout << "The student passed the 1st-year subject with a score of " << studentScore << endl;
        }
        else {
            cout << "The student failed the 1st-year subject with a score of " << studentScore << endl;
        }
    }

    void passingGradeTwo() {
        if (studentScore >= 55) {
            cout << "The student passed the 2nd-year subject with a score of " << studentScore << endl;
        }
        else {
            cout << "The student failed the 2nd-year subject with a score of " << studentScore << endl;
        }
    }

    void passingGradeThree() {
        if (studentScore >= 60) {
            cout << "The student passed the 3rd-year subject with a score of " << studentScore << endl;
        }
        else {
            cout << "The student failed the 3rd-year subject with a score of " << studentScore << endl;
        }
    }

    void checkPassingGrade() {
        if (yearOfSubject == 1) {
            passingGradeOne();
        }
        else if (yearOfSubject == 2) {
            passingGradeTwo();
        }
        else if (yearOfSubject == 3) {
            passingGradeThree();
        }
        else {
            cout << "Invalid year of subject!" << endl;
        }
    }
};

int main()
{
    int dataPrices[] = { 30, 50, 80 };
    int callSmsPrices[] = { 30, 50 };
    int packageChoice, dataChoice, callSmsChoice;
    double totalPrice;
    int num1;
    cout << "Enter the number of the question you would like to see (1 or 2): ";
    cin >> num1;

    switch (num1) {
    default:
        cout << "Invalid number";
        break;
    case 1:
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
        double score;
        int year;

        // Reading the student score and year of the subject
        cout << "Enter the student's score: ";
        cin >> score;
        cout << "Enter the year of the subject (1, 2, or 3): ";
        cin >> year;

        // Create a StudentPassScore object
        StudentPassScore student(score, year);

        // Check if the student passed based on the year of the subject
        student.checkPassingGrade();
        break;
    }

}
