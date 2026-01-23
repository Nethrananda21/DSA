class Solution {
public:
    vector<int> MaxHeap(vector<int>& nums) {
        priority_queue<int>pq; // this by default implements max heap i.e sorting in decending order
        vector<int>v;

        for(auto it : nums){
            pq.push(it);
        }

        for(auto it : nums){
            v.push_back(pq.top());
            pq.pop();
        }
    }
};


for(int i=0; i<n; i++){

    while(!dq.empty() && nums[i]>dq.top()){
        dq.pop();
    }
    
    dq.push(nums[i]);
}