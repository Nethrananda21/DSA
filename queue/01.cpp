#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
        Queue(int size){
            this->size=size;
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        void enqueue(int val){
            if(rear==size-1){
                cout<<"Queue Overflow"<<endl;
                return;
            }
            if(front==-1){
                front=0;
            }
            rear++;
            arr[rear]=val;
        }
        void dequeue(){
            if(front==-1 || front>rear){
                cout<<"Queue underflow"<<endl;
                return;
            }
            front++;
        }

        int getFront() {
            if (front == -1 || front > rear) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return arr[front];
        }

};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue(); // This will trigger underflow

    return 0;
}