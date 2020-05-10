
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{
        int streak = 0;
        int high = 0;
        int replay = 1;
        int choice;
        sleep(1);
        cout << "Welcome! Let's play Stone, Paper, Scissors! \n";

        while (replay == 1)
        {
                sleep(1);
                cout << "\nEnter '1' for Stone, '2' for paper and '3' for scissors. \n";
                cin >> choice;

                srand(time(0));
                int comp = rand() % 3 + 1;
                sleep(1);

                switch(choice)
                {
                case 1:
                        cout << "You chose: Stone \n";
                        sleep(1);
                        if (comp == 1) {cout << "Computer chose: Stone. \nGame Draw!"; streak = 0;}
                        else if (comp == 2) {cout << "Computer chose: Paper. \nComputer wins!"; streak = 0;}
                        else if (comp == 3) {cout << "Computer chose: Scissors. \nYou win!"; streak = ++streak;}
                        break;

                case 2:
                        cout << "You chose: Paper \n";
                        sleep(1);
                        if (comp == 1) {cout << "Computer chose: stone. \nYou Win!"; streak = ++streak;}
                        else if (comp == 2) {cout << "Computer chose: Paper. \nGame Draw!"; streak = 0;}
                        else if (comp == 3) {cout << "Computer chose: Scissors. \nComputer Wins!"; streak = 0;}
                        break;

                case 3:
                        cout << "You chose: Scissors \n";
                        sleep(1);
                        if (comp == 1) {cout << "Computer chose: Stone. \nComputer Wins!"; streak = 0;}
                        else if (comp == 2) {cout << "Computer chose: Paper. \nYou Win!"; streak = ++streak;}
                        else if (comp == 3) {cout << "Computer chose: Scissors. \nGame Draw!"; streak = 0;}
                        break;

                default:
                        sleep(1);
                        cout << "Sorry. Please enter a vaild number.";
                }

                sleep(1);
                cout << "\nStreak = " << streak;
                sleep(1);
                if (streak != 0)
                {
                  high = streak;
                }
                cout << "\nHigh = " << high;
                sleep(2);
                cout << "\n \nPress 1 to play again and 0 to quit. \n";
                cin >> replay;
        }
}
