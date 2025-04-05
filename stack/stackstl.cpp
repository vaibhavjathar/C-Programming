#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    // cout<<st.size()<<endl;
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        int x= st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        cout<<temp.top();
        temp.pop();
    }
    // while(temp.size()>0){
    //     temp.pop();
    //     int x=temp.top();
    //     st.push(x);
    // }
    // cout<<st.top();
}