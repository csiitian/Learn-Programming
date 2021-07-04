#include<stdio.h>
int highestPowerof2(int n)
{
    int res = 0;
    for (int i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
void main() {
    int n;
    scanf("%d",&n);
    int result = highestPowerof2(n);
    printf("%d",result);
}