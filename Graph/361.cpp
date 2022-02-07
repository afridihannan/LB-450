//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
#include<bits/stdc++.h>
using namespace std;

class Solution{
    void dfs(vector<vector<bool>>&vis,int i,int j,int n,vector<vector<int>> &m,string s,vector<string>&ans){
        if(i<0 || j<0 || i>=n || j>=n)return;
        if(vis[i][j] || m[i][j]==0)return;
        if(i==n-1 && j==n-1){
            ans.push_back(s);
            return;
        }
        vis[i][j]=1;
        dfs(vis,i-1,j,n,m,s+'U',ans);
        dfs(vis,i+1,j,n,m,s+'D',ans);
        dfs(vis,i,j-1,n,m,s+'L',ans);
        dfs(vis,i,j+1,n,m,s+'R',ans);
        vis[i][j]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0 || m[n-1][n-1]==0)return ans;
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        string s="";
        dfs(vis,0,0,n,m,s,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
  
return 0;
}