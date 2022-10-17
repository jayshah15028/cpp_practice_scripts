#include <iostream>
#include <vector>

using namespace std;

int parent(int k){
    return (k-1)/2;
}

void swap(int& x, int& y){
    int temp = x;
    x=y;
    y=temp;
}

void minHeapify(vector<int> &arr){
    int size = arr.size();
    if (size==1){return;}
    for (int i=size-1;i>0;i--){
        if (arr[i]<arr[parent(i)]){
            swap(arr[i],arr[parent(i)]);
        }
    }
}

void print(vector<int> &arr){
    for (int i=0; i<arr.size();i++){
        cout << arr[i] << " " << flush;
    }
    cout << "" << endl;
}

int extractMin(vector<int>& arr){
    int k = arr[0];
    arr.erase(arr.begin());
    minHeapify(arr);
    return k;
}

int main(){

    vector<int> array = {4,3,-5,6,7,10,6,2,-4,0};
    int size = array.size();
    vector<int> sorted;
    minHeapify(array);
    for(int i=0;i<size;i++){
        sorted.push_back(extractMin(array));
    }

    print(sorted);

    return 0;
}