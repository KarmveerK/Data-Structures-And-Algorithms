#include<iostream>
using namespace std;

int maxSumSubarray(int a[], int size){
    int res = a[0];
    int maxEnding = a[0];
    for(int i=1; i<size; i++){
        maxEnding = max(maxEnding+a[i], a[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main(){
    int a[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<maxSumSubarray(a, size);
}