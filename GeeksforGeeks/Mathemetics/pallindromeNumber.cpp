#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int num = n;
    int ld=0, rev=0;
    while(n>0){
        ld = n%10;
        rev = rev*10 + ld;
        n = n/10;
    }
    if(rev==num){
        return true;
    }
    else return false;
}