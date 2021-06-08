#include<iostream>
using namespace std;
int deleteElement(int arr[], int n, int cap, int x, int pos){
    if(cap == n){
        cout<<"array is full\n";
        return n;
    }
    int idx = pos-1;
    for(int i=n-1; i>=idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}
int main(){

}