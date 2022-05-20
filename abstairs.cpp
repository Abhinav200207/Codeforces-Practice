#include <cstdio>
 
int main(void)
{
    int n, m ;
    scanf("%d%d", &n, &m) ;
 
    int lower_bound = (n+1)/2 ;
    int ans = (lower_bound+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;
 
    printf("%d\n", ans) ;
 
    return 0 ;
}