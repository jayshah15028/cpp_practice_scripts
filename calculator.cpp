#include <iostream>
#include "calculator.h"

using namespace std;

float Calculator::addNums(){
    float result;
    result = num1 + num2;
    return result;
}

float Calculator::subtractNums(){
    float result;
    result = num1 - num2;
    return result;
}

float Calculator::multiplyNums(){
    float result;
    result = num1*num2;
    return result;
}

float Calculator::divideNums(){
    float result;
    result = num1/num2;
    return result;
}

Calculator::Calculator(float num1, float num2): num1(num1), num2(num2){
    
}

Calculator::Calculator(): num1(0),num2(0){
}