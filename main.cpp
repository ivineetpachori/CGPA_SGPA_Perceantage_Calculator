#include <iostream>
using namespace std;

int main() {
    const int NUM_SUBJECTS = 5;
    int marks[NUM_SUBJECTS];
    int total = 0;
    float percentage, cgpa, sgpa;
    int choice;

    // Input marks
    cout << "Enter the marks of " << NUM_SUBJECTS << " subjects:\n";
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Display total marks
    cout << "\nTotal marks: " << total << endl;

    // Ask for calculation choice
    cout << "What would you like to calculate?\n";
    cout << "1. Percentage\n";
    cout << "2. CGPA\n";
    cout << "3. SGPA\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            // Calculate and display percentage
            percentage = (total / (NUM_SUBJECTS * 100.0)) * 100;
            cout << "Percentage: " << percentage << "%" << endl;
            break;
        case 2:
            // Calculate and display CGPA
            // Assuming the maximum marks for each subject is 100
            cgpa = (total / (NUM_SUBJECTS * 10.0));
            cout << "CGPA: " << cgpa << endl;
            break;
        case 3:
            // Calculate and display SGPA
            // Assuming SGPA is calculated the same way as CGPA
            sgpa = (total / (NUM_SUBJECTS * 10.0));
            cout << "SGPA: " << sgpa << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
