class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Store the vector nums in an unordered set
        unordered_set<int>s(nums.begin(),nums.end());
        int maxi=0;

        // Iterate through the ele of set
        for(int i:s){
            // Check whether the previous ele is present in the set
            if(s.find(i-1)==s.end()){
                // Indicates previous ele is not present so series might start from here
                int y=i+1;
                // Check whether next ele is present in the set/not
                while(s.find(y)!=s.end()){
                    // Increment y and check again whether that ele is present/not
                    y++;
                }
                // As the values will be consecutive their difference will give their length
                maxi=max(maxi,y-i);
            }
        }
        return maxi;
    }
};