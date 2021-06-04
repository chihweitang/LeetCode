class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;  // count of set bit
        while(n>0){  // iterate until all bits are traversed
			++cnt;
            n=n&(n-1); // change the first set bit from right to 0
        }
        return cnt;
    }
};

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;  // count of set bit
        while(n>0){  // iterate until all bits are traversed
            if((n&1)>0) // check the parity of first bit from right
                ++cnt;
            n=n>>1; //n=n/2, shift one bit to right
        }
        return cnt;
    }
};
