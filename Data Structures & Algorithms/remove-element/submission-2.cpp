/*
Remove element 
given array nums and int val   , We need to remove all occurrences of val in nums   we need to return acc an int k of how many number of  elements there after removal 
nums=[3,2,2,3]  val =3  -->


we need to use one -pointer 
k =0
for(i:nums){
if(i!=val){
// now here ig that value is not in val then we need to appened in k then k++
}
}
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i:nums){
            if(i!=val){
                nums[k]=i;
                k++;
            }
        }
        return k;
    }
};