#include<iostream>
using namespace std;

int insert(int a[], int size, int x, int pos, int cap ){
    if(size == cap) return size;
    for(int i=size+1; i>pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = x;
    return size+1;
}

int main(){
    int a[10];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    a[5] = 6;

    int size = 6;
    cout<<"Array before insertion"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl<<"Array after insertion"<<endl;
    int new_size = insert(a, size, 0, 6, 10);
    for(int i=0; i<new_size; i++){
        cout<<a[i]<<"  ";
    }
}
