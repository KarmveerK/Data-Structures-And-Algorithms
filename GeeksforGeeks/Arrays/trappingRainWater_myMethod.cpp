#include<iostream>
using namespace std;

//incomplete and wrong - does not work for cases like 3, 2, 0, 2, 1. 
//try making the solution for reverse traversal.

int trappingRainWater(int a[], int size){
    int start = a[0];
    int volume = 0;
    int count = 0;
    for(int i=1; i<size; i++){
        if(a[i] > start) {
            start = a[i];
            count=0;
        }
        else{

            if(a[i-1] < a[i] && a[i+1] < a[i] && a[i]<start){
                volume -= count*start-a[i];
            }
            else{
                volume += start-a[i];
                count++;
            }
            
        }
    }
    return volume;
}

int main(){
    //int a[] = {3, 0, 1, 2, 5};
    int a[] = {4,2,0,3,2,5};
    int size = sizeof(a) / sizeof(a[0]);
    cout<<trappingRainWater(a, size);
}