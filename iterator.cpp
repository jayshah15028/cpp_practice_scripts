#include <iostream>
using namespace std;

int main(){

    for (int i=0;i<10000;i++){
        if (i%100==0){
            cout << "*" << flush;
        }
    }
    return 0;
}