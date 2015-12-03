#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;

    return heightNow;
}

void calculateAndPrintHeight(double initialHeight)
{
    int seconds = 0;

    while (calculateHeight(initialHeight, seconds) >= 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << calculateHeight(initialHeight, seconds) << std::endl;
        ++seconds;
    }

    std::cout << "At " << seconds << " seconds, the ball has hit the ground.\n";
}

int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;

    calculateAndPrintHeight(initialHeight);

    return 0;
}
