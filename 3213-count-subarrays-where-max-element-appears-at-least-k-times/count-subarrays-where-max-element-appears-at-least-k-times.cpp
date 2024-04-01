#pragma GCC optimize("O3","unroll-loops")

static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return true;
}();

inline bool is_digit_or_negative(char c) {
    return (c >= '0' && c <= '9') || (c == '-');
}

std::vector<int> parse_input_data_string(const std::string& s, int& max_element) {
    std::vector<int> input_data_1D;
    const int N = s.size();
    max_element = std::numeric_limits<int>::min();
    int left = 0;
    while (left < N) {
        if (!is_digit_or_negative(s[left])) {
            ++left;
            continue;
        }
        int right = left;
        long long value = 0;
        int is_negative = 1;
        while (right < N && is_digit_or_negative(s[right])) {
            if (s[right] == '-') {
                is_negative = -1;
            } else {
                value = value * 10 + (s[right] - '0');
            }
            ++right;
        }
        value *= is_negative;
        input_data_1D.push_back(value);
        max_element = std::max(max_element, static_cast<int>(value));
        left = right;
    }
    return input_data_1D;
}

constexpr int MAX_SIZE = 100'000;
static std::array<int, MAX_SIZE> positions;

long long countSubarrays(std::vector<int>& nums, int k, const int max_element) {
    const int N = nums.size();
    int M = 0;
    for (int i = 0; i < N; ++i) {
        if (nums[i] == max_element) {
            positions[M] = i;
            M++;
        }
    }   
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

bool Solve = [](){
    std::ofstream out("user.out");
    for (std::string s; std::getline(std::cin, s);) {
        int max_element;
        std::vector<int> input_data = parse_input_data_string(s, max_element);
        std::getline(std::cin, s);
        const int k = std::stoi(s);
        out << countSubarrays(input_data, k, max_element) << "\n";
    }
    out.flush();
    exit(0);
    return true;
}();


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