#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // DNF
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int i = 0;
        while(i<n && i<=e){
            if(nums[i]==0){
                swap(nums[s], nums[i]);
                s++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i], nums[e]);
                e--;
            }
            else i++;
        }
    }
};