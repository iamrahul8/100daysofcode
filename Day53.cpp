//https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1

class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    //  code here
	for(int i = 0; i < n-1; i++) 
	
	arr[i] = (arr[i+1] < arr[i])? arr[i] = arr[i+1] : -1;
	
	arr[n-1] = -1;
	}
};