#include<iostream>
using namespace std;

void leftRotateByD(int a[], int size, int D){
    int temp[D];

    for(int i=0; i<D; i++){
        temp[i] = a[i]; // now contains the fist D elements of array        
    }

    for(int i=D; i<size; i++){
        a[i-D] = a[i]; // shifts by D places 
    }

    for(int i=0; i<D; i++){
        a[i+size-D] = temp[i];
        
    }
   
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);

    leftRotateByD(a, size, 3);
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}