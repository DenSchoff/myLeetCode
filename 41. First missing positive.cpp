class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int answer = 1;
        int i = nums.size() - 1;
        while (i >= 0)
        {
            if (nums[i] == answer) 
            {
                answer++;
                nums.erase(nums.begin() + i);
                i = nums.size();
            }
            else i--;
        }
        return answer;
    }
};
