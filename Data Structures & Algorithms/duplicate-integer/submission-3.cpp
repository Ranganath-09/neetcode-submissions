class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> check;
    
    for(int i=0;i<nums.size();i++){
     if (!check.insert(nums[i]).second) {
            return true; 
        }
 }
  return false;
 } 
};
    
