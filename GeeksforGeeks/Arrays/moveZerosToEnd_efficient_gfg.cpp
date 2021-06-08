#include<iostream>
using namespace std;

//less complex and more readable.

void moveZeros(int a[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(a[i] != 0){
            swap(a[count], a[i]);
            count++;
        }
    }
}

int main(){
    int a[] = {1,2,0,0,3,0,4,0};
    int size = sizeof(a) / sizeof(a[0]);
    moveZeros(a, size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}