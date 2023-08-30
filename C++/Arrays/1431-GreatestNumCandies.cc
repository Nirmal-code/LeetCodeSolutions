class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> resulting={};

        int highest=*max_element(candies.begin(),candies.end());

        for (int i:candies){
            int new_can=i+extraCandies;
            if (new_can>=highest){
                resulting.push_back(true);
            }else{
                resulting.push_back(false);
            }
        }
        return resulting;
        
    }
};