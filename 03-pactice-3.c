# include<stdio.h>

int main(){
    float tax, income ;
    printf("Enter your income\n"),
    scanf("%f",&income);

    if(income >=250000 && income <=500000){
        tax= 0.05*(income-250000);
    }
    else if(income >=500000 && income <=1000000){
        tax= 0.2*(income-500000);
    }
    else if(income >=1000000){
        tax= 0.3*(income-1000000);
    }     
    printf("tax should be paid by you is %f\n",tax);
    return 0;
}