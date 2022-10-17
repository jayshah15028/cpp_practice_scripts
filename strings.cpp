#include <iostream>
using namespace std;

int main(){
    string value = "This is a string";

    cout << value << endl;

    return 0;
}

string printName(string name){

    cout << "The name is: " << name << endl;

    return name;
}

string name = printName("Jay");