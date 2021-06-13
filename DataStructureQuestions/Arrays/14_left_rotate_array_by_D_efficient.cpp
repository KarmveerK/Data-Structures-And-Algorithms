#include<iostream>
using namespace std;

void reverse(int a[], int low, int high){
    while(low < high){
        swap(a[low], a[high]);
        low++;
        high--;
    }
}
void leftRotateArrayByD(int a[], int size, int D){
    reverse(a, 0, D-1);
    reverse(a, D, size-1);
    reverse(a, 0, size-1);
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    leftRotateArrayByD(a, size, 3);
    cout<<"Left rotated array :"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}
