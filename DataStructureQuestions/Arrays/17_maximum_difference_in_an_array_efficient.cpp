//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.


#include<iostream>
using namespace std;

int maximumDiff(int a[], int size){
    int minValue = a[0];
    int res = a[1] - a[0];
    for(int i=1; i<size; i++){
        res = max(res, a[i] - minValue);
        minValue = min(minValue, a[i]);
    }
}

int main(){
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<maximumDiff(a, size);
}
