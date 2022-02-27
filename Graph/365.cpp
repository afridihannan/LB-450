//https://leetcode.com/problems/number-of-operations-to-make-network-connected/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(vector<int>adj[],int ind,int n,vector<bool>&vis){
        vis[ind]=true;
        for(auto it:adj[ind]){
            if(!vis[it]){
                dfs(adj,it,n,vis);
            }
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        int edge=0;
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
            edge++;
        }
        if(edge<n-1)return -1;
        int comp=0;
        vector<bool>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                comp++;
                dfs(adj,i,n,vis);
            }
        }
        int sep=edge-((n-1)-(comp-1));
        if(sep<comp-1)return -1;
        return comp-1;
    }
};
int main(){
  
return 0;
}