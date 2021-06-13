#include<iostream>
using namespace std;

int secondLargestElement(int a[], int size){
    
    int l_idx = 0;
    for(int i=1; i<size; i++){
        if(a[i] > a[l_idx]) {
            l_idx = i;
        }
    }
    int sl_idx = 0;
    for(int i=1; i<size; i++){
        if(a[i] > a[sl_idx] && a[i] < a[l_idx]){
            sl_idx = i;
        }
    }
    return sl_idx;
}

int main(){
    int a[] = {2, 4, 8, 10, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int index = secondLargestElement(a, size);
    cout<<"The second largest element in the array is "<<a[index]<< " present at index "<<index<<endl;
}
