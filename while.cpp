#include <iostream>
using namespace std;

int main() {

    int i = 0;
    while(i<10){
        if(i<5){
            cout << -i << endl;
        }
        else{
            cout << i << endl;
        }
        
        i+=1;
    }
    const string password = "password";
    string input;
    do{
        cout << "Enter the password: " << flush;
        cin >> input;
        i+=1;
    } while(input != password);
    cout << "Correct password" << endl;
    return 0;
}