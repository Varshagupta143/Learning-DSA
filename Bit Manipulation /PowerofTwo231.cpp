class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0 ;
        return (n&(n-1))==0;
    }
};    // Tc - O(1) and sc -  O(1)


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        return 0 ;
        int count= 0 ;
        while(n)
        {
        if(n&1)
        count++ ;
        n=n>>1 ;
        }
        return  count==1;

    }
}; //tc-O(logn) and sc = O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 0;
        for(int i =0;i<=30;i++)
        {
              ans = pow(2,i);
            if(n == ans)
        return 1 ;
        }
        return 0;
    }
};   // tc - O(1) and sc- O(1)
