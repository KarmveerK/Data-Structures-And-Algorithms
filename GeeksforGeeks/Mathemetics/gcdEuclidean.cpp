#include<iostream>
using namespace std;
int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(b>a){
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter the values of a and b : ";
    cin>>a>>b;
    cout<<"gcd is "<<gcd(a,b);
}