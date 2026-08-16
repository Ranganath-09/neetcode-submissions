/*
Two sum :) 
Given an array nums and a target now we need to return new array of {i,j}  where i and j are basically  nums[i]+nums[j]==target and i!=j 
[3,4,5,6]  target =7 

index 0,1 -> 3+4=7 
return index [0,1]

random  approach would be two pointer 
int k =nums.size()-1 and i =0 and compare but this can't be passing first test case itself 
Note :Two pointer is best to use within sorted list or when need to verify 

brute approach 
for(int i=0;i<nums.size()-1;i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]+nums[j]==target && i!=j){
                    return {i,j};
                }
            }
        }

best approach 
sort and do two pointer yet complexity would be o(nlogn)

optimal approach 
hashmap ==> <index , value>

unordered_map<int ,int>   use find() insert() same like contains duplicate 


*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> check;
        for(int i=0;i<nums.size();i++){
            // example target 7 nums[0] 3  7-3 = 4  so yeah same like that  
            int comp = target-nums[i];
           // if comp val exists then return indexs
            if(check.find(comp)!=check.end()){
                
                return {check[comp],i};
            }

            // this adding current key in it  
            check[nums[i]]=i;
        }
     // return empty 
    return std::vector<int>{};
    }

};
