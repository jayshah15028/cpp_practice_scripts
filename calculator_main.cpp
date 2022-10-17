#include <iostream>
#include "calculator.h"
using namespace std;

int main(){

    
    cout << "Enter the first number: " << flush;
    float num1;
    cin >> num1;
    cout << "Enter the second number: " << flush;
    float num2;
    cin >> num2;
    Calculator calc(num1,num2);
    //calc.num1 = num1;
    //calc.num2 = num2;
    float sum,diff,product,division;
    sum = calc.addNums();
    diff = calc.subtractNums();
    product = calc.multiplyNums();
    division = calc.divideNums();
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;

    return 0;
}