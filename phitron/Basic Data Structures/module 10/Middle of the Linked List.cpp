#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;

        void push(int x)
        {
            v.push_back(x);
        }
        void pop()
        {
            if(!v.empty())
                v.pop_back();
        }
        int top()
        {
            if(!v.empty())
                return v.back();
            return -1;
        }
        int size()
        {
            return v.size();
        }
        bool isEmpty()
        {
            return v.empty();
        }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    return 0;
}