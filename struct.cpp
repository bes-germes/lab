#include <iostream>

using namespace std;

typedef struct
{
    char x; /*1 bytes*/
    short y; /*2 bytes*/
    long z; /*4 bytes*/
}Ordered;

typedef struct
{
    short y; /*2 bytes*/
    long z; /*4 bytes*/
    char x; /*1 bytes*/
}Disordered;

int main()
{
    Ordered ordered;
    Disordered disordered;

    cout << "Size of char: " << sizeof(ordered.x) << endl;
    cout << "Size of short: " << sizeof(ordered.y) << endl;
    cout << "Size of long: " << sizeof(ordered.z) << endl;
    cout << "Size of Ordered: " << sizeof(Ordered) << endl;
    cout << "Size of Disordered: " << sizeof(Disordered) << endl;
    cout << "Sum of fields in Ordered struct: " << sizeof(ordered.x) + sizeof(ordered.y) + sizeof(ordered.z) << endl;
    cout << "Sum of fields in Disordered struct: " << sizeof(disordered.x) + sizeof(disordered.y) + sizeof(disordered.z) << endl;
    
    return 0;
}