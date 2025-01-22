#include <bits/stdc++.h>
using namespace std;

class Dynamic_Stack{
    private:
    vector<int> v;
    public:
    void push(int data) 
    {
        v.push_back(data);
    }
    void pop(){
        if(isEmpty())
        {
            cout<<"\nStack Underflow"<<endl;
        }
        else
        {
            int top = v.back();
            v.pop_back();
            cout<<"\nPoped value: "<< top<<endl;
        }
    }
    void peek()
    {
        if(isEmpty()) {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Top item is: "<<v.back()<<endl;
        }
    }
    void display()
    {
        for(int i = v.size()-1; i>=0;i--) {
            cout<<v[i]<<"->";
        }
        cout<<"END"<<endl;
    }

    bool isEmpty()
    {
        return v.empty();
    }

};

int main()
{
    Dynamic_Stack s;
    s.push(34);
    s.push(33);
    s.push(4);
    s.push(82);
    s.push(77);
    s.pop();
    s.peek();
    s.display();
    return 0;
}
