#include<iostream>
using namespace std;

int trappingRainWater(int a[], int size){
    int vol = 0;
    for(int i=1; i<size-1; i++){

        int lmax = a[i];
        for(int j=0; j<i; j++){
            lmax = max(lmax, a[j]);
        }

        int rmax = a[i];
        for(int j=i+1; j<size; j++){
            rmax = max(rmax, a[j]);
        }

        vol +=  min(lmax, rmax) - a[i];

    }
    return vol;
}

int main(){
    //int a[] = {3, 0, 1, 2, 5};
    //int a[] = {4,2,0,3,2,5};
    int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<trappingRainWater(a, size);
}