#include<iostream>
using namespace std;

//My method is less complex and more readable.

void calculateFrequencies(int a[], int size){
    int freq = 1, i = 1;

	while(i < size)
	{
		while(i < size && a[i] == a[i - 1])
		{
			freq++;
			i++;
		}

		cout<<a[i - 1] << " " << freq << endl;

		i++;
		freq = 1;
	}
}

int main(){
    //int a[] = {1,2,2,3,3,3,4,4,4,4};
    //int a[] = {1,1,1,1,1,1};
    //int a[] = {1,2,3,4,5};
    int a[] = {40,50,50,50};
    int size = sizeof(a) / sizeof(a[0]);
    calculateFrequencies(a, size);
}