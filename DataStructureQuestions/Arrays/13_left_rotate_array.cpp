#include<iostream>
using namespace std;

void leftRotateArray(int a[], int size){
    int temp = a[0];
    for(int i=1; i<size;i++){
        a[i-1] = a[i];
    }
    a[size-1] = temp;
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    leftRotateArray(a, size);
    cout<<"Left rotated array :"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}
