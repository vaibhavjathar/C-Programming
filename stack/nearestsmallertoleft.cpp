#include<iostream>
#include<stack>
using namespace std;
vector<int> leftSmaller(int n, int a[]) {
        vector<int> v;
        stack<int> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && s.top() >= a[i]) {
                s.pop();
            }

            if (s.empty()) {
                v.push_back(-1);
            } else {
                v.push_back(s.top());
            }
            s.push(a[i]);
        }

        return v;
    
int main(){
    
}