#include<iostream>
#include<vector>
using namespace std;
void sort0(vector<int>& n){
    int noz=0;
    int noO=0;
    for(int i=0; i<n.size();i++){
        if(n[i]==0) noz++;
        else noO++;
    }
    for(int i=0; i<n.size();i++){
        if(i<noz) n[i]=0;
        else n[i]=1;
    }
}
int main(){
    // int x;
    // cout<<"Enter the size of the array: ";
    // cin>>x;
    // vector<int> n[x];
    // cout<<"Enter zeros and ones: ";
    // for(int i=0; i<x; i++){
    //     cin>>n[x];
    // }
    vector<int> n;
    n.push_back(0);
    n.push_back(1);
    n.push_back(1);
    n.push_back(0);
    n.push_back(0);
    n.push_back(1);
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;

    sort0(n);
    // sort(n.begin(),n.end());
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;
}

