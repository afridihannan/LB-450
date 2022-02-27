//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#
#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)c1++;
        else if(a[i]==1)c2++;
        else c3++;
    }
    for(int i=0;i<n;i++){
        if(i<c1){
            a[i]=0;
        }else if(i<c1+c2){
            a[i]=1;
        }else{
            a[i]=2;
        }
    }
}
int main(){
  
return 0;
}