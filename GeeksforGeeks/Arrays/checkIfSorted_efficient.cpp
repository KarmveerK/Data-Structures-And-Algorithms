#include<iostream>
using namespace std;

bool isSorted(int a[], int size){
    
    for(int i=0; i<size-1; i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}

int main(){
    int a[] = {1, 2, 8, 9, 9, 15, 54};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<isSorted(a, n);
}