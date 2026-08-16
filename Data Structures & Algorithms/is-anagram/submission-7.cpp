/*
HashMap approach and thinking extra edge case of unicode one's 

how does key value work in this ?
<s,1>,<s,2>--> <e,1><e,2>--><k,1>  increment for count 
same in reverse for t   decrement  to check  
now like 
check.second ?!=0 then return false ;
.second is the value if the value is not 0 then false means the char is not present in the s so value is non 0   then we return false 
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.length()!=t.length()){
        return false;
     }
     unordered_map<char,int> check;

     for(char ch:s){
        // storing key char and value +1 evry time we encounter a char from string s 
        check[ch]+=1;
     }

    for(char ch:t){
        check[ch]-=1;
    }
 // we can keep  map<char,int>val but for pair checking in map we can use auto for simplicty with refrence  and itreate it 
  for(auto& i:check){
    if(i.second!=0){
        return false;
    }
  }

    
  return true;
    }
};
