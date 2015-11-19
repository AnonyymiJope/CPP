#include <iostream>
#include <cmath>
#include "constants.h"

int getHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    int h;
    std::cin >> h;
    return h;
}

 float calculateHeight(int height)
{
    for (int i(0); i <= 5; i++)
    {
        float dist = ( myConstants::gravity  * static_cast<int>(pow(i, 2)) ) / 2;
        float current_dist = height - dist;
        // check wheter we are going under the ground
        if (current_dist < 0)
            current_dist = 0;
        std::cout << "At " << i << " seconds, the ball is at height: " <<
            current_dist << " meters" << std::endl;
    }
}

int main()
{
    int h = getHeight();
    calculateHeight(h);

    return 0;
}
