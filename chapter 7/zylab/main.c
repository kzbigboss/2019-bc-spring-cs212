/* Code below is for zyBooks online text 
   C programming by Vahid and Lysecky, Univ. of Arizona

   provided for CS212 students at Bellevue College
   modified significantly for Visual Studio
   by W.P. Iverson, instructor
   April 10, 2019
*/

#include<stdio.h>
#include<string.h>
#include "ItemToPurchase.h" // students write this
#define NUM_ITEMS 2 // fix at two items so we don't have to type too much

int main(void) {
    char name[50]; // only 50 char names and under allowed
    int price = 0;
    int quantity = 0;
    int subtotal, total = 0;
    char c;

    // from the struct
    ItemToPurchase item[NUM_ITEMS];

    // only do a couple for now, as you have to enter by hand
    for (int i = 0; i < NUM_ITEMS; ++i)
    {
        printf("Item %d\n", i + 1);
        printf("Enter the item name:\n");
        //scanf("%s", name); // white space issues
        gets(name); // gets the whole line

        printf("Enter the item price:\n");
        c = scanf("%d", &price);

        printf("Enter the item quantity:\n");
        c = scanf("%d", &quantity);
        printf("\n");

        strcpy(item[i].itemName, name);
        item[i].itemPrice = price;
        item[i].itemQuantity = quantity;

        c = getchar(); // used just to follow zyBooks instructions
        while (c != '\n' && c != EOF)
            c = getchar();

    }

    printf("TOTAL COST\n");
    for (int i = 0; i < NUM_ITEMS; ++i)
    {
        subtotal = item[i].itemPrice * item[i].itemQuantity;
        total += subtotal;
        printf("%s %d @ $%d = $%d\n", item[i].itemName, item[i].itemQuantity, item[i].itemPrice, subtotal);
    }
    printf("\nTotal: $%d\n", total);

    //printf("scanf: press any key to exit"); 
    //scanf("%c", &c); // if working at console

    return 0;
}
