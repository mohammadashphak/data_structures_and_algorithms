#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Program to give the number of notes of a given amount using switch statement
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int remainingAmount = amount;
    int notesOf100 = 0;
    int notesOf50 = 0;
    int notesOf20 = 0;
    int notesOf10 = 0;
    int notesOf5 = 0;
    int notesOf2 = 0;
    int notesOf1 = 0;

    // Run switch statement without break so that it will run for all the cases
    switch (1)
    {
    case 1:
        notesOf100 = amount / 100;
        cout << "Number of notes of 100: " << notesOf100 << endl;
        amount = amount % 100;

    case 2:
        notesOf50 = amount / 50;
        cout << "Number of notes of 50: " << notesOf50 << endl;
        amount = amount % 50;

    case 3:
        notesOf20 = amount / 20;
        cout << "Number of notes of 20: " << notesOf20 << endl;
        amount = amount % 20;

    case 4:
        notesOf10 = amount / 10;
        cout << "Number of notes of 10: " << notesOf10 << endl;
        amount = amount % 10;

    case 5:
        notesOf5 = amount / 5;
        cout << "Number of notes of 5: " << notesOf5 << endl;
        amount = amount % 5;

    case 6:
        notesOf2 = amount / 2;
        cout << "Number of notes of 2: " << notesOf2 << endl;
        amount = amount % 2;

    case 7:
        notesOf1 = amount / 1;
        cout << "Number of notes of 1: " << notesOf1 << endl;
        amount = amount % 1;
    }

    return 0;
}