#include<iostream>
using namespace std;
int main(){
    int arr[9]={4,2,9,3,2,8,24,57,76};
    int n=9;
    int x=23;
    for (int i=0; i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    }
}