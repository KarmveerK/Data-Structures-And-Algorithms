#include<iostream>
using namespace std;
int calculate(int n,int sum){
    if(n==0)return sum;
    return calculate(n-1, sum+n);
}
int main(){
    int n=5,sum=0;
    cout<<calculate(5,sum);
}