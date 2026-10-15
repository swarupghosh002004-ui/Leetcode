class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0,high=nums.size()-1;
        int ans ,mid ;
        if (nums[high]<target){
        return high+1;
        }
        else 
        {
            while(low<=high){
                mid = (low + high )/2;
                if (nums[mid]>=target){
                    ans =mid;
                    high=mid-1;
                }
                else 
                {low= mid+1;}
            }
            return ans;
        }
        
    }
};