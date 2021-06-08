#include<iostream>
using namespace std;

int calculate(int a[], int size){

    int count = 0;
    int maxCount = 0;

    for(int i=0; i<size; i++){
            count = 0;
            for(int j=i; j<size; j++){
                if(a[j] == 1) count++;
                else break;
            }

            maxCount = max(maxCount, count);
    }
    return maxCount;
}

int main(){
    int a[] = {1, 0, 1, 1, 0, 1};
    //int a[] = {1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    //int a[] = {1, 1, 1, 1};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<calculate(a, size);
}