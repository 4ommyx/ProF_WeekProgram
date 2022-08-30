#include <stdio.h>

int main (){
    float bmi , w , h ;
    printf("Enter your weight (KG) : ");
    scanf("%f",&w);
    printf("Enter your height (M) : ");
    scanf("%f",&h);
    bmi = w / (h * h);
    printf("Your bmi is = %.2f\n",bmi);
    
    if(bmi>=30){
        printf("fat\n");

    } else if (bmi>=25.0){
        printf("high\n");

    } else if (bmi>=18.5){
        printf("balance\n");
        
    } else {
        printf("low\n");

    }

}