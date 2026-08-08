class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0 ,r = 0, len = 0, maxlen = 0;
        int hash[256] = {0};
        while(r < s.size()){
            if(hash[s[r]] == 0) hash[s[r]]++;
            else{
                while(s[l] != s[r]){
                    hash[s[l]]--;
                    l++;
                }
                if(s[l] == s[r]){
                    l++;
                }
            }
            len = r - l + 1;
            maxlen = max(len, maxlen);
            r++;
        }
return maxlen;
    }
};


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i,j;
//         int len = 1;
//         int maxlen = 0;
//         for( i = 0; i < s.size(); i++){
//         map<int, int> hash;
//             // char a = "";
//             for(j = i; j<s.size(); j++){
//                 if(hash[s[j]] == 1) break;
//                 else hash[s[j]]++;
//                 len = j-i+1;
//                 maxlen = max(len, maxlen);
//             }
//         }
//         return maxlen;
//     }
// };