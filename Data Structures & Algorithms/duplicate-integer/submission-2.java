// Contains duplicate in an array like 
// [1,2,3,3]  there exists an duplicate so like we need to return true 
// The brute  approach like 
/*
Loop loop 1 till nums.length;
then loop other at index of i+1 till nums.length 

then compare arr[i]==arr[j]  return bool 
 this takes around  O(n^2)
*/


// The better approach would be use HashSet  .contains() , .add()
// Complexity will be O(n)  coz looping till nums.length and 
// In this loop we are comparing then adding  if matches then it returns bool
class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> set =new HashSet<>();
        for(int i=0;i<nums.length;i++){
            if(set.contains(nums[i])){
                return true;
            }
            set.add(nums[i]);
        }
        return false;
    }
}