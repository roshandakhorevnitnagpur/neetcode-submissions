class Solution {
public:

    string encode(vector<string>& strs) {
        string msg = "";
        for(auto s: strs){
            int n = s.size();
            msg += to_string(n) + "#" + s;
        }
        return msg;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int n = s.size();
        int i=0;
        while(i<n){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            res.push_back(word);
            i = j+1+len;
        }
        return res;
    }
};
