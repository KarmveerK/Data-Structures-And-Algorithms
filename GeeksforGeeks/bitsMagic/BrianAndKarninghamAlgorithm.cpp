//used to count number of set bits in a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int count = 0;
    while(n>0){
        n=n&(n-1);//do this on paper
        count++;
    }
    cout<<"count is "<<count;
}
