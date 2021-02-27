# include<stdio.h>

int main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>= 70){
        printf("you are prone to covid 19 \n");
    }
    else{
        printf("you are not prone to covid 19\n");
    }
    return 0;
}