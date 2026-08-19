class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        //Horizontal Scanning
        // string prefix = strs[0];
        // for(int i=1; i<strs.size(); i++){
        //     int j=0; 
        //     while(j<min(prefix.length(), strs[i].length())){
        //         if(prefix[j] != strs[i][j]){
        //             break;
        //         }
        //         j++;
        //     }
        //     prefix = prefix.substr(0,j);
        // }
        // return prefix;

        //Vertical Scanning
        for(int i=0; i<strs[0].length(); i++){
            for(string s: strs){
                if(i == s.length() || s[i]!=strs[0][i]){
                    return s.substr(0,i);
                }
            }
        }
        return strs[0];
    }
};