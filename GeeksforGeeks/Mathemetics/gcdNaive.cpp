#include<iostream>
using namespace std;
int min(int a, int b){
    if(a<b)return a;
    return b;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b : ";
    cin>>a>>b;
    int m = min(a,b);
    while(m>1){
        if(a%m==0 && b%m==0){
            cout<<"hcf is "<<m;
            break;
        }
        m--;
    }
}