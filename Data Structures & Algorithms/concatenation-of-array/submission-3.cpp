/*
Let us try to read other codes ,learn and modify 
In c++ for vectors way   .insert()   
Multiple Copies: ans.insert(pos, n, val) inserts n copies of val before pos.

n is  
*/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
     ans.reserve(2*nums.size());

     ans.insert(ans.end(),nums.begin(),nums.end());
     ans.insert(ans.end(),nums.begin(),nums.end());
    


        return  ans;
    }
};