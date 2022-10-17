#include <iostream>

using namespace std;

int *buildArray(int size){

    int *array = new int[size];
    for (int i=0;i<size;i++){
        array[i] = i+1;
    }
    return array;
}

void freeMemory(int *array){
    delete [] array;
}

int main(){

    int *arr = buildArray(5);
    for (int i=0;i<5;i++){
        cout << arr[i] << endl;
    }
    freeMemory(arr);

    return 0;
}