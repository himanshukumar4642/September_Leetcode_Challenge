class Solution {
public:
    int maxProduct(vector<int>& nums) {
    if(nums.size()==0) return 0;
        int max_prod=nums[0],min_prod=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max_prod;
            max_prod=max({temp*nums[i],nums[i],min_prod*nums[i]});
            min_prod=min({temp*nums[i],nums[i],min_prod*nums[i]});
            ans=max(ans,max_prod);
        }
        return ans;
    }
};
