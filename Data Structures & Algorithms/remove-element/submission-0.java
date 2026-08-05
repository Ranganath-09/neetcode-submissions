/*
one-pass technique ,Single pointer technique ,I noticed here 
val a number to compare and like simply  if not exists then i can increment the count 
k=0;  
 for(i:nums){
    if(i!=val){
      store in nums[k]=i
      k++
    }

 }
 return k;
*/

class Solution {
    public int removeElement(int[] nums, int val) {
        
        int k=0;
        
        for(int i:nums){
         if(i!=val){
             nums[k]=i;
             k++;
         }
        }
        return k;
    }
}