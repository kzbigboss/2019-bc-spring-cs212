#include <string>

class ItemToPurchase {
    std::string itemName;
    double itemPrice;
    double itemQuantity;

    public:
        ItemToPurchase(std::string, double, double);
        ItemToPurchase();
        double itemTotal();
        std::string toString();

    void MakeBlankItem(ItemToPurchase& inputItempToPurchase);
    void PrintItemCost(ItemToPurchase inputItemToPurchase);
};
