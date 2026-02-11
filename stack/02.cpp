
#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int>& st, int val) {
    if (st.empty()) {
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, val);
    st.push(temp);
}

int main() {
    stack<int> st;
    int x;
    while (cin >> x) {
        st.push(x);
    }
    int val = 10;
    insert(st, val);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
}
