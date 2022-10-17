#include <iostream>
#include <iomanip>
#include "utils.h"
using namespace std;

void displayMenu(){
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;

    cout << "Enter your selection: " << flush;
}
/*
int takeInput(){
    int input;
    cin >> input;
    return input;
}
*/
void viewSelection(int selection){
    switch(selection){
    case 1:
        cout << "Searching..." << endl;
        break;
    case 2:
        cout << "Viewing Records..." << endl;
        break;
    case 3:
        cout << "Quitting..." << endl;
        break;
    default:
        cout << "Improper Selection" << endl;
        break;
    }
}

int main(){
    displayMenu();
    Input inputObject; 
    int input = inputObject.takeInput();
    //takeInput();
    cout << endl;
    viewSelection(input);
    return 0;
}