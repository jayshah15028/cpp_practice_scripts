#include <iostream>
using namespace std;

int main(){

    string nums[] = {"1","2","3","4","5","6"};
    string *pNums = nums;
    cout << pNums << " " << &nums[0] << endl;
    return 0;
}