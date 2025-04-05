 #include<iostream>
 using namespace std;
 int main(){
    int arr[]={2,3,4,5};
    int* ptr=arr;
    for(int i=0; i<=3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
    *ptr=8;
    for(int i=0; i<=3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    
 }