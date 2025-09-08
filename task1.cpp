#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10
}
