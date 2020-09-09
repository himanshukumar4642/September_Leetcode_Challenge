class Solution {
public:
    int compareVersion(string v1, string v2) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n1=v1.length(),n2=v2.length();
        int vn1=0,vn2=0;
        for(int i=0,j=0;i<n1||j<n2;){
            while(i<n1 && v1[i]!='.'){
                vn1=vn1*10+(v1[i]-'0');
                i++;
            }
            while(j<n2 && v2[j]!='.'){
                vn2=vn2*10+(v2[j]-'0');
                j++;
            }
            if(vn1>vn2) return 1;
            if(vn1<vn2) return -1;
            vn1=vn2=0;
            i++;j++;
        }
        return 0;
    }
};
