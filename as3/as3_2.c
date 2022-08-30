#include <stdio.h>

int main (){
    float w , h ;
    printf("Enter your weight (KG) : ");
    scanf("%f",&w);
    printf("Enter your height (M) : ");
    scanf("%f",&h);
    printf("Your bmi is = %.2f\n",w / (h * h));
    float x ;
    x = w / (h * h);

    if(x<18.5){
        printf("low\n");

    } else if (x>=18.5 || x<25.0){
        printf("balance\n");

    } else if (x>=25.0|| x<29.9){
        printf("high\n");
        
    } else {
        printf("fat\n");

    }

}
