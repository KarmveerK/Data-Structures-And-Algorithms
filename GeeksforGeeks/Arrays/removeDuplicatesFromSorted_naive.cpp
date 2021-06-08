#include<iostream>
using namespace std;

int removeDuplicates(int a[], int size){
    int temp[size];
    temp[0] = a[0];
    int res = 1;
    for(int i=1; i<size; i++){
        if(temp[res-1] != a[i]) {
            temp[res] = a[i];
            res++;
        }
    }
    for(int i=0; i<res; i++){
        a[i] = temp[i];
    }
    return res;
}

int main(){
    int a[] = {10,20,20,30,30,30};
    int size = sizeof(a) / sizeof(a[0]);
    int n = removeDuplicates(a, size);
    for(int i=0; i<n; i++){
        cout<<a[i]<<"  ";
    }
}