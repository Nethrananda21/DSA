class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq; // this stores the sorted array in increasing order
        // even if we insert new element it gets inserted into the sorted array by heap property

        for(auto it : nums){
            pq.push(it);

            if(pq.size()>k){
                pq.pop();
            }
        }

        return pq.top();
    }
};