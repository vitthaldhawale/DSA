class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> set;
        vector<int> result;
        for (int num : nums1)
            set.insert(num);

        for (int num : nums2) {
            if (set.find(num) != set.end()) {
                result.push_back(num);
                set.erase(num); 
            }
        }

        return result;
    }
};