#include<iostream>
using namespace std;

void findLeaders(int a[], int size){

    for(int i=0; i<size; i++){
        int flag = true;
        for(int j=i+1; j<size; j++){
            if(a[j] >= a[i]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<a[i]<<"  ";
        }
    }
}

int main(){
    int a[] = {7, 10, 6, 10, 4, 5, 2};
    int size = sizeof(a) / sizeof(a[0]);
    findLeaders(a, size);
}