#include <stdio.h>
//Starting the swap function

void rotate(double a, double b){

//The doubles are in

    double* ptr1 = &a;
    double* ptr2 = &b;
//Pointers are in


    printf("Before the swap \n");
    printf("%p \n", ptr1);
    printf("%p \n", ptr2);

//Printed before the swap

    printf("After the swap: \n");

    double* ptr3 = ptr1;   
    ptr1 = ptr2;
    ptr2 = ptr3;

//Swaping the pointersx


    printf("%p \n", ptr1);
    printf("%p \n", ptr2);

//Printing the pointers

}

int main(void){

//Getting the requirements from the function swap and runing them

    double a, b;
    printf("Enter value for a: \n");
    scanf("%lf", &a);
    printf("Enter value for b: \n");
    scanf("%lf", &b);
//Getting end result
    rotate(a, b);   

//Giving the program an end 
    return 0;
}