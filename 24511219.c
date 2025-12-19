/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));

    
    int number1=(rand()%18)+1;
    int number2=(rand()%(19-number1))+1;
    int number3=20-number1-number2;
    int sum=number1*number2;
    printf("%d %d\n",number1,number2);
    printf("%d\n",number3);
    if (number1>number2&&number1>number3){
        printf("stamina\n");
        printf("Yor are knight");
    }
    if (number2>number1&&number2>number3){
        printf("intelligence\n");
        printf("You are mage");
    }
    if (number3>number2&&number3>number1){
        printf("charisma\n");
        printf("You are theif");
    
    }
     if (number1==number2&&number1>number3){
        printf("stamina or intelligence\n");
        printf("You are mage or knight ");
    
    }
     if (number3==number2&&number3>number1){
        printf("charisma or intelligence\n");
        printf("you are theif or mage");
    
    }
     if (number3==number1&&number3>number2){
        printf("charisma or stamina\n");
        printf("You are theif or knight");
    
    }
    
   
    
    
    return 0;
}
/*number1の値は1~18*/
/*number2の値は1~(20-number1)の間*/