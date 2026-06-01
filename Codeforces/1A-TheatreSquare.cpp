#include <stdio.h>
 
int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long x1 = (n + a - 1) / a;
    long long x2 = (m + a - 1) / a;
    
    long long total_stones = x1 * x2;
    
    printf("%lld\n", total_stones);
    
    return 0;
}
