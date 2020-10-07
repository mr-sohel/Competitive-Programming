#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {8, 9, 11, 14, 15, 22, 26, 29, 30};
	int i , j, x = 48, n = 9; // x is the sum of any two pair				
	i = 0, j = n-1; // i is the first element and j is the last element
	while(i < j) {
		
		if((arr[i]+arr[j]) == x) {
			cout<<arr[i]<<' '<<arr[j];
			break;
		}	
		else if((arr[i]+arr[j]) < x) 
			i++;
		
		else
			j--;
	}
	return 0;
}
