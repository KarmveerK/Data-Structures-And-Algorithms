#include<iostream>
using namespace std;

void calculateFrequencies(int a[], int size){
    int curr = a[0];
    int count = 0;
    for(int i=0; i<size; i++){
        if(a[i] == curr) count++;
        else{
            cout<<a[i-1]<<"  : "<<count<<endl;
            count = 1;
            curr = a[i];
        }
    }
    cout<<a[size-1]<<"  : "<<count;
}

int main(){
    int a[] = {1,2,2,3,3,3,4,4,4,4};
    //int a[] = {1,1,1,1,1,1};
    //int a[] = {1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]);
    calculateFrequencies(a, size);
}