class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int output1 = -1;
        int output2 = -1;
        int size = nums.size()-1;
        if(nums.empty()){
            return {output1,output2};
        }
        
        else if(nums.size()==1){
            if(nums[0]==target){
                return {0,0};
            }else{
                return {output1,output2};
            }
        }
        
        for(int i =0; i<=size; i++){
            if(nums[i]==target){
                output1=i;
                break;
            }
        }
        if(output1!=-1){
            for(int j =size; j>=output1; j--){
                if(nums[j]==target){
                    output2=j;
                    break;
                }
            }
        }
        
        return {output1,output2};
    }
};