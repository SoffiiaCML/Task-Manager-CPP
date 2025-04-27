#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numOfTask;
    string tasks[100];
    int alp = 0;

    do {
        cout << "\nChoose what to do:\n"
             << "1. Add new task\n"
             << "2. Show all tasks\n"
             << "3. Delete a task\n"
             << "4. Exit\n";
        cin >> numOfTask;
        cin.ignore(); 

        if (numOfTask == 1) {
            if (alp < 100) {
                cout << "Enter your task: \n";
                getline(cin, tasks[alp]);
                alp++;
            } else {
                cout << "The task list is full!\n";
            }
        }
        else if (numOfTask == 2) {
            if (alp == 0) {
                cout << "There are not any tasks.\n";
            } else {
                cout << "Your task:\n";
                for (int i = 0; i < alp; i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (numOfTask == 3) {
            if (alp == 0) {
                cout << "There are not any tasks.\n";
            } else {
                int del;
                cout << "Enter task number (1-" << alp << "): ";
                cin >> del;
                cin.ignore(); 
                if (del > 0 && del <= alp) {
                    for (int i = del - 1; i < alp - 1; i++) {
                        tasks[i] = tasks[i + 1];
                    }
                    alp--; 
                    cout << "The task is delete.\n";
                } else {
                    cout << "It is the wrong number.\n";
                }
            }
        }
        else if (numOfTask != 4) {
            cout << "Wrong number.Tre again\n";
        }
    } while (numOfTask != 4);

    cout << "Exiting the program. Bye!\n";

    return 0;
}
