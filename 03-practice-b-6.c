# include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the values of a,b,c and d\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is greatest\n");
            }
        }
    }
    else if(b>c){
           if(b>d){
             printf("b is greatest\n");
       }          
    }
    else if(c>d){
            printf("c is greatest\n");
    }
    else{
        printf("d is greatest\n");
    }
    return 0;
}