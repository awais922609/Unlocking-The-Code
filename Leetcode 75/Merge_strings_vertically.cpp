class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int s1 , s2;

        s1 = word1.length();
        s2 = word2.length();

       

        for (int i=0 ; i<s1 || i<s2 ; ){
            if (i<s1 && i<s2) {
                result.push_back(word1[i]);
                result.push_back(word2[i]);
                i=i+1;

            }

            else if (i>=s1 && i<s2){
                result.push_back(word2[i]);
                i=i+1;

            }

            else if (i<s1 && i>=s2){
                result.push_back(word1[i]);
                i=i+1;
            }

            else break;
        }

        return result; 

        
    }
};