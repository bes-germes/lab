#include <iostream>

using namespace std;

typedef struct
{
    short x ;
    long y;
    double z;
}Ordered;

typedef struct
{
    long y;
    double z;
    short x ;
}Disordered;

int main()
{
    Ordered *ordered = new Ordered;
    Disordered *disordered = new Disordered;


    cout << "Size of short: " << sizeof(ordered->x) << endl;
    cout << "Size of long: " << sizeof(ordered->y) << endl;
    cout << "Size of double: " << sizeof(ordered->z) << endl;
    cout << "Size of Ordered: " << sizeof(Ordered) << endl;
    cout << "Size of Disordered: " << sizeof(Disordered) << endl;
    cout << "Adres of of short in ordered: " << &(ordered->x) << endl;
    cout << "Adress of of long in ordered: " << &(ordered->y) << endl;
    cout << "Adress of of double in ordered: " << &(ordered->z) << endl;
    cout << "Adres of of short in disordered: " << &(disordered->x) << endl;
    cout << "Adress of of long in disordered: " << &(disordered->y) << endl;
    cout << "Adress of of double in disordered: " << &(disordered->z) << endl;
    cout << "Sum of fields in Ordered struct: " << sizeof(ordered->x) + sizeof(ordered->y) + sizeof(ordered->z) << endl;
    cout << "Sum of fields in Disordered struct: " << sizeof(disordered->x) + sizeof(disordered->y) + sizeof(disordered->z) << endl;

    return 0;
}
