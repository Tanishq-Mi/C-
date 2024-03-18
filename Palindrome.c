#include<stdio.h>
int main(){


    // 1 we are declaring four variable here 
    // 2 first is number which we take input from user
    // 3 result is basically for to store the final value 
    // 4 quotient is basically for finding digit and use them


    int number ,result = 0 , quotient , remainder;
    // Declaring 4 variables

    printf("Enter a Number: ");
    scanf("%d",&number);

    // taking input from user

    quotient = number;

    // we are assigning value of number in quotient so after every process we can compare and find is it a palindrome number or not

    while(quotient != 0){
        remainder = quotient % 10;
        result = result*10 + remainder;
        quotient = quotient/10;
    }

    // it is the logic behind finding  palindrome  number

    if (result == number){
        printf("It's a Palindrome number!!!!");

        // if the original number value is equal to procced number value or not if yes then the following print statement will be printed
        // else the other statement
    }
    else{
        printf("It's not a Palindrome number!!!!");
    }
}