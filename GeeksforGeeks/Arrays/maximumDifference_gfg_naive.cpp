//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
#include<iostream>
#include<math.h>
using namespace std;

//my naive method is better for arrays sorted in ascending order.

int maximumDifference(int a[], int size){
    int res = a[1] - a[0];

	for(int i = 0; i < size - 1; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			res = max(res, a[j] - a[i]);
		}
	}

	return res;
}

int main(){
    int a[] = {2, 3, 4, 10, 6, 4, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);

    cout<<maximumDifference(a, size);
}