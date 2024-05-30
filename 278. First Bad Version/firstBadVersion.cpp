// Source : https://leetcode.com/problems/first-bad-version/
// Date   : Jan 11, 2022

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        int bad =0;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)){
                    right = mid-1;;
                }else{
                    bad= mid;
                    break;
                }              
            }else{
                left = mid+1;
            }
        }
        return bad;
    }
};