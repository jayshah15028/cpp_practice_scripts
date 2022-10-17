#include <iostream>

using namespace std;

void swap(int& pos1, int& pos2){
            int temp = pos1;
            pos1 = pos2;
            pos2 = temp;
        }

class minHeap{
    public:
        int *harr;
        int capacity;
        int heap_size;

        minHeap(int cap){
            heap_size = 0;
            capacity = cap;
            harr = new int[cap];
        }

        void linearSearch(int val){
            for (int i=0; i<heap_size;i++){
                if(harr[i]==val){
                    cout << "Value Found" << endl;
                    return;
                }
            }
            cout << "[WARNING]: In minHeap::linearSearch - Value NOT Found" << endl;
        }

        int parent(int pos){
            if (pos==0){
                return 0;
            }
            return (pos-1)/2;
        }

        void insertKey(int k){
            if (heap_size==capacity){
                cout << "[ERROR]: In minHeap::insertKey - Overflow: Heap full" << endl;
                return;
            }
            heap_size++;
            int i = heap_size-1;
            harr[i] = k;
            while(i!=0 && harr[parent(i)]>harr[i]){
                swap(harr[i],harr[parent(i)]);
                i = parent(i);
            }

        }

        void print(){
            cout << "Priting heap array" << endl;
            cout << "[" << flush;
            for (int i=0; i<heap_size;i++){
                cout << harr[i] << " " << flush;
            }
            cout << "]" << endl;
        }
};

int main (){
    minHeap heap(10);

    heap.insertKey(3);
    heap.print();
    heap.insertKey(5);
    heap.print();
    heap.insertKey(1);
    heap.print();
    heap.insertKey(4);
    heap.print();
    heap.linearSearch(4);
    heap.linearSearch(8);
    return 0;
}