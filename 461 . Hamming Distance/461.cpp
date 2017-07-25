class Solution {
public:
    int hammingDistance(int x, int y) {
        int hammingValue = 0;
        string firstBinaryNum = bitset<32>(x).to_string();
        string secondBinaryNum = bitset<32>(y).to_string();
        for(int i = 0; i <= 32; i++){
            if(firstBinaryNum[i] != secondBinaryNum[i]){
                hammingValue++;
            }
        }
        return hammingValue;
    }
};