#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(74);
    s.push(23);
    s.push(55);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
