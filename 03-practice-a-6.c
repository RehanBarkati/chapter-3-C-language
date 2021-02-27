#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the values of a,b and c\n");
    scanf("%f %f %f", &a,&b,&c);

    if(a>b){
     if(a>c){
         printf("a is greatest\n");   
    }
    else{
        printf("c is greatest\n");
    }
    }
    else if(b>c)
    printf("b is greatest\n");
    else{
        printf("c is greatest\n");
    }    
    return 0;
}