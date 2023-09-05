#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> result;

        result.push_back(1);
        
        for (int i=1; i< nums.size(); i++){
            result.push_back(result[i-1]*nums[i-1]);
        }

        int right_product=1;

        for (int i=nums.size()-1; i>=0; i--){
            result[i]*=right_product;
            right_product*=nums[i];
        }

        return result;



        
    }
};