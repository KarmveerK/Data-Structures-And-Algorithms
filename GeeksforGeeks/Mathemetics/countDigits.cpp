#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        count+=1;   
        n=n/10;
    }
    cout<<"the number of digits in the number is "<<count;
}
