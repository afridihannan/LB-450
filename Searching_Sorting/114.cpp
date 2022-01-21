
// Merge without extra space
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,j=0;
	    while(i>=0 && j<m){
	        if(arr2[j]<arr1[i]){
	            swap(arr2[j],arr1[i]);
	        }
	        i--;j++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};

int main(){
  
return 0;
}