#include<iostream>
using namespace std;

int maximumDifference(int a[], int size){
    int res = a[1] - a[0];
    int minVal = a[0];
    for(int i=1; i<size; i++){
        res = max(res, a[i] - minVal);
        minVal = min(minVal, a[i]);
    }
    return res;
}

int main(){
    int a[] = {2, 3, 4, 10, 6, 4, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);

    cout<<maximumDifference(a, size);
}