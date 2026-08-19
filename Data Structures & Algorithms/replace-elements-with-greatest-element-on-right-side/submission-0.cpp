class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int Max = -1;
        int maxElem = -1;
        vector<int>ans(arr.size());
        for(int i=0; i<arr.size(); i++){
            Max = -1;
            for(int j=i+1; j<arr.size(); j++){
                if(arr[j] > Max){
                    maxElem = arr[j];
                    Max = max(maxElem,Max);
                }
            }
            ans[i] = Max;
        }
        return ans;
    }
};