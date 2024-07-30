class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int index;
        vector<int> pref;
        vector<int> suf;
        pref.push_back((s[0]=='b')?1:0);
        suf.push_back((s[n-1]=='a')?1:0);
        for(int i=1;i<n;i++){
            if(s[i]=='b'){
                pref.push_back(pref.back()+1);
            }
            else{
                pref.push_back(pref.back());
            }
        }
        for(int i=n-2;i>=0;i--){
            if(s[i]=='a'){
                suf.push_back(suf.back()+1);
            }
            else{
                suf.push_back(suf.back());
            }
        }
        reverse(suf.begin(), suf.end());
        int sum = min(suf[0], pref[n - 1]); 
        for(int i=0;i<n-1;i++){
            sum = min(sum,(pref[i]+suf[i+1]));
        }
        return sum;
    }
};