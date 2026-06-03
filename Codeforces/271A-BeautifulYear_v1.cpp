#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int input, a, b, c, d;

    scanf("%d", &input);

    starting:
    input=input+1;
    a=input/1000;
    b=(input%1000)/100;
    c=(input%100)/10;
    d=input%10;

    if(a==b || a==c || a==d || b==c || b==d || c==d){
        goto starting;
    }
    else{
        printf("%d", input);
    }
    
    return 0;
}
