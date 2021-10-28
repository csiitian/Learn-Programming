#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c) {
    if(a < b && a < c) {
        return a;
    } else if(b < c) {
        return b;
    } else {
        return c;
    }
}
int getUglyNumber(int n) {
    
    if(n <= 0) return 0;

    int dp[n];
    int i2=0,i3=0,i5=0;
    int next_multiple_of_2 = 2;
    int next_multiple_of_3 = 3;
    int next_multiple_of_5 = 5;
    dp[0] = 1;
    int next_ugly_no = 1;
    for(int i=1;i<n;i++) {
        next_ugly_no = min(next_multiple_of_2, next_multiple_of_3, next_multiple_of_5);
        dp[i] = next_ugly_no;
        if(next_ugly_no == next_multiple_of_2) {
            i2++;
            next_multiple_of_2 = dp[i2]*2;
        }
        if(next_ugly_no == next_multiple_of_3) {
            i3++;
            next_multiple_of_3 = dp[i3]*3;
        }
        if(next_ugly_no == next_multiple_of_5) {
            i5++;
            next_multiple_of_5 = dp[i5]*5;
        }
    }
    return dp[n-1];
}
int main() {
    int n;
    cin >> n;
    for(int i=1;i<n;i++) {
        cout << getUglyNumber(i) << " ";
    }
}