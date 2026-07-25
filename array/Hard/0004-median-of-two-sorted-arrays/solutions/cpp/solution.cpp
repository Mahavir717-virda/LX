class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merge nums2 into nums1
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        // Sort the combined array
        sort(nums1.begin(), nums1.end());

        int n = nums1.size();
        
        if (n % 2 != 0) {
            // Odd length → single middle element
            return (double)nums1[n / 2];
        } else {
            // Even length → average of two middle elements
            return (double)(nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
        }
    }
};
