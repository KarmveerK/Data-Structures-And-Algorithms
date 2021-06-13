#include<iostream>
using namespace std;

int deletion(int a[], int size, int x){
    if(size == 0) return 0;
    //getting the index for the number to be deleted.
    int i;
    for(i=0; i<size; i++){
        if(a[i] == x) break;
    }
    for(int j=i+1; j<size; j++){
        a[j-1] = a[j];
    }
    return size-1;
}

int main(){
    int a[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    int x = 4;
    
    cout<<"Array before the deletion operation"<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl<<"Array after the deletion operation"<<endl;
    int new_size = deletion(a, size, x);
    for(int i=0; i<new_size; i++){
        cout<<a[i]<<"  ";
    }
    
}
