class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i = 0 ;i<nums.size();i++)
        {
        freq[nums[i]]++;
        }
        for(auto it:freq)
        {
            if(it.second==1)
            return it.first;
        }
        return -1;
    }
}; // tc - O(N) sc - O(N)  
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for(int i = 0 ;i<nums.size();i++)
        {
            ans = ans^nums[i];
        }
        return ans ;
    }
}; // tc - O(n) sc - O(1)
