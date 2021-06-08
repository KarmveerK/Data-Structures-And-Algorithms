#include<iostream>
using namespace std;
void maxCircularSubarray(int a[], int size){
    for(int i=0; i<size; i++){

        for(int j=1; j<size; j++){

            int index = (i + j) % size;
            cout<<index<<"  ";
        }

        cout<<endl;
    }
}

int main(){
    int a[] = {5, -2, 3, 4};
    int size = sizeof(a) / sizeof(a[0]);
    maxCircularSubarray(a, size);
}