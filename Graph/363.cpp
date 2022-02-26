//https://leetcode.com/problems/flood-fill/
#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int rows,int columns,int src){
    if(sr<0 || sc<0 || sc==columns || sr==rows){
        return ;
    }
    if(image[sr][sc]!=src){
        return;
    }
    image[sr][sc]=newColor;
    dfs(image,sr+1,sc,newColor,rows,columns,src);
    dfs(image,sr-1,sc,newColor,rows,columns,src);
    dfs(image,sr,sc+1,newColor,rows,columns,src);
    dfs(image,sr,sc-1,newColor,rows,columns,src);
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int src=image[sr][sc];
        if(newColor==src){
            return image;
        }
        int rows=image.size();
        int columns=image[0].size();
        dfs(image,sr,sc,newColor,rows,columns,src);
        return image;
    }
};
int main(){
  
return 0;
}