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
        void BubbleDown(){
            int i=0, size=heap.size();
            while(i<size){
                int left=2*i+1;
                int right=2*i+2; 
                int largest=i;
                if(left<size && heap[left]>heap[largest]) largest=left;
                if(right<size && heap[right]>heap[largest]) largest=right;
                if(largest!=i){
                    swap(heap[largest], heap[i]);
                    i=largest;
                }
                else break;  
            }
            

        }
        void insert(int value){
            heap.push_back(value);
            BubbleUp(heap.size()-1);
            
        }
}