#include<stdio.h>
int main(){

    // Here we're declaring Two Variable , number and count for Taking input and count the digits of the given number respectivelly
int number , count=0;
printf("Enter a number: ");
scanf("%d",&number);


// Now for the logic part I'm Gonna use While loop to run the program few times
while(number!=0){
    number=number/10;
    count++;
}
printf("Digit of Given Number is : %d",count);
}
