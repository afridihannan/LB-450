//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ans=0,sum=INT_MIN;
        for(int i=0;i<n;i++){
            ans+=arr[i];
            if(ans>sum){
                sum=ans;
            }
            if(ans<0){
                ans=0;
            }
        }
        return sum;
        
    }
int main(){
  
return 0;
}