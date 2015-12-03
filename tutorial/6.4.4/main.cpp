#include <iostream>
#include <utility>

int main ()
{
    const int size(9);
    int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for (int iter = 1; iter <= size; ++iter)
    {
        bool swapped = false;

	for (int currentIndex = 0; currentIndex < (size - iter); ++currentIndex)
	{
	    int nextIndex = currentIndex + 1;
            std::cout << "iteration:    " << iter << std::endl;
            std::cout << "currentIndex: " << currentIndex << std::endl;
            std::cout << "nextIndex: " << nextIndex << std::endl;
            std::cout << std::endl;

            if (array[currentIndex] > array[nextIndex])
	    {
		std::swap(array[currentIndex], array[nextIndex]);
                swapped = true;
            }
	}

        if (!swapped)
        {       std::cout << "Early termination on iteration " << iter << std::endl;
            break;
        }
    }

    for (int index = 0; index < size; ++index)
	std::cout << array[index] << ' ';

    std::cout << std::endl;
    return 0;
}
