#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the values of a and b ";
    cin>>a>>b;
    cout<<"the lcm is "<<(a*b)/gcd(a,b);
}