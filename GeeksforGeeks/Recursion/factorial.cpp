#include<iostream>
using namespace std;
int factorial(int n, int k){
    if(n==0 || n==1)return k;
    return factorial(n-1,k*n);
}
int main(){
    int n,k=1;
    n=4;
    cout<<"factorial is "<<factorial(n,k);
    return 0;
}
