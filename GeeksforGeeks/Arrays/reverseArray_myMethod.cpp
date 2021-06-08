#include<iostream>
using namespace std;

void reverse(int a[], int size){
    int p = size-1;
    for(int i=0; i<size/2; i++){
        swap(a[i], a[p]);
        p--;
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);

    reverse(a, size);

    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}