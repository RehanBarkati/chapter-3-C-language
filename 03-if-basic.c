// C program to check whether a number is odd or even
# include<stdio.h>

int main(){
    int a,b;
    printf("enter a number\n ");
    scanf("%d",&a);
    
    if(a%2==0){
      printf("The number is even \n");
    }
    else{
        printf("%d is odd\n",a);
    }
    return 0;
}