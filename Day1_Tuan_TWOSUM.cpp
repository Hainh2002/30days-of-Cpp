#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            int n = nums.size();
            for(int i = 0; i <n-1;i ++){
                for(int j = i+1; j < n; j++){
                        if(nums[i]== target - nums[j]){
                          //  cout << i <<"," <<j<<endl;
                          result.push_back(i);
                          result.push_back(j);
                        return result;
                        }
                }
            }
        return  {-1,-1}; 
        }
    };
int main(){
    
    int n = 5;
    vector<int> nums(n);
    int target = 6;
    for(int i = 0; i<n; i++){
        cout << "nhap phan tu" <<endl;
         cin >> nums[i];
    }
    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);
    for (int i = 0; i < indices.size(); i++) {
        cout <<"chi so"<< indices[i] <<endl;;
    }
    return 0;
}    