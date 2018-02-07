/*
Program Description : Program that will operate on an ATM machine for a bank
Author's Name: Jean de Dieu
Date:07/11/2016
Os Version:Windows 10
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin1;
    int pin2;
    int pin3;
    int pin4;
    int pinA;
    int pinB;
    int pinC;
    int pinD;
    int new_pin1;
    int new_pin2;
    int new_pin3;
    int new_pin4;
    int counter;
    int counter2;
    char option;
    int exit;

    pin1=1;
    pin2=2;
    pin3=3;
    pin4=4;
    pinA=0;
    pinB=0;
    pinC=0;
    pinD=0;
    new_pin1=0;
    new_pin2=0;
    new_pin3=0;
    new_pin4=0;
    counter=0;
    counter2=0;
    option=0;

    do// the do while loop is used rather than the while loop because it ensures that everything in the loop gets executed at least once
    {
        printf("\n");
        printf("<<<<<Welcome>>>>> \n");
        printf("Please select an option \n");
        printf("1. Enter PIN \n");
        printf("2. Change PIN \n");
        printf("3. Display correct and incorrect times PIN was entered \n");
        printf("4. Exit Program\n");
        scanf(" %c", &option);//allows the user to select an option
        printf("\n");

        if (option=='1')
        {
            system ("cls");// clears the screen
            printf("\n");
            printf("Enter your PIN \n");
            printf("Press enter after every digit\n");
            scanf("%d %d %d %d", &pinA, &pinB, &pinC, &pinD);//allows the user to enter their pin

            if ((pinA==pin1)&&(pinB==pin2)&&(pinC==pin3)&&(pinD==pin4))
                //checking if the pin entered matches with the default pin
            {
                printf("Correct pin Entered \n");
                counter++;
                //if the pins match, correct pin is displayed and counter gets incremented
            }//end if
            else
            {
                printf("Incorrect PIN entered \n");
                counter2++;
                //if the pins do not match, incorrect pin is displayed and counter2 gets incremented
            }//end else
        }//end if

        if (option=='2')
        {
            system ("cls");//clears the screen
            printf("\n");
            printf("Enter current pin to change PIN \n");// program asks user to enter their current pin in order to change the pin as a security measure
            printf("Press enter after every digit\n");
            scanf("%d %d %d %d", &pinA, &pinB, &pinC, &pinD);//allows the user to enter their current pin

            if ((pinA==pin1)&&(pinB==pin2)&&(pinC==pin3)&&(pinD==pin4))
            {
                // this if  checks if the pin mathes the users current pin, if the pins match it lets them change their PIN
                printf("Correct pin Entered \n");
                printf("\n");
                printf("Enter your new PIN \n");
                printf("Press enter after every digit\n");
                scanf(" %d %d %d %d", &pinA, &pinB, &pinC, &pinD);//allows the user to enter their new pin

                if ((pinA>0 && pinA<10 || pinA==0)&&(pinB>0 && pinB<10 || pinB==0)&&(pinC>0 && pinC<10 || pinC==0)&&(pinD>0 && pinD<10 || pinD==0))
                    // this if makes sure that only single digits are entered
                {
                    //if the digits entered are less than 10, greater than or equal to 0 program asks to re enter the pin to confirm
                    printf("Re-enter your new PIN \n");
                    printf("Press enter after every digit\n");
                    scanf("%d %d %d %d", &new_pin1, &new_pin2, &new_pin3, &new_pin4);//allows the user to enter their new pin again

                    if ((pinA==new_pin1)&&(pinB==new_pin2)&&(pinC==new_pin3)&&(pinD==new_pin4))
                    //if checks if the 2 new pins match
                    {
                        //if the new pins do match, the pin gets changed
                        printf("PIN has been changed \n");
                        pin1=new_pin1;
                        pin2=new_pin2;
                        pin3=new_pin3;
                        pin4=new_pin4;
                        // one = sign is an assignment operator
                        //new pin is saved by assigning the new pin to the original pin
                    }//end if
                    else
                    {
                        //if the pins do not match, the pin is not changed
                        printf("PINS do not match \n");
                        printf("PIN has not been changed \n");
                        pin1=pin1;
                        pin2=pin2;
                        pin3=pin3;
                        pin4=pin4;
                        // one '=' sign is an assignment operator
                        //pin remains the same by assigning it to its self
                    }
                }
                else
                //else gets executed if single digits are not entered
                {
                    printf("Invalid PIN entered \n");
                }

            }//end if
            else
            //this else gets executed if the user does not enter their current pin
            {
                printf("Incorrect PIN entered \n");
                printf("PIN can not be changed \n");
            }//end else

        }//end if

        if (option=='3')//option 3 prints the correct and incorrect amount of times that the pin was entered
        {
            system ("cls");
            printf("\n");
            printf("Pin entered %d correct times. \n", counter);
            printf("Pin entered %d incorrect times. \n", counter2);
        }// end if

        if(option!='1' && option!='2' && option!='3' && option!='4')
        {//option numbers were changed to charachers to make sure that program would not accept anything else other than characters 1,2,3 and 4
            system ("cls");
            printf("\n");
            printf("invalid entery");
            printf("\n");
        }//end if
    }//end do

    while (option!='4');
    //program ends when option is equal to 4

getchar();
return 0;
}//end main
