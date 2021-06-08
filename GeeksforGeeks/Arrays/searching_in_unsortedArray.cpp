#include<iostream>
using namespace std;

int search(int a[], int size, int x){
    for(int i=0; i<size; i++){
        if(a[i]==x) return i;
    }
    return -1;
}

int main(){
    int a[] = {6,2,5,8,4,6,9,0,1};
    cout<<"found at "<<search(a, 9, 4);
}