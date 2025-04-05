#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;            
    }
};
    int main(){
        Node a(10);
        cout<<a.val<<endl;

}