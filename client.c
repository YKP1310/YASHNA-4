/*
 * C Program to Implement Stack Operations using Dynamic Memory 
 * Allocation
 */
#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"


 void main()
{
    int choice;
 
    while (1)
    {
        printf("1. push an element \n");
        printf("2. pop an element \n");
       	printf("3. Print top of the stack \n");
        printf("4. exit \n");
        printf("Enter your choice \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:    
            push();
            break;         
        case 2:    
            pop();
            break;         
        
        case 3:    
            peek();
            break;
        case 4:    
            exit(0);
        default:
            printf("wrong choice\n");         
        }
    }
}