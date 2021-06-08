#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            if(i!=n/i){//useful in case of perfect square.
                cout<<n/i<<endl;
            }
        }
    }
}