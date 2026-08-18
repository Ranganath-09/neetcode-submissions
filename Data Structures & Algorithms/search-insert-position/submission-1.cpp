/*
Undestand basic binary search algorithm 

now as question says return  {"if not the index where it would be if it inserted in order "}

basically in while loop until condition is true  it ireates now the low=mid+1 acc becames the amswer here need to return low  
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
          int mid=low+(high-low)/2;
          if(nums[mid]==target){
            return mid;
          }else if(nums[mid]>target){
              high=mid-1;
          }else{
            low=mid+1;
          }
        }

     return low;
    }
};
