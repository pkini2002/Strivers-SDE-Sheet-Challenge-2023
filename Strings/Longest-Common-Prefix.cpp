class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }

        // First element of vector be prefix initially
        string prefix=strs[0];

        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
                prefix=prefix.substr(0,prefix.length()-1);
            }
        }
        return prefix.empty()?"":prefix;
    }
};