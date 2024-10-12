class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;
        // Create a mask with all bits set to 1 that has the same length as num
        while (temp) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }
        // XOR num with mask to get the complement
        return num ^ mask;
    }
};
