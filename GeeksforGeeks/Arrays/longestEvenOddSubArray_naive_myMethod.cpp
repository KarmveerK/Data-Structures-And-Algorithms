#include<iostream>
using namespace std;

int evenOddSubarray(int a[], int size){
    int count = 1;
    int maxCount = 0;
    for(int i=0; i<size; i++){
        count = 1;
        for(int j=i+1; j<size; j++){
            if((a[j] - a[j-1])%2 != 0) count++;
            else{
                break;
            }
        }
        maxCount = max(maxCount, count);
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