//https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	bool fit(int x,int y,int n){
    if(x<1||x>n){
        return false;
    }
    if(y<1||y>n){
        return false;
    }
    return true;
}
void ins(queue<pair<int,int>>&q,vector<vector<bool>>&v,int x,int y,int n){
    if(fit(x+1,y+2,n)){
        if(!v[x+1][y+2]){
            q.push({x+1,y+2});
            v[x+1][y+2]=true;
        }
    }
    if(fit(x+1,y-2,n)){
        if(!v[x+1][y-2]){
            q.push({x+1,y-2});
            v[x+1][y-2]=true;
        }
    }
    if(fit(x-1,y+2,n)){
        if(!v[x-1][y+2]){
            q.push({x-1,y+2});
            v[x-1][y+2]=true;
        }
    }
    if(fit(x-1,y-2,n)){
        if(!v[x-1][y-2]){
            q.push({x-1,y-2});
            v[x-1][y-2]=true;
        }
    }
    //2
    if(fit(x+2,y+1,n)){
        if(!v[x+2][y+1]){
            q.push({x+2,y+1});
            v[x+2][y+1]=true;
        }
    }
    if(fit(x+2,y-1,n)){
        if(!v[x+2][y-1]){
            q.push({x+2,y-1});
            v[x+2][y-1]=true;
        }
    }
    if(fit(x-2,y+1,n)){
        if(!v[x-2][y+1]){
            q.push({x-2,y+1});
            v[x-2][y+1]=true;
        }
    }
    if(fit(x-2,y-1,n)){
        if(!v[x-2][y-1]){
            q.push({x-2,y-1});
            v[x-2][y-1]=true;
        }
    }
}
int minStepToReachTarget(vector<int>&k,vector<int>&t,int n)
	{
	    // Code here
        vector<vector<bool>>v(n+1,vector<bool>(n+1,false));
	    v[k[0]][k[1]]=true;
	    int st=0;
	    queue<pair<int,int>>q;
	    q.push({k[0],k[1]});
	    while(!q.empty()){
	        int s=q.size();
	        while(s--){
	            pair<int,int>c=q.front();
                q.pop();
                int x=c.first,y=c.second;
                if(x==t[0] && y==t[1]){
                    return st;
                }
                ins(q,v,x,y,n);
	        }
             st++;
	    }
        return -1;
	}
};

int main(){
  
return 0;
}