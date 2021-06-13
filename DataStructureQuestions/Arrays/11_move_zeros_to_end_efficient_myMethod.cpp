#include<iostream>
using namespace std;

void moveZeros(int a[], int size){
    int curr = 0;

    for(int i=0; i<size; i++){
        if(a[curr] != 0) curr++;
        else if(a[curr] == 0 && a[i] != 0){
            swap(a[curr], a[i]);
            curr++;
        }
    }
}

int main(){
    int a[] = {1, 2, 0, 0, 3, 0, 4, 0};
    int size = sizeof(a)/sizeof(a[0]);
    moveZeros(a, size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}
