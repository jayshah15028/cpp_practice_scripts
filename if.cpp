#include <iostream>
using namespace std;

int main(){
    string password = "password";
    cout << "Enter your password: " << flush;

    string input;
    cin >> input;

    if(input==password){
        cout << "Welcome!!" << endl;
    }
    else{
        cout << "Take a hike, imposter!!!" << endl;
    }

    return 0;
}