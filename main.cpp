#include<iostream>
#include<ctime>

using namespace std;

/**
 * This program generates random arithmetic equations and prompts the user to solve them.
 * It then evaluates the user's answers and provides feedback.
 */

int main() {
    system("CLS"); // Clear the screen
    srand(time(0)); // Seed the random number generator with the current time
    int choice;
    cout << "Enter how many equations you want to solve: ";
    cin >> choice;
    int score = 0;

    // Loop to generate and solve equations
    for (int i = 1; i <= choice; i++) {
        // Generate two random digits and an operation
        float digit = rand() % 10; // Random digit from 0 to 9
        float digit2 = rand() % 10; // Random digit from 0 to 9
        int oper = rand() % 4; // Random operation (0 for +, 1 for -, 2 for *, 3 for /)

        switch (oper) {
            case 0: { // Addition
                cout << digit << "+" << digit2 << "=?" << endl;
                float answer;
                cin >> answer;
                (digit + digit2 == answer) ? cout << "Right Answer" << endl : cout << "Wrong Answer" << endl;
                if (digit + digit2 == answer) {
                    score++;
                }
                break;
            }
            case 1: { // Subtraction
                cout << digit << "-" << digit2 << "=?" << endl;
                float answer;
                cin >> answer;
                (digit - digit2 == answer) ? cout << "Right Answer" << endl : cout << "Wrong Answer" << endl;
                if (digit - digit2 == answer) {
                    score++;
                }
                break;
            }
            case 2: { // Multiplication
                cout << digit << "*" << digit2 << "=?" << endl;
                float answer;
                cin >> answer;
                (digit * digit2 == answer) ? cout << "Right Answer" << endl : cout << "Wrong Answer" << endl;
                if (digit * digit2 == answer) {
                    score++;
                }
                break;
            }
            case 3: { // Division
                // Avoid division by zero
                if (digit2 == 0) {
                    cout << "Cannot divide by zero!" << endl;
                    break;
                }
                cout << digit << "/" << digit2 << "=?" << endl;
                float answer;
                cin >> answer;
                (digit / digit2 == answer) ? cout << "Right Answer" << endl : cout << "Wrong Answer" << endl;
                if (digit / digit2 == answer) {
                    score++;
                }
                break;
            }
        }
    }

    // Output the user's score
    cout << "You attempted " << choice << " total equations and answered " << score << " correctly.";

    return 0;
}
