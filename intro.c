                /*----------------
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B    
                ----------------*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a;
    int ans = -1;
    scanf("%d", &a);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            ans = i;
            break;
        }
    }
        printf("%d", ans);
    return 0;
}