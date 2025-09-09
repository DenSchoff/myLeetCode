class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int answer = 1;
        int i = nums.size()-1;
        int j = 0;
        while (i >= 0 && j < nums.size())
        {
            if (nums[i] == answer) 
            {
                answer++;
                nums.erase(nums.begin() + i);
                i = nums.size()-1;
                j=0;
            }
            else i--;
            if (nums[j] == answer) 
            {
                answer++;
                nums.erase(nums.begin() + j);
                i = nums.size()-1;
                j=0;
            }
            else j++;
        }
        return answer;
    }
};
