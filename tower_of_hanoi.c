#include<stdio.h>

void tof(int n,char from, char to, char aux){
    if(n==1){
        printf("move disc 1 from %c to %c\n", from, to);
        return;
    }
    tof(n-1, from,aux,to);
    printf("move disc %d from %c to %c\n",n, from, to);
    tof(n-1, aux,to,from);
}

void main(){
    tof(3,'A','B','C');
}
