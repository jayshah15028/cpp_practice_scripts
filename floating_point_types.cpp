#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float value = 44.4;
    double dvalue = 44.4;
    //cout << scientific << value << endl;
    
    cout << value << endl;
    cout << setprecision(10) << fixed << value << endl;
    cout << setprecision(10) << fixed << dvalue << endl;
    return 0;
}