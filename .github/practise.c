#include <stdio.h>
void main()
{
    float a,b,c ;
    printf("Input three numbers ");
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    if(a>b){
        if(a>c){
            printf("%f",a);
        } 
        else{
            printf("%f",c);
        }
    }
    else{
        if(b>c){
            printf("%f",b);
        }
        else{
            printf("%f",c);
        }
    }

}