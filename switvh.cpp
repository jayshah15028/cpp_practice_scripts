#include <iostream>
using namespace std;

int main(){

    int input;
    cout << "Enter the number: " << flush;
    cin >> input;
    const int one = 1;
    switch(input){
        case one:
            cout << "You entered " << input << endl;
            break;
        case 2:
            cout << "You entered " << input*2 << endl;\
            break;
        default:
            cout << "Wrong choice" << endl;
            break; 
    }

    return 0;
}