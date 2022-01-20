//Reverse a string
//https://leetcode.com/problems/reverse-string/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void reverse(string a){
    int n=a.size();
    for(int i=0;i<(n/2);i++){
        swap(a[i],a[n-i-1]);
    }
}
int main(){
  string a;
  cin>>a;
  reverse(a);
  cout<<a;
return 0;
}