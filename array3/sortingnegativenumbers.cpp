#include<iostream>
#include<vector>
using namespace std;
void sort0(vector<int>& n){
    int i=0;
    int j=n.size()-1;
    while(i<j){
        if(n[i]<=0) i++;
        if(n[j]>0) j--;
        if(i>j) break;
        if(n[i]>0 && n[j]<0){
            swap(n[i],n[j]);
            i++;
            j--;
        }
        }
}
int main(){
    vector<int> n;
    n.push_back(0);
    n.push_back(-1);
    n.push_back(7);
    n.push_back(1);
    n.push_back(-2);
    n.push_back(1);
    n.push_back(-3);
    n.push_back(8);
    // n.push_back(1);
    // n.push_back(0);
    // n.push_back(0);
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;

    sort0(n);
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

