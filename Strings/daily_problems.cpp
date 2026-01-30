//https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>count(256,-1);

        for(char i : s){
            count[i]++;
        }
        
        for(int i=0; i<s.size();i++){
            if(count[s[i]]==0) return i;
        }

        return -1;
    }
};
