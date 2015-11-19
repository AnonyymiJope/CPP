#include "io.h"

int main()
{
    int number_1 = readNumber();
    int number_2 = readNumber();

    int result = number_1 + number_2;
    writeAnswer(result);

    return 0;
}
