#include<iostream>
using namespace std;
void star(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
    }
    cout<<endl;
}
}
int main(){
    int n,b,m;
    cin>>n;
    cin>>b;
    cin>>m;
    star(n);
    star(b);
    star(m);
}