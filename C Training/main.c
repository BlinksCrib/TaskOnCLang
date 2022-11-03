#include <stdio.h>
#include <stdlib.h>

int main()

{

    float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    if(amount <-200){
        printf("invalid amount, enter a valid amount\n");
    }
    else if(amount <5000){
        printf("You are not eligible for the discount at this time: %.f\n", amount);
    }
    else if(amount >=5000 && amount <=10000)
        {
            discount = (amount*5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount >10000 && amount <=15000)
        {
            discount = (amount*7.5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>15000 && amount<=20000)
        {
            discount = (amount*10)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else
        {
            discount = (amount*12.5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
    //getch();
    return 0;
}









 /*
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");*/

     /* int number;
     printf("Enter any number\n");
     scanf("%d",&number);

     if((number % 2) == 0){
        printf("This is an even number");
     }else{
        printf("This is an old number");
     }; */

     /* int number1, number2;
     int sum, difference, multiply, quotient;

     printf("Enter two integers: ");
     scanf("%d %d", &number1, &number2);

     sum = number1 + number2;
     difference = number1 - number2;
     multiply = number1 * number2;
     quotient = number1 / number2;

     printf("The sum is: %d\n", sum);
     printf("The difference is: %d\n", difference);
     printf("The product id: %d\n", multiply);
     printf("The quotient is: %d\n", quotient); */


     /* int number1, number2;

     printf("Enter two integers: ");
     scanf("%d %d", &number1, &number2);

     if(number1 > number2){
        printf("%d is larger\n", number1);
     }else if(number2 > number1){
        printf("%d is larger\n", number2);
     }else if(number1 == number2 ){
     printf("These numbers are equal\n");
     }; */

     /*
     float number;
     float diameter, circumference, area;
     const double circum = 3.14159;

     printf("Enter any integer: ");
     scanf("%f", &number);

     diameter = 2 * number;
     circumference = 2 * circum * number;
     area = circum * number * number;

     printf("Diameter is %.4f\n", diameter);
     printf("Circumference is %.4f\n", circumference);
     printf("Area is %.4f\n", area); */


     /*
        float number1, number2, number3, sum, product, average;
    printf("Enter three integers: ");
    scanf("%f %f %f", &number1, &number2, &number3);

     sum = number1 + number2 + number3;
     average = (number1 + number2 + number3) /3;
     product = number1 * number2 * number3;

     printf("Sum is: %.f\n", sum);
     printf("Average is: %.3f\n", average);
     printf("Product is: %.f\n", product);
     if(number1 < number2 && number1 < number3){
        printf("Smallest is %.f\n", number1);
     }else if(number2 < number1 && number2 < number3){
        printf("Smallest is %.f\n", number2);
     }else if(number3 < number1 && number3 < number2){
     printf("Smallest is %.f\n", number3);
     };
     if(number1 > number2 && number1 > number3){
        printf("Largest is %.f\n", number1);
     }else if(number2 > number1 && number2 > number3){
        printf("Largest is %.f\n", number2);
     }else if(number3 > number1 && number3 > number2){
     printf("Largest is %.f\n", number3);
     };
     */
