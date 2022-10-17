#include <iostream>
#include <vector>

void reverse(std::vector<int> &arr,int l, int r){
    if (l<r){
        int temp = arr[r];
        arr[r] = arr[l];
        arr[l] = temp;
        l++; r--;
        reverse(arr,l,r);
    }

}

int main(){

    std::vector<int> array = {1,2,3,5,6,9};

    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;

    reverse(array,0,array.size()-1);

    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;

    return 0;
}