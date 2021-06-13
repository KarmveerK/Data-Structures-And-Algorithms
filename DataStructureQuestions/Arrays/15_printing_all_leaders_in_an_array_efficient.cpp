//An element is called the leader of an array if there is no element greater than it on the right side.


#include<iostream>
using namespace std;

void leaderInArray(int a[], int size){

    int curr_ldr = a[size-1];
    cout<<curr_ldr<<" ";

    for(int i=size-2; i>=0; i--){
        if(a[i] > curr_ldr){
            curr_ldr = a[i];
            cout<<curr_ldr<<" ";
        }
    }
}

int main(){
    int a[] = {7, 10, 4, 10, 6, 5, 2};
    int size = sizeof(a)/sizeof(a[0]);
    leaderInArray(a, size);
}   
