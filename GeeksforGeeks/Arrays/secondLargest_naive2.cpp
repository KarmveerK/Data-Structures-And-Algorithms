#include<iostream>
using namespace std;

int largest(int a[], int n){
    int l = 0;
    for(int i=0; i<n; i++){
        if(a[i]>a[l]) l = i;
    }
    return l;
}

int secondLargest(int a[], int n){
    int l = largest(a,n);
    int sl = -1;

    for(int i=0; i<n; i++){
        if(a[i]!=a[l]){ 
            if(sl==-1){
                sl=i;
            }
            else if(a[i]>a[sl]){
                sl=i;
            }
        }
    }
    return sl;
}

int main(){
    int arr[]={1,2,8,6,9,4,5};
    cout<<secondLargest(arr, 7);
}