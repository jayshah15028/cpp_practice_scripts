#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int& j = i;

    cout << i << " " << j << endl;

    i = 3;

    cout << i << " " << j << endl;

    j = 5;

    cout << i << " " << j << endl;

    return 0;
}