class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>res;
        int i;
        int n=nums.size();
        for(i=0;i<k;i++)     // Process first k (or first window) elements of array 
        {  while((!dq.empty()) && nums[dq.back()]<=nums[i]) // For every element, the previous smaller elements are useless so 
               dq.pop_back();                               // --remove them from dq==> Remove from rear
            dq.push_back(i);                               // Add new element at rear of queue
        }
        for( ;i<n;i++)      // Process rest of the elements
        {  
          res.push_back(nums[dq.front()]);  // The element at the front of the queue is the largest element of previous window
                                            // so push it into the res vector
              
          while((!dq.empty()) && dq.front()<=i-k)  // Remove the elements which are out of this window
                      dq.pop_front();
            
          while((!dq.empty()) && nums[dq.back()]<=nums[i])  // Remove all elements smaller than the currently being added
                    dq.pop_back();                               //--element (remove useless elements) ==>   Remove from rear
                  
            
               dq.push_back(i);   // Add current element at the rear of dq
            
            
            }
        res.push_back(nums[dq.front()]);  // Push the maximum element of last window
         
        return res;
      
    }
};

//Note: int main is not given in this code
