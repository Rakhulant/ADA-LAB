#include <stdio.h>
#include <stdlib.h>

void linear(int arr[], int item){
    int i, l = (int) sizeof(arr);
    for(i = 0; i<l ; i++){
        if(arr[i] == item){
            printf("Element found!");
            return;
        }
    }
    printf("Element not found");
}

void binaryS(int arr2[], int item2){
    int a=0,m,b, l = (int) sizeof(arr2);
    b=l;
    while(1){
        m = (a + b)/2;
        if(a>b){
            printf("Element not found");
            return;
        }
        if(arr2[m]==item2){
            printf("Element found");
            return;
        }
        else if(item2<arr2[m]){
            b = m-1;
        }
        else if(item2>arr2[m]){
            a = m+1;
        }
    }
}

int main(void)
{

    int arra[] = {12,14, 16, 50, 97, 115};

    linear(arra, 57);

    binaryS(arra, 50);

    return 0;
}
