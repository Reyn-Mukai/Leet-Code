class Solution {
public:
    string reverseString(string s) {
        for(int i=0, j=s.size();i<s.size()/2;i++,j--){
            std::swap(s[j-1],s[i]);
        }
        
        return s;
    }
};

//Runtime: 9ms