#include <bits/stdc++.h> 
using namespace std; 

unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n&1==1)
	       count++;
	    n = n>>1;      
	} 
	return count; 
} 

int main() 
{ 
	int i = 9; 
	cout << countSetBits(i); 
	return 0; 
} 
