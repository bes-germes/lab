#include <iostream>

using namespace std;

int global_variable_1;
int global_variable_2;

int main()
{
    const int size = 2;

    int local_variable_l;
    int local_variable_2;

    int *single_int_1 = new int;
    int *single_int_2 = new int;

    cout << "&global_variable_1 = " << &global_variable_1 << "; " << endl;
    cout << "&global_variable_2 = " << &global_variable_2 << ";" << endl;
    cout << "&local_variable_l = " << &local_variable_l << ";" << endl;
    cout << "&local_variable_2 = " << &local_variable_2 << ";" << endl;
    cout << "single_int_1 = " << single_int_1 << "; " << endl;
    cout << "single_int_2 = " << single_int_2 << ";" << endl;

    delete single_int_1;
    delete single_int_2;

    return 0;
}
