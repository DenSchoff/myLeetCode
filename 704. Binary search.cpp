class Solution {
public:
    int search(vector<int>& nums, int target) {
        int border1 = 0;
        int border2 = nums.size() - 1;

        while (border2 >= border1)
        {
            if ( nums[border1] == target) { return border1; break; }
            if ( nums[border2] == target) { return border2; break; }
            if ( border2 == border1 + 1 || border2 == border1 ) break;

            if ( target >= nums[ (border1 + border2) / 2] ) border1 = (border1 + border2) / 2;
            if ( target < nums[ (border1 + border2) / 2] ) border2 = (border1 + border2) / 2;
        }
        return -1;
    }
};
