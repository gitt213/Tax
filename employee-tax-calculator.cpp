#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    char maritalStatus;
    double salary, taxRate = 0.0;

    cout << "Enter marital status (S for Single, M for Married): ";
    cin >> maritalStatus;

    maritalStatus = toupper(maritalStatus);
    if (maritalStatus != 'S' && maritalStatus != 'M') {
        cout << "Error: Invalid marital status. Please enter 'S' or 'M'." << endl;
        return 1;
    }

    cout << "Enter monthly salary: ";
    cin >> salary;

    if (salary < 0) {
        cout << "Error: Salary must be a non-negative value." << endl;
        return 1;
    }

    if (maritalStatus == 'S') {
        if (salary > 100000) {
            taxRate = 0.30;
        } else if (salary >= 50000) {
            taxRate = 0.20;
        } else {
            taxRate = 0.10;
        }
    } else if (maritalStatus == 'M') {
        if (salary > 100000) {
            taxRate = 0.25;
        } else if (salary >= 50000) {
            taxRate = 0.15;
        } else {
            taxRate = 0.05;
        }
    }

    double taxAmount = salary * taxRate;
    cout << "Applicable tax rate: " << taxRate * 100 << "%" << endl;
    cout << "The employee tax is: ₱" << taxAmount << endl;

    return 0;
}