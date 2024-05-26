// Source : https://leetcode.com/problems/squares-of-a-sorted-array
// Date   : Jan 12, 2022


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqred(nums.size());
        int s=0; int l=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[s])>abs(nums[l])){
                sqred[i]=nums[s]*nums[s];
                s++;
            }else{
                sqred[i]=nums[l]*nums[l];
                l--;
            }
        }
        return sqred;
    }
};