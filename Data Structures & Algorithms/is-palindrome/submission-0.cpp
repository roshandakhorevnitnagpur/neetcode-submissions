class Solution {
public:
    bool isPalindrome(string s) {
        //This is to convert the string without alphanumeric characters
        string filtered;
        for(char ch:s){
            if(isalnum(ch)){
                filtered.push_back(tolower(ch));
            }
        }

        int start = 0;
        int end = filtered.size()-1;
        while(start < end){
            if(filtered[start] != filtered[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
