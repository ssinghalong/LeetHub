// class Solution {
// public:
//     int give(int now,int high){
//         string s = "123456789";
//         int dig = floor(log10(now)+1);
//         int start = now/(pow(10,dig-1));
//         if(start+dig>9){
//             start = 0;
//             dig++;
//         }
//         int sum = 0;
//         for(int i=0;i<dig;i++){
//             sum = sum*10 + s[start+i]-'0';
//             cout<<start+i<<" ";
//         }
//         return sum;
//     }

//     vector<int> sequentialDigits(int low, int high) {
//         vector<int> vec;
//         int abhi = give(low,high);
//         while(abhi<=high){
//             vec.push_back(abhi);
//             abhi=give(abhi,high);
//         }
//         return vec;
//     }
// };

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> a;

        for (int i = 1; i <= 9; ++i) {
            int num = i;
            int nextDigit = i + 1;

            while (num <= high && nextDigit <= 9) {
                num = num * 10 + nextDigit;
                if (low <= num && num <= high) a.push_back(num);
                ++nextDigit;
            }
        }

        sort(a.begin(), a.end());
        return a;
    }
};


