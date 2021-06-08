#include<iostream>
using namespace std;

void leftRotate(int a[], int size){

    int firstElement = a[0];
    for(int i=1; i<size; i++){
        a[i-1] = a[i];
    }
    a[size-1] = firstElement;
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);

    leftRotate(a, size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}