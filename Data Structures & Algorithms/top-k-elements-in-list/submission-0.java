//  Okay so we need to retun like K occurence 
// So like HashMap alone wont help us be need a new 
// sorting technique called bucket sort I Got to know it today 


/*
Approach for hashmap + bucket sort 
map the key and values of nums and like   here 
the key is basically the count value of how many times 
the value has been occured ,this perfectly fits in our range bounded sorting algorithm ---> Bucket sort  we store in our List buck

*/
class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        List<Integer>[] buck=new List[nums.length+1];
        Map<Integer,Integer> check=new HashMap<>();
        for(int n:nums){
            check.put(n,check.getOrDefault(n,0)+1);
        } 
        for(int key:check.keySet()){
            int occur=check.get(key);
            if(buck[occur]==null){
                buck[occur]=new ArrayList<>();
            }
            buck[occur].add(key);
        }

        // From bucket sort  we need to now return our values in the key 
        int res[] = new int[k];
        int count=0;
        for(int i=buck.length-1;i>=0 && count<k;i--){
            if(buck[i]!=null){
                for(Integer j:buck[i]){
                    res[count++]=j;
                }
            }
        }

       return res;
    }
}
