#include<iostream>
using namespace std;

int linearSearch(int a[], int size, int x){
    for(int i=0; i<size; i++){
        if(a[i] == x) return i;
    }
    return -1;
}

int main(){
    int a[] = {1, 2, 3, 4, 5 , 6, 7};
    int size = sizeof(a)/sizeof(a[0]);
    int x = 4;
    cout<<"the element "<<x<<" is present at index "<<linearSearch(a, size, x);
}
