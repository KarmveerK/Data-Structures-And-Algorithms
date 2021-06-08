#include<iostream>
using namespace std;
bool isPow2(int n){
    if(n==0)return true;
    return ((n&(n-1))==0);
}
int main(){
    int n;
    cout<<"Enter a number  ";
    cin>>n;
    if(isPow2(n)==true)cout<<"true";
    else cout<<"false";
}