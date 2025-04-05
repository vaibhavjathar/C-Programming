#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int sumA, sumB, sumC;
    int n;
    cin>>n;
    for(int i=0; i < n; i++){
        int a,b,c;
        cin>> a>>b>>c;
        sumA+=a;
        sumB+=b;
        sumC+=c;
    }
    if(sumA==0 && sumB==0 && sumC==0) cout<<"YES";
    else cout<<"NO";
}