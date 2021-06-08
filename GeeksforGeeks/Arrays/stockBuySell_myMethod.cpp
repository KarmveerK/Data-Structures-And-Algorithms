#include<iostream>

using namespace std;

int stockBuySell(int a[], int size){
    int profit = 0;
    for(int i=1; i<size; i++){
        if(a[i] > a[i-1]){
            profit += a[i] - a[i-1];
        }
    }
}

int main(){
    int a[] = {7, 1, 3, 3, 6, 4};
    //int a[] = {1, 5, 3, 8, 12};
    //int a[] = {30, 20, 10};
    //int a[] = {10, 20, 30};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<stockBuySell(a, size);
}
