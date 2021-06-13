#include<iostream>
using namespace std;

int removeDuplicates(int a[], int size){
    int res = 1;
    for(int i=1; i<size; i++){
        if(a[i] != a[i-1]){
            a[res] = a[i];
            res++;
        }
    }
    return res;
}

int main(){
    int a[] = {1, 2, 2, 3, 4, 4, 4, 5};
    //int a[] = {10, 20, 20, 30, 30, 30};
    //int a[] = {2, 2, 2, 2 ,2 ,2};
    int size = sizeof(a)/sizeof(a[0]);
    int new_size = removeDuplicates(a, size);

    cout<<"Array after removing duplicates " <<endl;
    for(int i=0; i<new_size; i++){
        cout<<a[i]<<"  ";
    }
}
