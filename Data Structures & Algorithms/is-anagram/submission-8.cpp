/*
I used set for my brute approach but failed due to unordered set can't keep multiple similar chars
and I did mistake in direct converting s,t to char array 
 
diff approach and multiset stl container use 

multiset :A multiset in C++ is an associative container from the Standard Template Library (STL) that stores elements in sorted order and allows duplicate values.  Unlike a standard set, which enforces unique keys, a multiset permits multiple elements with equivalent values, 

.earse().find() ,.insert(),.end()

*/
class Solution {
public:
    bool isAnagram(string s, string t) {
       multiset<char> check;
      for(char ch:s){
        check.insert(ch);
}
for(char ch:t){
    auto it=check.find(ch);
    // if not chars not there then return false;
    if(it==check.end()){
        
        return false;
    }
    // earse it 
     check.erase(it); 
}
// if empty then it is perfect anagram 
return check.empty();
    }
};
