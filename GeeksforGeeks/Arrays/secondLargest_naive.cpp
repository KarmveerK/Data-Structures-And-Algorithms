#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,8,6,9,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int l=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    int sl = arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>sl && arr[i]<l){
            sl=arr[i];
        }
    }
    cout<<"second largest is "<<sl;
}