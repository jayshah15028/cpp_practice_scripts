#include <iostream>
#include <sstream>
using namespace std;

int main(){

    string name = "Jay";
    int age = 24;

    stringstream ss;
    
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    cout << ss.str() << endl;
    return 0;
}