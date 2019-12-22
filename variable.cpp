#include <iostream>

using namespace std;

int global_variable_1 = 0;
int global_variable_2 = 0;

int main()
{
    int local_variable_l = 0;
    int local_variable_2 = 0;

    int *single_int_1 = new int[1];
    int *single_int_2 = new int[1];

    cout << "&global_variable_1 = " << &global_variable_1 << "; " << endl;
    cout << "&global_variable_2 =" << &global_variable_2 << ";" << endl;
    cout << "&local_variable_l = " << &local_variable_l << ";" << endl;
    cout << "&local_variable_2 = " << &local_variable_2 << ";" << endl;
    cout << "&single_int_1 = " << &single_int_1[1] << "; " << endl;
    cout << "&single_int_2 = " << &single_int_2[1] << ";" << endl;

    delete [] single_int_1;
    delete [] single_int_2;

    return 0;

}
