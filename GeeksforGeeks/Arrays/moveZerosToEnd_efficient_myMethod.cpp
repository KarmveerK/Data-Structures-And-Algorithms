#include<iostream>
using namespace std;

//more complicated but better than gfg .

void moveZeros(int a[], int size){
    int s=0; //just a pointer.
    for(int i=0; i<size; i++){
        if(a[s] == 0 && a[i] != 0) {
            swap(a[i], a[s]);
            s++;
        }
        if(a[i] != 0) s++;
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