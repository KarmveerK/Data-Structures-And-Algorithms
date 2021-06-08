#include<iostream>
using namespace std;

//BASED ON KADANES ALGORITHM

int evenOddSubarray(int a[], int size){
    int count = 1;
    int maxCount = 1;
    for(int i=1; i<size; i++){
        if((a[i] - a[i-1])%2 != 0){
            count++;
            maxCount = max(maxCount, count);
        }
        else{
            count = 1;
        }
    }
    return maxCount;
}

int main(){
    int a[] = {5, 10, 20, 6, 3, 8};
    //int a[] = {7, 10, 13, 14};
    //int a[] = {10, 20, 30, 40};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<evenOddSubarray(a, size);
}