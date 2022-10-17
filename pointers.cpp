#include <iostream>

using namespace std;

void changeValue(int *pValue){
    *pValue = 100;
    cout << *pValue << endl;
}

int main(){

    int value = 10;

    int *pValue = &value;

    cout << *pValue << endl;

    changeValue(pValue);

    cout << *pValue << endl;

    return 0;
}