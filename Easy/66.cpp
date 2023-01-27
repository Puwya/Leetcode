class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int i = digits.size()-1;
      while (i >= 0) {
        ++digits[i];
        if (digits[i] != 10) {
          return digits;
        }
        digits[i] = 0;
        --i;
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};
