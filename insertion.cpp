// insertion sort in C++

#include <iostream>

int main()
{
    using namespace std;

    int array[10] = {5, 16, 14, 10, 8, 7, 8, 3, 2, 4};

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // main loop
    for (int i = 1; i < 10; i++)
    {
        int j = i;
        while ((array[j] < array[j - 1]) and j > 0)
        {
            // Swap values without 3rd variable
            array[j - 1] =  array[j] + array[j - 1];
            array[j] = array[j - 1] - array[j];
            array[j - 1] = array[j - 1] - array[j];
            j -= 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}