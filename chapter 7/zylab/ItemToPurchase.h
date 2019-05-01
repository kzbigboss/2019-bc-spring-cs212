#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

typedef struct ItemToPurchase_struct {
    char itemName[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

/* 
Had to comment this block out to avoid 
redefinition errors. This executies file locally
via CLion IDE (Mac OS).

void MakeItemBlank(ItemToPurchase* input){
};

void PrintItemCost(ItemToPurchase input){
};
*/

#endif
