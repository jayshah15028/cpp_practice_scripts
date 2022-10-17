#include <iostream>

int sum(int n){
    if (n<=1){
        return n;
    }
    else {
        return n+sum(n-1);
    }
}

int main(){

    int summation = sum(4);

    std::cout << summation << std::endl;

    return 0;
}