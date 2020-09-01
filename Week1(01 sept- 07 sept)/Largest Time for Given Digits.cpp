class Solution {
public:
    string largestTimeFromDigits(vector<int>& a) {
        sort(a.begin(), a.end());
        int time = -1;
        string ans;
        do {
            int h = a[0]*10+a[1];
            int m = a[2]*10+a[3];
            if(h >= 24 || m >= 60) continue;
            if(h*60+m > time) {
                time = h*60+m;
                ans="";
                ans+=to_string(a[0])+to_string(a[1])+":"+to_string(a[2])+to_string(a[3]);
            }
        } while(next_permutation(a.begin(), a.end()));
        return ans;
    }
};
