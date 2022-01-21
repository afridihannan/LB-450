// Find Elements in a matrix
// https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==NULL)return false;
        long m=matrix.size(),n=matrix[0].size();
        for(long i=0;i<m;i++){
            int j=0;
            while(j<n){
                if(matrix[i][j]==target){
                return true;
            }else{
                j++;
                }
            }
        }
        return false;
    }
};

int main(){
  
return 0;
}