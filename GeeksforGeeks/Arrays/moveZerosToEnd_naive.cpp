#include<iostream>
using namespace std;

void moveZeros(int a[], int size){
    for(int i=0; i<size; i++){
        if(a[i] == 0){
            for(int j=i+1; j<size; j++){
                if(a[j] != 0){
                    swap(a[i], a[j]);
                    break;
                }
            }
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