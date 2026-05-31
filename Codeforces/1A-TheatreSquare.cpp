/*    Theatre Square in the capital city of Berland has a rectangular shape
with the size n × m meters. On the occasion of the city's anniversary,
a decision was taken to pave the Square with square granite flagstones.
Each flagstone is of the size a × a.
What is the least number of flagstones needed to pave the Square? It's allowed
to cover the surface larger than the Theatre Square, but the Square has to be
covered. It's not allowed to break the flagstones. The sides of flagstones should
be parallel to the sides of the Square.    */

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
