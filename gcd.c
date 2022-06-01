#include <stdio.h>

int gcd(int m, int n){
    if(n==0)
        return m;
    else if(m<n)
        return gcd(n,m);
    else
        return gcd(n, m%n);
}

void main(){
    printf("%d",gcd(12,22));
}
