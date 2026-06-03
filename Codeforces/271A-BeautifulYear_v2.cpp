#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int input;

    scanf("%d", &input);

    while (1) {
        input = input + 1;
        
        int a = input / 1000;
        int b = (input % 1000) / 100;
        int c = (input % 100) / 10;
        int d = input % 10;

        set<int> unique_digits;
        unique_digits.insert(a);
        unique_digits.insert(b);
        unique_digits.insert(c);
        unique_digits.insert(d);

        if (unique_digits.size() == 4) {
            printf("%d", input);
            break;
        }
    }
    
    return 0;
}
