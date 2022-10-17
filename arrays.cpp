#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int values[3];

    values[0] = 1;
    values[1] = 3;
    values[2] = 5;
    cout << values << endl;

    double nums[6] = {0.332,3.42,4256.5,42.484,9.45,1475.26};
    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << fixed << nums[2] << endl;

    return 0;
}