#include<iostream>
using namespace std;
int sum(int n, int s){
    if(n==0)return s;
    return sum(n/10,s+(n%10));
}
int main(){
    int n=12345,s=0;
    cout<<sum(n,s);
}