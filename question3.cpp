#include <bits/stdc++.h>
using namespace std;

//You are a professional robber planning to rob houses along a street. Each house has a certain amount of 
//money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have 
//security systems connected and it will automatically contact the police if two adjacent houses were 
//broken into on the same night.Given an integer array nums representing the amount of money of each house, 
//return the maximum amount of money you can rob tonight without alerting the police. 
//Input:nums = [1,2,3,1] Output: 4 (least time complexity preferred)


int main()
{
  int n,i,oddsum=0,evensum=0;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    if(i%2==0) evensum+=arr[i];
    else oddsum+=arr[i];
  }
  int mostmoney=max(evensum,oddsum);
  cout<<mostmoney;
}