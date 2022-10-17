#include <iostream>
#include <vector>

void merge(std::vector<int> &arr, int l, int mid, int r){
    std::vector<int> left_arr,right_arr;
    for (int i=l;i<=mid;i++){
        left_arr.push_back(arr[i]);
    }
    for (int i=mid+1;i<=r;i++){
        right_arr.push_back(arr[i]);
    }
    int i=0,j=0,k = l;
    while (i<left_arr.size() && j<right_arr.size()){
        if (left_arr[i]<right_arr[j]){
            arr[k] = left_arr[i];
            k++; i++;
        }
        else {
            arr[k] = right_arr[j];
            k++; j++;
        }
    }
    while(i<left_arr.size()){
        arr[k] = left_arr[i];
        k++; i++;
    }
    while(j<right_arr.size()){
        arr[k] = right_arr[j];
        k++; j++;
    }
}

void mergeSort(std::vector<int> &arr, int l, int r){
    if (l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main(){

    std::vector<int> array = {-1,2,5,5,2,-4,9,-10,34};
    
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;
    mergeSort(array,0,array.size()-1);
    for (int i=0; i<array.size();i++){
        std::cout << array[i] << "  " << std::flush;
    }
    std::cout << "" << std::endl;    
    return 0;
}