class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool > result;

        for (int i =0 ; i<candies.size() ; i++){
            int temp = candies[i] + extraCandies;

            int max = *max_element(candies.begin(), candies.end());

            bool b = temp >= max ?  true : false;
            result.push_back(b);


        }
        return result;
    }
};