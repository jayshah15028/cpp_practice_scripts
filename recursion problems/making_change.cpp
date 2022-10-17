#include <iostream>
#include <vector>

int makeChange(int amount){

    std::vector<int> coins = {100,50,25,10,5,1};
    int i = 0;
    while (amount/coins[i]==0){i++;}
    if (amount%coins[i]==0){
        return amount/coins[i];
    }
    else {
        return amount/coins[i] + makeChange(amount%coins[i]);
    }
    }

int main(){

    int nCoins = makeChange(99);

    std::cout << nCoins << std::endl;

    return 0;
}