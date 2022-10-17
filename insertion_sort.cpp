#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &arr){
    for (int i=1; i<arr.size(); i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}


int main(){

    std::vector<int> array = {-1,2,5,5,2,-4};
    
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    insertion_sort(array);
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    return 0;
}