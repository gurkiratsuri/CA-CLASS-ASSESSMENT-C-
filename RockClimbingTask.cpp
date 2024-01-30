/*
TASK
A man wants to do rock climbing and reach the top of a steep peak. 
Thers is N no. of convenient rocks on the mountain which the mountaineer can step onto to 
reach the peak a little easily. 
The initial position/rock on which the rock climber is standing currently is denoted as I. 
From each rock, the person can skip utmost X rocks. The task here is  to find the 
No. of ways a mountaineer can climb to reach the peak.
Input:
6 -> value of N
3 -> value of I
2 -> value of X
output:
3 -> number of ways he can reach the peak.
*/

#include <iostream>
#include <math.h>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int N, I, X;
    cin >> N >> I >> X;
    int ans = 0;
    int k = N-I;
    // the ans should be the combination of Nc1 to Nc2
    for (int i = 1; i < X; i++)
    {
        ans = ans + nCr(k, i);
    }

    cout << ans;
}