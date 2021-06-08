//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
#include<iostream>
#include<math.h>
using namespace std;

int maximumDifference(int a[], int size){
    int maxD = a[size-1]-a[0];
    for(int i=size-1; i>=0; i--){
        for(int j=0; j<i; j++){
                maxD = max(maxD, a[i]-a[j]);
        }
    }
    return maxD;
}

int main(){
    int a[] = {2, 3, 4, 10, 6, 4, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);

    cout<<maximumDifference(a, size);
}