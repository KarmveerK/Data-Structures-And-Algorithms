#include<iostream>
using namespace std;

bool isSorted(int a[], int size){
    for(int i=1; i<size; i++){
        if(a[i] < a[i-1]) return false;
    }
    return true;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<isSorted(a, size);
}
