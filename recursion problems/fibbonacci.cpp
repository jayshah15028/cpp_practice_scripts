#include <iostream>
#include <vector>

int fib(int n){

    if (n<=2){
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main(){

    std::vector<std::vector<int>> result(3,std::vector<int>(3,0)); 
    std::cout << result.size() << " " << result[0].size() << std::endl;

    std::vector<int> {1,2,3};

    int fib_n = fib(20);

    std::cout << fib_n << std::endl;

    return 0;
}