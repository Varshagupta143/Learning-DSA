class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal ;
        int count = 0 ;
        for(int i = 0 ;i<31;i++)
        {
            if(ans&(1<<i))
            count++;
        }
        return count ;
    }
}; //tc - O(1) sc- O(1) 
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal ;
        int count = 0 ;
        while(ans>0)
        {
            if(ans&1)
            {
            count++;
            }
            ans = ans>>1;
        }
        return count ;
    }
};  // tc = O(1) sc-O(1)
