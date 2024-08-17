#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\t\t\tWELCOME EVERYONE!!!"
         << endl;
    cout << "\n\t\t\NUMBER GUESSING GAME!!"
         << endl;
    cout << "\n\t\t\tCHECK YOUR LUCK!!"
         << endl;
    cout << "You have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;

    while (true) {
        cout << "\nEnter the level: \n";
        cout << "1 for easy!\t";
        cout << "\n2 for medium!\t";
        cout << "\n3 for difficult!\t";
        cout << "\n0 for ending the game!\n" << endl;

        // select the level of difficulty
        int Choice;
        cout << "Enter the choice: ";
        cin >> Choice;

        // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        //  Level:Easy
        if (Choice == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        // level : Medium
        else if (Choice == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 7;
            for (int i = 1; i <= 7; i++) {

                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // level : Medium
        else if (Choice == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1; i <= 5; i++) {

                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won the game, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (Choice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}
