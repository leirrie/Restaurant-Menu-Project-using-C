#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// By Riel Vincent Cabardo and Scott Lee Barcia
int main() {

    /*
        Create a C program that displays a menu for a restaurant. 
        This project is to be submitted to Mr. Darwin Desamparados for his BSIT-1A C programming class.
    */

    float friedChickenWandB = 6;
    float friedChickenLandT = 5;
    float chickenSaladSandwich = 6;
    float saladWGrilledChicken = 7;
    float plainSalad = 7;
    float saladDressing = 0;
    float BHKRBSwLettuceTomato = 6;
    char choice;
    int day;
    char dayName[10];
    int orderNumber;
    float money;
    float change;

    printf("............................................................................................\n");
    printf("Welcome to the Restaurant!\n");
    printf("All lunches come with a 2oz bag of chips, a cookie, and a drink.\n");
    printf("Salad dressing choices are ranch, thousand island, raspberry vinaigrette, and honey mustard.\n");
    printf("............................................................................................\n\n");
    printf("Would you like to see the menu? (Y/N): ");
    scanf(" %c", &choice);


    // Process user choice for displaying the menu
    if (choice == 'Y' || choice == 'y') {

        getchar(); // Clear newline character from input buffer

        printf("Enter day (1 = Thursday, 2 = Saturday, 3 = Friday): "); // Prompt user for day
        scanf("%d", &day);

        // Determine day name based on user input
        if (day == 1) {
            strcpy(dayName, "Thursday");
        }
        else if (day == 2) {
            strcpy(dayName, "Saturday");
        }
        else if (day == 3) {
            strcpy(dayName, "Friday");
        }
        else {
            system("cls");
            printf("Invalid day entered. Please enter 1, 2, or 3.\n");
            printf("Please try again.\n");
            return 0;
        }

        // Display menu based on the day
        if (day == 1 || day == 2 || day == 3 ) {

            system("cls");
            printf("All lunches come with a 2oz bag of chips, a cookie, and a drink.\n");
            printf("Salad dressing choices are ranch, thousand island, raspberry vinaigrette, and honey mustard.\n\n");
            printf("Menu for %s:\n\n", dayName);
            printf("1. Fried Chicken - Wings and Breast ................................ $%.2f\n", friedChickenWandB);
            printf("2. Fried Chicken with Lettuce and Tomato ........................... $%.2f\n", friedChickenLandT);
            printf("3. Chicken Salad Sandwich .......................................... $%.2f\n", chickenSaladSandwich);
            printf("4. Salad with Grilled Chicken ...................................... $%.2f\n", saladWGrilledChicken);
            printf("5. Plain Salad ..................................................... $%.2f\n", plainSalad);
            printf("6. Salad Dressing .................................................. $%.2f\n", saladDressing);
            printf("7. Boars Head Kaiser Roast Beef Sandwich with Lettuce Tomato ....... $%.2f\n", BHKRBSwLettuceTomato);


            // Prompt user for order number and money amount
            printf("\nEnter your order number to proceed with ordering. :");
            scanf("%d", &orderNumber);
        
            printf("Enter money amount: ");
            scanf("%f", &money);

            system("cls");

            // Process order based on user input
            if (orderNumber = 1) {

                // Check if user has sufficient funds for the selected item
                if (money >= friedChickenWandB) {

                    printf("Order successful! Enjoy your Fried Chicken - Wings and Breast.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - friedChickenWandB);
                    printf("Thank you for visiting!\n");

                }
                else {

                    printf("Insufficient funds for Fried Chicken - Wings and Breast.\n");
                    return 0;
                }

            } 
            else if (orderNumber = 2) {

                // Check if user has sufficient funds for the selected item
                if (money >= friedChickenLandT) {

                    printf("Order successful! Enjoy your Fried Chicken with Lettuce and Tomato.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - friedChickenLandT);
                    printf("Thank you for visiting!\n"); 

                } 
                else {

                    printf("Insufficient funds for Fried Chicken with Lettuce and Tomato.\n");
                    return 0;
                }

            } 
            else if (orderNumber = 3) {

                // Check if user has sufficient funds for the selected item
                if (money >= chickenSaladSandwich) {

                    printf("Order successful! Enjoy your Chicken Salad Sandwich.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - chickenSaladSandwich);
                    printf("Thank you for visiting!\n");

                }
                else {

                    printf("Insufficient funds for Chicken Salad Sandwich.\n");
                    return 0;
                }
            } 
            else if (orderNumber = 4) {

                // Check if user has sufficient funds for the selected item
                if (money >= saladWGrilledChicken) {

                    printf("Order successful! Enjoy your Salad with Grilled Chicken.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - saladWGrilledChicken);
                    printf("Thank you for visiting!\n");

                }
                else {

                    printf("Insufficient funds for Salad with Grilled Chicken.\n");
                    return 0;
                }
            } 
            else if (orderNumber = 5) {

                // Check if user has sufficient funds for the selected item
                if (money >= plainSalad) {

                    printf("Order successful! Enjoy your Plain Salad.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - plainSalad);
                    printf("Thank you for visiting!\n");   
                
                }
                else {

                    printf("Insufficient funds for Plain Salad.\n");
                    return 0;
                }
            } 
            else if (orderNumber = 6) {

                // Check if user has sufficient funds for the selected item
                if (money >= saladDressing) {

                    printf("Order successful! Enjoy your Salad Dressing.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - saladDressing);
                    printf("Thank you for visiting!\n");

                }
                else {

                    printf("Insufficient funds for Salad Dressing.\n");
                    return 0;
                }
            } 
            else if (orderNumber = 7) {

                // Check if user has sufficient funds for the selected item
                if (money >= BHKRBSwLettuceTomato) {

                    printf("Order successful! Enjoy your Boars Head Kaiser Roast Beef Sandwich with Lettuce Tomato.\n");
                    printf("You paid: $%.2f\n", money);
                    printf("Your change is: $%.2f\n", money - BHKRBSwLettuceTomato);
                    printf("Thank you for visiting!\n");

                }
                else {

                    printf("Insufficient funds for Boars Head Kaiser Roast Beef Sandwich with Lettuce Tomato.\n");
                    return 0;
                }
            }
            else {

                // Handle invalid order number
                printf("Invalid order number. Please enter a number between 1 and 7.\n");
                system("cls");
                return 0;

            }



        }
        else {    

            // Handle invalid day input
            system("cls");
            printf("Invalid day entered. Please enter 1, 2, or 3.\n");
            printf("Please try again.\n");
            return 0;

        }

    }
    else if (choice == 'N' || choice == 'n') {

        // Handle user choosing not to see the menu
        system("cls");
        printf("Thank you for visiting!\n");
        return 0;
    }
    else {

        // Handle invalid input for menu choice
        system("cls");
        printf("Invalid input. Please enter Y or N.\n");
    }
        
    return 0;
}