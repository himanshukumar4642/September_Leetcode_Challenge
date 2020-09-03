class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int n = str.size();
        if(!n)
           return true;
        for(int i = 0; i < n/2; ++i)
        {
            int j = 0;
            int k = i+1;
            while(k<n)
            {
                if(str[k]!=str[j])
                   break;
                ++k, ++j;
                if(j > i)
                  j = 0;
            }
            if(k==n && j == 0)
               return true;
        }
        return false;
    }
};
