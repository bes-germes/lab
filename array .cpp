#include <iostream>

using namespace std;

int main()
{
    const int size = 2;

    int static_one_dim_array[size];

    int  *dynamic_one_dim_array = new int[size];

    int static_two_dim_array[size][size];

    int  **dynamic_two_dim_array = new int* [size];

    for (int i = 0; i < size; i++)
    {
        dynamic_two_dim_array[i] = new int[size];
    }

    for(int i = 0; i < size; i ++)
    {
        cout << "&static_one_dim_array[" << i << "] = " << &static_one_dim_array[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < size; i ++)
    {
        cout << "&dynamic_one_dim_array[" << i << "] = " << &dynamic_one_dim_array[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "&static_two_dim_array[" << i << "]"  << "[" << j << "] = " << &static_two_dim_array[i][j] << endl;
        }
    }

    cout << endl;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "&dynamic_two_dim_array[" << i << "]"  << "[" << j << "] = " << &dynamic_two_dim_array[i][j] << endl;
        }
    }

    for(int i = 0; i < size; i++)
    {
        delete [] dynamic_two_dim_array[i];
    }

    delete dynamic_two_dim_array;
    delete[] dynamic_one_dim_array;

    return 0;
}
