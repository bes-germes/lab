#include <iostream>

using namespace std;

typedef struct
{
    char x; /*1 bytes*/
    short y; /*2 bytes*/
    long z; /*8 bytes*/
}Ordered;

typedef struct
{
    short y; /*2 bytes*/
    long z; /*8 bytes*/
    char x; /*1 bytes*/
}Disordered;

int main()
{
    Ordered *ordered = new Ordered;
    Disordered *disordered = new Disordered;


    cout << "Size of char: " << sizeof(ordered->x) << endl;
    cout << "Size of short: " << sizeof(ordered->y) << endl;
    cout << "Size of long: " << sizeof(ordered->z) << endl;
    cout << "Size of Ordered: " << sizeof(Ordered) << endl;
    cout << "Adress of of char in ordered: " << &(ordered->x) << endl;  
    cout << "Adress of of short in ordered: " << &(ordered->y) << endl;
    cout << "Adress of of long in ordered: " << &(ordered->z) << endl;
    cout << "Size of Disordered: " << sizeof(Disordered) << endl;
    cout << "Sum of fields in Ordered struct: " << sizeof(ordered->x) + sizeof(ordered->y) + sizeof(ordered->z) << endl;
    cout << "Sum of fields in Disordered struct: " << sizeof(disordered->x) + sizeof(disordered->y) + sizeof(disordered->z) << endl;
    
    return 0;
}
