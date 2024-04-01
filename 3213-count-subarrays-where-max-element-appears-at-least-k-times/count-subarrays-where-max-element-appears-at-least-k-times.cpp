class Solution {
public:
    long long countSubarrays(std::vector<int>& nums, int k) {
        const int N = nums.size();
        const int max_elem = *std::max_element(std::begin(nums), std::end(nums));

        std::vector<int> positions;
        for (int i = 0; i < N; ++i) {
            if (nums[i] == max_elem) {
                positions.push_back(i);
            }
        }
        const int M = positions.size();
        
        int prev_idx = -1;
        long long counter = 0;
        for (int r = k - 1; r < M; ++r) {
            const int l = r - k + 1;
            const long long L = positions[l] + 1 - (prev_idx + 1); 
            const long long R = N - positions[r];
            counter += L * R;
            prev_idx = positions[l];
        }
        return counter;
    }
};