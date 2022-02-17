//https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1

#include<bits/stdc++.h>
using namespace std;

static bool comp(int a,int b){
    return __builtin_popcount(a)>__builtin_popcount(b);
}
void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,comp);//handles the position of elements with the same sortbit
    }
int main(){
  
return 0;
}