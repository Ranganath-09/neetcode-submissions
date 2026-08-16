class Solution {
public:
    bool isAnagram(string s, string t) {
     if(s.length()!=t.length()){
        return false;
     }
     vector<int> check(26,0); // for ascii alphabets smaller 
     for(char i : s){
        // character at s[i] -'a'  stores in  count   
        // ++  in first step coz we need to check wheater t in s not s in t  
        check[i-'a']++;
     }

     for(char i:t){
        // character at t[i] -'a'  stores in  count   
        // -- coz need to check if == 0 the count then valid else nope 
        check[i-'a']--;
     }

     // itreate in check 
     for(int i: check){

     if(i!=0){
        return false;
     }
     }

     return true;
    }


};
