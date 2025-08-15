#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i = 0 ;
    int n ;
    cin >> n ;
    float ans = 0 ;
    while(n)
    {
        int rem = n%2 ;
        ans = ans + rem *pow(10,i);
        n=n/2;
        i++;

    }
    cout << ans ;
}
// tc : o(logn loglogn) because of pow function 
// sc - o(1)
// binary to dec 
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i = 0 ;
    int ans = 0 ;
    int n ;
    cin >> n ;
    while(n)
    {
        int rem = n%10 ;
        ans = ans + rem*pow(2,i);
         n=n/10;
         i++;

    }
    cout << ans ;
}
//tc - same 
//sc - same 
