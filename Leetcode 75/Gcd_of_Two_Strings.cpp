// 1. if there is a fundamental building block then concatenation in any order will result in the same exact string so str1+str2 == str2+str1.
// 2. str1.substr is finding substring of str1 from 0th character to gcd of both strings means it will return gcd or " " if gcd not present.
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        return ((str1 + str2 == str2+str1)?
        str1.substr(0 , gcd (str1.size() , str2.size())): "");
    }
};