#include<iostream>
using namespace std;

int maxSumSubarray(int a[], int size){
    int sum = 0; 
    int maxSum = 0;
    for(int i=0; i<size; i++){
        sum = 0;
        for(int j=i; j<size; j++){
            sum += a[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main(){
    int a[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<maxSumSubarray(a, size);
}