// Source : https://leetcode.com/problems/binary-search/
// Date   : Jan 01, 2022



public class Solution {
    public int Search(int[] nums, int target) {
        int value = -1;
        var i =0;
        foreach(var num in nums){
            if(nums[i]==target){
                value = i;
                break;
            }else if (nums[i]>target){
                break;
            }
            i=i+1;
        }
        return value;
    }
}