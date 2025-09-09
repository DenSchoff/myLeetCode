class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int answer = 1;
        int i = 0;
        std::sort(nums.begin(), nums.end());
        while (i < nums.size())
        {
            if (nums[i] == answer) 
            {
                answer++;
            }
            i++;
        }
        return answer;
    }
};
