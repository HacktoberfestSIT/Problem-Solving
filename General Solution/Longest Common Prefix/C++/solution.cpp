class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        for (int i=1; i<strs.size(); i++){
            for(int j=0; j<first.size(); j++){
                if (strs[i][j] != first[j]){
                    first.resize(j);
                }
                if (first == "") {
                    return first;
                }
            }
        }
        return first;
    }
};

