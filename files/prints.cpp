//
// Created by Zacha on 2023-08-22.
//
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <algorithm>
#include "../header/prints.h"

using namespace std;
using namespace std::chrono_literals;

void printTitleScreen() {
    string title = "| Valley of the Forsaken |";

    string space = "| ";
    space.insert(2, title.length() + 1, ' ');
    space.insert(space.length() - 4, 1, '|'); //I have no idea why the -4.

    string wall;
    wall.insert(0, title.length(), '-');

    cout << wall << endl;
    cout << space << endl;
    cout << title << endl;
    cout << space << endl;
    cout << wall << endl;
}

int choice(int type) {
    vector<string> choices;
    switch (type) {
        case 0:
            choices.emplace_back("New Game");
            choices.emplace_back("Continue");
            choices.emplace_back("Quit");
            break;
        case 1:
            choices.emplace_back("Move");
            choices.emplace_back("Info");
            choices.emplace_back("Save and Quit");
            break;
        case 5:
            choices.emplace_back("Attack");
            choices.emplace_back("Item");
            choices.emplace_back("Run");
        default:
            return -1; //This will never happen.
    }
    for (string & choice : choices) {
        cout << "- ";
        cout << choice << std::endl;
        transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){
            return tolower(c);
        });
    }
    string choice;
    cout << "What to do: ";
    getline(cin, choice);

    for (char & i : choice) {
        i = tolower(i);
    }

    while (true) {
        for (int i = 0; i < choices.size(); i++) {
            if (choice == choices.at(i)) {
               return i;
            }
        }
        cerr << "Invalid option!" << std::endl;
        cout << "What to do: ";
        getline(cin, choice);
    }
}

void wait(long time) {
    this_thread::sleep_for(std::chrono::milliseconds(time));
}