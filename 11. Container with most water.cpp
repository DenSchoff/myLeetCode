class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVal = -9999;
        int i = 0;
        int j = height.size() - 1;
        while (j > i)
        {
            if ( min(height[i], height[j]) * (j-i) > maxVal ) 
            {
                maxVal = min(height[i], height[j]) * (j-i);
            }
            if ( height[i] > height[j] ) j--;
            else i++;
        }
        return maxVal;
    }
};
