//Rows with most 1s
//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxi=m,ans=-1;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	               if(j<maxi){
	                   maxi=j;
	                   ans=i;
	               }
	            }
	        }
	    }
	    return ans;
	}

};
int main(){
  
return 0;
}