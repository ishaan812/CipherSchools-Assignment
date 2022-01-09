#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;

//Given an array nums containing n distinct numbers in the range [0, n]
//, return the only number in the range that is missing from the array.
//Input: nums = [3,0,1], Output: 2 



int main() 
{
  int n,i,arrsum=0,fullsum;
  cin>>n;
  fullsum=(n*(n+1))/2;
  for(i=0;i<n-1;i++)
  {
    int f;
    cin>>f;
    arrsum+=f;
  }
  cout<<fullsum-arrsum-1;
  return 0;
}
