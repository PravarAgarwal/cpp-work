#include <iostream>

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}

int main()
{

    int array[] = {10, 9, 4, 7, 2, 1, 6, 1};
    // {1, 2, 4, 6, 7, 9, 10}

    int size = sizeof(array) / sizeof(int);
    printArray(array, size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // swap
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printArray(array, size);

    return 0;
}