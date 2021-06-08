#include<iostream>
using namespace std;

int secondLargest(int a[], int size){
    int sl = -1;
    int l = 0;
    for(int i=1; i<size; i++){
        if(a[i] > a[l]){
            sl = l;
            l = i;
        }
        else if(a[i] != a[l]){
            if(sl == -1 || a[i] > a[sl]){
                sl = i;
            }
        }
    }
    return sl;
}

int main(){ 
    int arr[] = {1, 2, 8, 6, 9, 4, 5}; 

    //int arr[] = {1,4,7,8,43,6,34,67,1,31,54};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"second largest number is "<<arr[secondLargest(arr, n)]<<" with the index "<<secondLargest(arr, n);
}