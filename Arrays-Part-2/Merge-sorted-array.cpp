class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Keep ele of nums1 as it is and then add ele of nums2 in the position size of nums1 + index i
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }

        // Finally sort the resulting array
        sort(nums1.begin(),nums1.end());
    }
};