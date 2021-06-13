//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.


#include<iostream>
using namespace std;

int maximumDiff(int a[], int size){

    int max_diff = a[size-1] - a[0];
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            max_diff = max(max_diff, a[j] - a[i]);
        }
    }
    return max_diff;
}

int main(){
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<maximumDiff(a, size);
}
