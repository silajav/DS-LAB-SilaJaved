#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of months: ";
    cin >> n;
    double* expenses = new double[n];

    cout << "Enter expenses for " << n << " months: ";
    for (int i = 0; i < n; i++) {
        cin >> expenses[i];
    }

    char choice;
    cout << "Do you want to add more months? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int newN;
        cout << "Enter how many more months: ";
        cin >> newN;
        double* newArr = new double[n + newN];
        for (int i = 0; i < n; i++) {
            newArr[i] = expenses[i];
        }
        cout << "Enter expenses for " << newN << " more months: ";
        for (int i = n; i < n + newN; i++) {
            cin >> newArr[i];
        }
        delete[] expenses;
        expenses = newArr;
        n = n + newN;
    }

    double total = 0;
    for (int i = 0; i < n; i++) {
        total += expenses[i];
    }
    double avg = total / n;

    cout << "Total expenses: " << total << endl;
    cout << "Average expense: " << avg << endl;

    delete[] expenses;
    return 0;
}
