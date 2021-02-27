# include<stdio.h>

int main(){
    int phy,chem,maths;
    float total;
    printf("What is your marks in phy\n");
    scanf("%d",&phy);

    printf("What is your marks in chem\n");
    scanf("%d",&chem);

    printf("What is your marks in maths\n");
    scanf("%d",&maths);

    total=(phy+chem+maths)/3;
    if((total<40) || phy<33 || chem<33 || maths<33){
        printf(" Your percentage is%f and you are fail\n",total);
    }
    else{
        printf(" Your percentage is%f and you are pass\n",total);
    }
    return 0;
}