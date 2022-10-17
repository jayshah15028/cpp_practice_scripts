#ifndef CALCULATOR
#define CALCULATOR
#include <iostream>
using namespace std;
class Calculator{
public:
    float num1;
    float num2;
    float addNums();
    float subtractNums();
    float multiplyNums();
    float divideNums();
    Calculator(float num1, float num2);
    Calculator();
};

#endif