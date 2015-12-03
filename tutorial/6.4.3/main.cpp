#include <iostream>
#include <utility>

int main ()
{
    const int size(9);
    int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for (int iter = 0; iter < size; ++iter)
    {
	for (int currentIndex = 0; currentIndex < (size - 1); ++currentIndex)
	{
	    int nextIndex = currentIndex + 1;
	    if (array[currentIndex] > array[nextIndex])
	    {
		std::swap(array[currentIndex], array[nextIndex]);
	    }
	}
    }

    for (int index = 0; index < size; ++index)
	std::cout << array[index] << ' ';

    std::cout << std::endl;
    return 0;
}
