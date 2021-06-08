#include<iostream>
using namespace std;

void reverse(int a[], int size){

    int low=0, high=size-1;
    while(low<high){
        swap(a[low], a[high]);
        low++;
        high--;
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