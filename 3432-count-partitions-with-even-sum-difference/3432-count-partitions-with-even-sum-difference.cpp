class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
        }
        if(count%2==0){
            return nums.size()-1;
        }

        return 0;
        
    }
};