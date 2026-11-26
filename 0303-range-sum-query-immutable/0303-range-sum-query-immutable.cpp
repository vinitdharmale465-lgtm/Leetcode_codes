class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        pre = vector<int>(n+1,0);

        for (int i =1;i<=n; i++) {
            pre[i]=pre[i-1] + nums[i-1];
        }
    }
    int sumRange(int left,int right) {
        int temp =pre[right+1]-pre[left];
        return temp;
    }
};