#include<iostream>
using namespace std;

int largestElement(int a[], int size){
    
    int idx = 0;
    for(int i=1; i<size; i++){
        if(a[i] > a[idx]) {
            idx = i;
        }
    }
    return idx;
}

int main(){
    int a[] = {2, 4, 8, 10, 1, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int index = largestElement(a, size);
    cout<<"The largest element in the array is "<<a[index]<< " present at index "<<index<<endl;
}
