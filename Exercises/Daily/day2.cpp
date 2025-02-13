//
// Created by haihi on 2/13/2025.
//

#include <vector>
#include <iostream>
using namespace std;
std::vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size());
    vector<int> mulFromLeft(nums.size());
    vector<int> mulFromRight(nums.size());

    mulFromLeft[0] = nums[0];
    mulFromRight[nums.size()-1] = nums[nums.size()-1];
    for (int i = 0; i< nums.size(); i++){
        if (i>0){
            mulFromLeft[i] = mulFromLeft[i-1]*nums[i];
            mulFromRight[nums.size()-1 - i] = mulFromRight[nums.size()-i]*nums[nums.size()-1- i];
        }
    }

    ans[0] =  mulFromRight[1];
    ans[nums.size()-1] =  mulFromLeft[nums.size()-2];
    for (int i = 0; i< nums.size(); i++){
        if (i>0 && i<nums.size()-1){
            ans[i] = mulFromLeft[i-1]*mulFromRight[i+1];
        }
    }
    return ans;
}

int main() {
    std::vector<int> nums = {1,2,3,4};
    std::vector<int> result = productExceptSelf(nums);

    for (int num : result) {
        std::cout << num << ", ";
    }
    return 0;
}