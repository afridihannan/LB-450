#include<bits/stdc++.h>
using namespace std;

class Solution{
    void func(vector<vector<int>> &m, int n,string &p,vector<string>&ans,int x,int y){
        if(x==n-1 && y==n-1){
            ans.push_back(p);
            
        }
        if(x+1<n && m[x+1][y]==1){
            p+='D';
            func(m,n,p,ans,x+1,y);
            p.pop_back();
        }
        if(y+1<n && m[x][y+1]==1){
            p+='R';
            func(m,n,p,ans,x,y+1);
            p.pop_back();
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string p="";
        if(m[0][1]==1){
            p+='R';
            func(m,n,p,ans,0,1);
            p.pop_back();
        }
        if(m[1][0]==1){
            p+='D';
            func(m,n,p,ans,1,0);
            p.pop_back();
        }
        return ans;
    }
};
int main(){
  vector<vector<int>>m={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  Solution ob;
  vector<string>ans=ob.findPath(m,4);
return 0;
}