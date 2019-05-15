#include "ItemToPurchase.h"
#include <string>

double ItemToPurchase::itemTotal(){
    return 1.0;
}

ItemToPurchase::ItemToPurchase(std::string inputName, double inputPrice, double inputQuantity){
    itemName = inputName;
    itemPrice = 0.0;
    itemQuantity = 0.0;
}
