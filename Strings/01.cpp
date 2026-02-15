```cpp
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string str = "sky is blue";
    stack<string> s;
    string temp = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            s.push(temp);
            temp = "";
        } else {
            temp += str[i];
        }
    }
    s.push(temp);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}