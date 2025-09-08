//I know this solution stinks, but I cant make it better
//Somehow this works 0 ms, LeetCode, how?
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 != 0)
        {
            return (double) nums1[(nums1.size() / 2)];
        }
        else 
        {
            int i = nums1[nums1.size() / 2];
            int j = nums1[(nums1.size() / 2) - 1];
            return (double) (i + j) / 2;
        }
    }
};
