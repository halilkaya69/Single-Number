class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            // XOR iþlemi sayesinde, tek bir elemanýn kalan elemanlarla çift sayýda eþleþerek kaldýðýný belirler.
            result ^= nums[i];
        }
        return result; // Tek elemaný döndürür.
    }
};

