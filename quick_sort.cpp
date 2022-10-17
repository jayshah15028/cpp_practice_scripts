#include <iostream>
#include <vector>

int partition(std::vector<int> &arr,int l, int r){
    int pivot = arr[r];
    int i=l-1, j=l;
    for (j;j<r;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = pivot;
    arr[r] = temp;
    
    return i;
}

void quickSort(std::vector<int> &arr,int l, int r){
    if (l<r){
        int part = partition(arr,l,r);
        quickSort(arr,l,part-1);
        quickSort(arr,part+1,r);
    }
}

int main(){

    std::vector<int> array = {-1,2,5,5,2,-4,9,-10,34};
    
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    quickSort(array,0,array.size()-1);
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl; 
    return 0;
}