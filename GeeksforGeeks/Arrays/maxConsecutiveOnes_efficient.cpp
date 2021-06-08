#include<iostream>
using namespace std;

int maxConsecutiveOnes(int a[], int size){
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<size; i++){
        if(a[i] == 0){
            count = 0;
        }
        else{
            count++;
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
}

int main(){
    //int a[] = {1,0,1,1,0,1};
    //int a[] = {0, 1, 1, 0, 1, 1, 1};
    int a[] = {1,1,1,1};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<maxConsecutiveOnes(a, size);
}