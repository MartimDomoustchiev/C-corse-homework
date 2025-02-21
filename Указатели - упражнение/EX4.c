#include <stdio.h>

void compareasc(void *ptr1, void *ptr2){
    int a = *(int *)ptr1;
    int b = *(int *)ptr2;
    if(a > b){
        printf("1");
    }
    if(a == b){
        printf("0");
    }
    if(a < b){
        printf("-1");
    }
}
void comparedesc(void *ptr3, void *ptr4){
    int a = *(int *)ptr3;
    int b = *(int *)ptr4;
    if(a < b){
        printf("1");
    }
    if(a == b){
        printf("0");
    }
    if(a > b){
        printf("-1");
    }
}

int main(void){
    int a = 6, b = 5;
    printf("In case one \n");
    compareasc(&a, &b);
    printf("\nIn case two \n");
    comparedesc(&a, &b);
    return 0;
}



    
