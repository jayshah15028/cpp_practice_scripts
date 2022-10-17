#include <iostream>

long factorial(int n){

    if (n==1){
        return n;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){

    long facto = factorial(20);

    std::cout << facto << std::endl;

    return 0;
}