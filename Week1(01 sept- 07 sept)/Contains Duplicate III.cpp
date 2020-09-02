class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, long long k, long long t) {
        map<long long,long long> M;
        long long ws=0;
        for (long long we=0;we<nums.size();we++) {
            if (we-ws>k)
                M.erase(nums[ws++]);
            auto it=M.lower_bound(nums[we]-t);
            if (it!=M.end() && abs(it->first-nums[we])<=t)
                return true;
            M[nums[we]]=we;
        }
        return false;
    }
};
