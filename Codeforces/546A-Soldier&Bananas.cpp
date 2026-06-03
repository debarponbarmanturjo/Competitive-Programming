#include <stdio.h>

int main() {
    
    int k, n, w, borrow;
    scanf("%d %d %d", &k, &n, &w);
    borrow = (k * w * (w + 1)) / 2 - n;

    if (borrow < 0) {
        borrow = 0;
    }

    printf("%d", borrow);
    
    return 0;
}
