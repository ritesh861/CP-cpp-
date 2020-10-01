//is_subsequence question

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
//using 2 pointer approach        
        while(i<s.length()&&j<t.length())
        {
            if(t[j]==s[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        
        if(i==s.length())
        return true;
        return false;
    }
};
