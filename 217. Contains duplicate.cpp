// My first solution works but since work too slowly, had to remake it
// For some reason sorting works faster than work with unordered_set
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> mySet;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (mySet.contains( nums[i] )) {return true; break;}
//            else { mySet.insert( {nums[i]} ); }
//        }
//        return false;
//    }
//};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if ( nums[i] == nums[i-1]) { return true; break; }
        }
        return false;
    }
};
