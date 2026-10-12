class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int siz =nums.size();
        unordered_set<int> us(nums.begin(), nums.end());
        int siz_set= us.size();
        if (siz==siz_set)
        return 0;
        else 
        return 1;
    }
   
};