class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> x;
        deque<int> dq;
        int i;
        for(i=0;i<k;i++){
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        for(;i<nums.size();i++){
            x.push_back(nums[dq.front()]);
            
            while(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }
            
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        x.push_back(nums[dq.front()]);
        return x;
    }
};
