class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        // if(n<=2) return n;
        // vector<int> ans;
        // int i=0;
        // int j=0;
        // int cnt=0;
        // while(j<n)
        // {
        //     if(nums[i]==nums[j])
        //     {
        //         cnt++;
        //         j++;
        //         if(cnt<=2)
        //         {
        //             ans.push_back(nums[i]);
        //         }
        //     }
        //     else
        //     {
        //         i=j;
        //         cnt=0;
        //     }
        // }
        // for(int i=0;i<ans.size();i++)
        // {
        //     nums[i]=ans[i];
        // }
        // return ans.size();
        int n = nums.size();
        if (n <= 2) return n; // If the array has 2 or fewer elements, no need to process

        vector<int> ans; // Initialize the result vector
        int cnt = 1; // Counter for duplicates
        ans.push_back(nums[0]); // Add the first element to the result

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                cnt++; // Increment duplicate count
            } else {
                cnt = 1; // Reset duplicate count for a new element
            }

            // If the current element has appeared at most twice, add it to the result
            if (cnt <= 2) {
                ans.push_back(nums[i]);
            }
        }

        // Copy the result back to the original array
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        return ans.size(); // Return the new length of the array
    }
};