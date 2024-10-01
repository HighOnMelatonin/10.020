// bubble sort in C++

#include <iostream>

int main()
{
    using namespace std;

    int array[11] = {5, 16, 14, 10, 8, 7, 8, 3, 2, 4, 1};

    for (int i = 0; i < 11; i++)
    {
        for (int j = 1; j < (10 - i); j++)
        {
            if (array[j] < array[j - 1])
            {
                // Swap values without 3rd variable (save space)
                array[j] = array[j] + array[j - 1];
                array[j - 1] = array[j] - array[j - 1];
                array [j] = array[j] - array[j - 1];
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}