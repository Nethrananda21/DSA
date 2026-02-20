#include<iostream>
using namespace std;

class MaxHeap{
    public:
        vector<int>heap;
        void BubbleUp(int index){
            
            while(index>0){
                int parent=(index-1)/2;
                if(heap[index]>heap[parent]){
                    swap(heap[index], heap[parent]);
                    index=parent;
                }
                else{
                    break;
                }
            }
        }
        void heapify(vector<int>v, int n, int i){
            int size=heap.size();
            int largest=i;
            int left=2*i+1;
            int right=2*i+2; 
            
            if(left<size && heap[left]>heap[largest]) largest=left;
            if(right<size && heap[right]>heap[largest]) largest=right;
            
            if(largest!=i){
                swap(heap[largest], heap[i]);
                heapify(arr,n,largest);
            }
        }
        void insert(int value){
            heap.push_back(value);
            BubbleUp(heap.size()-1);
            for (int i = n / 2 - 1; i >= 0; i--)
                heapify(arr, n, i);
        }
}