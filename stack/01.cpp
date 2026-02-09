
#include <iostream>
using namespace std;

class MyStack {
public:
    int *arr;
    int size;
    int top;

    MyStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~MyStack() {
        delete[] arr;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};


int main() {
    MyStack st(5);
    int x;
    while(cin>>x){
        st.push(x);
    }
    

    cout<<"Top element: "<<st.peek()<<endl;

    st.pop();
    cout<<"Top element after pop: "<<st.peek()<<endl;

    if(st.isEmpty()) {
        cout<<"Stack is empty"<<endl;
    }
    else {
        cout<<"Stack is not empty"<<endl;
    }
}


