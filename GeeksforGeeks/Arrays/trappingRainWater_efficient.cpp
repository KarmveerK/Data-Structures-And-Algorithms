#include<iostream>
using namespace std;

int trappingRainWater(int a[], int size){
    int lmax[size];
    int rmax[size];
    int res = 0;

    lmax[0] = a[0];
    for(int i=1; i<size; i++){
        lmax[i] = max(a[i], lmax[i-1]);
    }

    rmax[size-1] = a[size-1];
    for(int i=size-2; i>=0; i--){
        rmax[i] = max(rmax[i+1], a[i]);
    }

    for(int i=1; i<size-1; i++){
        res += min(lmax[i], rmax[i]) - a[i];
    }
    return res;
}

int main(){
    //int a[] = {3, 0, 1, 2, 5};
    //int a[] = {4,2,0,3,2,5};
    int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<trappingRainWater(a, size);
}