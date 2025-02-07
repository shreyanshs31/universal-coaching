//16. How do you implement a recursive function using a stack?

#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n == 1){
        return n;
    }
    return n*fact(n-1);
}

int main() {
    int n = 5;
    cout<<fact(5)<<endl;
}