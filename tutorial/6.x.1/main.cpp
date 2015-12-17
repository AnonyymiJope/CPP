#include <iostream>

enum Item
{
    HEALTH_POTION,
    TORCH,
    ARROW,
    MAX_ITEMS
};

int countTotalItems(int items[])
{
    int itemsTotal(0);

    for (int index = 0; index < MAX_ITEMS; ++index)
    {
        itemsTotal += items[index];
    }

    return itemsTotal;
}

int main ()
{
    int items[MAX_ITEMS]{ 2, 5, 20 };

    std::cout << "Items in total: " << countTotalItems(items) << std::endl;

    return 0;
}
