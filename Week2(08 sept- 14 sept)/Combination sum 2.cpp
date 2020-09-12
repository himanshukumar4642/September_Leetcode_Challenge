class Solution {
public:
    vector<vector<int>> res;
    void dfs(int k,int n,int s,vector<int> temp){
        if(k==0 && n==0){
            res.push_back(temp);
            return;
        }
        if(n<0||k<0) return;
        for(int i=s;i<=9;i++){
            temp.push_back(i);
            dfs(k-1,n-i,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        dfs(k,n,1,temp);
        return res;
    }
};
