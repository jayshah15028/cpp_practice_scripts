#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float num;
    cout << "Enter the number: " << flush;
    cin >> num;
    float x = 1;
    float i = 1;
    while (abs(x*x - num)>0.0001){
        x = x + 0.3*(x*x - num);
        i++;
    }
    cout << x << endl;
    return 0;
}