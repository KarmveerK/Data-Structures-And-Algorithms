
#include<iostream>
using namespace std;

void countFrequency(int a[], int size){
    int count = 1;
    for(int i=1; i<size; i++){
        if(a[i] == a[i-1]){
            count++;
        }
        else{
            cout<<a[i-1]<<" : "<<count<<endl;
            count = 1;
        }
    }
    cout<<a[size-1]<<" : "<<count;
}

int main(){
    int a[] = {10, 10, 10, 25, 30, 30};
    //int a[] = {1,1,1,1,1,1};
    //int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    countFrequency(a, size);
}
