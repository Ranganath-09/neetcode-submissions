/*
other approach is one-pointer way as the array will be sorted and like we need to verify/count 
and return 

k=0;
for i:nums
if(i<target){
    count++
}

return count;
now as question says return  {"if not the index where it would be if it inserted in order "}

*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int k=0;
       for(int i:nums){
        if(i<target){
            k++;
        }

       }
       return k;
    }
};
