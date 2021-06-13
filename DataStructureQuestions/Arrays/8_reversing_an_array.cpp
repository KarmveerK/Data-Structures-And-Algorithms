#include<iostream>
using namespace std;

void reverse(int a[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        swap(a[start], a[end]);  //std::swap() is a built-in function in the C++ Standard Template Library (STL)
        start++;
        end--;
    }
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<"Array after reversing"<<endl;

    reverse(a, size);
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
}
