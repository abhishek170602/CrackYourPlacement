class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int, int>> arr;
        for(auto it: freq){
            arr.push_back({it.second, it.first});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
