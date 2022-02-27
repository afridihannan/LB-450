#include<bits/stdc++.h>
using namespace std;

vector<int>Union(vector<int>&a,vector<int>&b){
    vector<int>ans;
    int i=0,j=0;
    vector<int>::iterator ip;
    //Making the vectors unique;
    ip=unique(a.begin(),a.end());
    a.resize(distance(a.begin(),ip));//resizing the the duplicate elements will be undefined
    ip=unique(b.begin(),b.end());
    b.resize(distance(b.begin(),ip));
    int m=a.size(),n=b.size();
    while(i<m && j<n){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
    while(i<m){
        ans.push_back(a[i]);
        i++;
    }
    while(j<n){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

vector<int>InterSec(vector<int>&a,vector<int>&b){
    vector<int>ans;
    int i=0,j=0;
    vector<int>::iterator ip;
    ip=unique(a.begin(),a.end());
    a.resize(distance(a.begin(),ip));
    ip=unique(b.begin(),b.end());
    b.resize(distance(b.begin(),ip));
    int m=a.size(),n=b.size();
    while(i<m && j<n){
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
    return ans;
}


int main(){
  vector<int>a={1,2,3,4,5};
  vector<int>b={1,3,3,7,8,8,9};
  vector<int>ans1=Union(a,b),ans2=InterSec(a,b);
  for(auto it:ans1)cout<<it<<" ";
  cout<<endl;
  for(auto it:ans2)cout<<it<<" ";
return 0;
}