#include <stdio.h>

int main(void){
    //Getting the doubles in
    double a, b;
    
    //Getting the doubles in
    printf("Give me value for a: \n");
    scanf("%lf", &a);
    printf("Give me value for b: \n");
    scanf("%lf", &b);

    //Getting the pointers and entering adreses
    double* ptr1 = &a;
    double* ptr2 = &b;

    //Printing the pointers
    printf("%p \n", ptr1);
    printf("%p \n", ptr2);

    //Giving the program an end
    return 0;
}