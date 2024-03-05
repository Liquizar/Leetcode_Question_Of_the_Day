class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;

        // Continue shrinking the prefix and suffix as long as they are equal
        while (left < right && s[left] == s[right]) {
            char ch = s[left];
            // Move left pointer until a different character is encountered or left pointer reaches the right pointer
            while (left <= right && s[left] == ch) {
                left++;
            }
            // Move right pointer until a different character is encountered or right pointer reaches the left pointer
            while (right >= left && s[right] == ch) {
                right--;
            }
        }

        // Return the remaining length
        return right - left + 1;
    }
};
