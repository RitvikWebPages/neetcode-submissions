class Solution {
public:
    int getSum(int a, int b) {
        int result = 0;
        int carry = 0;
        int sum =0;
        for(int i =0; i <32;i++){
            uint32_t a_bit = (a >> i) & 1;
            uint32_t b_bit = (b >> i) & 1;
            uint32_t sum = a_bit ^ b_bit ^ carry;
            carry = (a_bit & b_bit) | (a_bit  ^ b_bit) & carry;
            result |= sum <<i;
        }
        return result;
    }
};
