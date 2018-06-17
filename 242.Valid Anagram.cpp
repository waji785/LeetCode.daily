//rank:h
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()) return false;
        
        int res[26] = {0};
        for(int i=0; i<s.size();i++){
            res[s[i]-'a']++;
            res[t[i]-'a']--;
        }
        
        for(int j=0;j<26;j++){
            if(res[j]!=0) return false;
        }
        return true;
        
    }
};
//用数组代替MAP