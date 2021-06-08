#include<iostream>
using namespace std;

void findLeaders(int a[], int size){
    int curr_ldr = a[size-1];
    cout<<curr_ldr<<"  ";

    for(int i=size-2; i>=0; i--){
        if(a[i] > curr_ldr){
            curr_ldr = a[i];
            cout<<curr_ldr<<"  ";
        }
    }
}

int main(){
    int a[] = {7, 10, 6, 10, 4, 5, 2};
    int size = sizeof(a) / sizeof(a[0]);
    findLeaders(a, size);
}