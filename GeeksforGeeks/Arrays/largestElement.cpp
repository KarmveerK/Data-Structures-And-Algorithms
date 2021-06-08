#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,9,3,5,4};
    int idx;
    int l = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<len;i++){
        if(arr[i]>l){
            l=arr[i];
            idx = i;
        }
    }
    cout<<"largest element in the array is "<<l<<" with index "<<idx;
}