// This is the question probably makes us think we are just noobs 
// Honestly thinking effcient way I thought of use List and like then make it in array return 
// the approcah was 
// Loop till nums.length two times seprately and then first time ans.add(nums[i])  then again same second time 
// then like res[] = ans.get(i);
// this is acctually good but there is lot of memory ineffciency 

// better dont pre allocate in vector coz it fills 0,0,...2*nums.size()
// so  better approach this will also make you think about arrays way beyond 
/*
Make an int array ans of size 2*nums.length
Itreate till nums.length The key here is that arrays are mutable objects. by value so we can copy it the values like 
ans[i]=nums[i]
Note n is length 
nums=[1,2,3,4]
so ---> nums[0]=1 ans[0]=0;  first copy now like   if n=5 5 copies but ans[2*n]
so i+n =>0+5=5 = nums[i]  
ans[i+n]=nums[i];  now in 5th element is again our stating element 

as Array is holds continous memeory it can allocate in that place(Index)
Array Mapping 
*/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(2*nums.size());

        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[i+nums.size()]=nums[i];
        }

        return  ans;
    }
};