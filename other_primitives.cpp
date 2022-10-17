#include <iostream>
using namespace std;

int main(){
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;

    char c = 55;
    cout << sizeof(c) << endl;
    char c_ = 'j';
    cout << (int)c_ << endl;

    wchar_t cc = 'a';
    cout << sizeof(cc) << endl;
    return 0;
}