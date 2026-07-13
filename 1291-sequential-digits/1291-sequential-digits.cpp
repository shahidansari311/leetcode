class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int temp = low;
        int lowDigits = 0;
        while (temp) {
            lowDigits++;
            temp /= 10;
        }

        temp = high;
        int highDigits = 0;
        while (temp) {
            highDigits++;
            temp /= 10;
        }

      for (int count = lowDigits; count <= highDigits; count++) {
            for (int f = 1; f <= 9; f++) {

                int res = 0;
                int digit = f;
                bool valid = true;

               for (int i = 0; i < count; i++) {
                    if (digit > 9) {
                        valid = false;
                        break;
                    }
                    res = res * 10 + digit;
                    digit++;
                }

                if (!valid)
                    break;

                if (res >= low && res <= high)
                    ans.push_back(res);
            }
        }

        return ans;
    }
};