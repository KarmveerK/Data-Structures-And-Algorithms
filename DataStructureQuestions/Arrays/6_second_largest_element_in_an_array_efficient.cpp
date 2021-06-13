#include<iostream>
using namespace std;

int secondLargestElement(int a[], int size){

    int l_idx=0, sl_idx=-1; //sl_idx is initialized as -1 because there is no second largest element if all elements are same.

    for(int i=1; i<size; i++){
        if(a[i] > a[l_idx]){
            sl_idx = l_idx;
            l_idx = i;
        }
        //This part is necessary for cases like {8, 4, 7, 2, 1} where l_idx is the first element.
        else if(a[i] != a[l_idx]){
            if(sl_idx == -1 || a[sl_idx] < a[i]){
                sl_idx = i;
            }
        }
    }
    return sl_idx;
}

int main(){
    //int a[] = {2, 4, 8, 10, 1, 5};
    int a[] = {8, 4, 7, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int index = secondLargestElement(a, size);
    cout<<"The second largest element in the array is "<<a[index]<< " present at index "<<index<<endl;
}
