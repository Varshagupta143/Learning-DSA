class Solution {
public:
    int maximum69Number (int num) {
        string res = to_string(num);
        for(int i = 0 ;i<res.length();i++)
        {
            if(res[i]=='6')
            {
                res[i]='9';
                break ;
            }
        }

        return stoi(res) ;
    }
}; // tc - O(no of digits) sc - O(no of dgits)
class Solution {
public:
    int maximum69Number (int num) {
        int temp = num ;
        int place = 0 ;
        int idx = -1 ;
        while(temp)
        {
            int digit = temp%10 ;
            if(digit == 6)
            {
                idx=place ;
            }
            temp=temp/10 ;
            place ++;
        }
        if(idx!=-1)
        {
            num = num+(3*pow(10,idx));
        }
        return num ;
    }
};  // tc - o(no of digitS) sc -o(1)
