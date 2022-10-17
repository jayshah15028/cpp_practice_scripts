#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &arr){
    bool swapped = true;
    while (swapped){
        swapped = false;
        for (int i=0; i<arr.size()-1;i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
        }
    }
}

int main (){

    std::vector<int> array = {-1,-4,3,5,2,6};
    
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    bubble_sort(array);
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    return 0;
}