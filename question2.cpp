#include <bits/stdc++.h>
using namespace std;

//Given an integer array nums of length n and an integer target, find three integers 
//in nums such that the sum is closest to target. Return the sum of the three integers.
//You may assume that each input would have exactly one solution . 
//Input:nums =[-1,2,1,-4],target = 1 , Output: 2


int main()
{
    int n,i,target;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cin>>target;
    sort(arr, arr+n);
    int closestSum = 1000000000;
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if (sum == target)
              return sum;
            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }
            if (sum > target) {
                r--;
            }
            else {
                l++;
            }
        }
    }
    cout<<closestSum;
    return 0;
}