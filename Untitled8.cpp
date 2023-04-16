class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            // XOR i�lemi sayesinde, tek bir eleman�n kalan elemanlarla �ift say�da e�le�erek kald���n� belirler.
            result ^= nums[i];
        }
        return result; // Tek eleman� d�nd�r�r.
    }
};

