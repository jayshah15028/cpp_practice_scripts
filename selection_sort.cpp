#include <iostream>
#include <vector>
#include <limits>

void selection_sort(std::vector<int> &arr){
    int min = std::numeric_limits<int>::max();
    int index = arr.size();
    for (int i=0;i<arr.size();i++){
        int min = std::numeric_limits<int>::max();
        for (int j=i;j<arr.size();j++){
            if (min>arr[j]){
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

int main(){

    std::vector<int> array = {-1,2,5,5,2,-4};
    
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    selection_sort(array);
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    
    return 0;
}