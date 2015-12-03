#include <iostream>

int main()
{
    int outer = 5;
    while (outer >= 1)
    {
        int inner = outer;

        while (inner >= 1)
        {
            std::cout << inner << " ";
            --inner;
        }

/* alternative way:
 *    {
 *        int inner = 0;
 *
 *        while (outer > inner)
 *        {
 *            std::cout << outer - inner << " ";
 *            ++inner;
 *        }
 */
        std::cout << "\n";
        --outer;
    }

    return 0;
}
