class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.length()-1;
        while(right > left){
            while(right > left && !isalnum(s[right])){
                right--;
            }
            while(right > left && !isalnum(s[left])){
                left++;
            }
            if(tolower(s[right]) != tolower(s[left])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
