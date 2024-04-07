class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;

        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]>nums[r]){
                l++;
            }
            else{
                r= mid;
            }
        }
        return nums[l];
    }
};
