#include <iostream>

using namespace std;

typedef struct
{
    bool Home;
    int Queue;
    char Name[20];
    float Age;
    bool Alright;
    char SecondName[20];
}Client;

#pragma pack(push, 1)
typedef struct
{
    bool Home;
    int Queue;
    char Name[20];
    float Age;
    bool Alright;
    char SecondName[20];
}Client1;
#pragma pack(pop)

typedef struct
{
    bool Home;
    bool Alright;
    char Name[20];
    char SecondName[20];
    int Queue;
    float Age;
}DisorderedClient;

#pragma pack(push, 1)
typedef struct
{
    bool Home;
    bool Alright;
    char Name[20];
    char SecondName[20];
    int Queue;
    float Age;
}DisorderedClient1;
#pragma pack(pop)

int main()
{
    Client client;
    Client1 client1;
    DisorderedClient disorderedClient;
    DisorderedClient1 disorderedClient1;
    cout << "Size of bool; " << sizeof(client.Alright) << endl;
    cout << "Size of char: " << sizeof(client.Name) << endl;
    cout << "Size of int: " << sizeof(client.Queue) << endl;
    cout << "Size of float: " << sizeof(client.Age) << endl;
    cout << "Size of Client: " << sizeof(Client) << endl;
    cout << "Size of Client1: " << sizeof(Client1) << endl;
    cout << "Size of DisorderedClient: " << sizeof(DisorderedClient) << endl;
    cout << "Size of DisorderedClient1: " << sizeof(DisorderedClient1) << endl;
    cout << "Sum of fields in Client struct: " << sizeof(client.Age) + sizeof(client.Queue) + sizeof(client.Name) + sizeof(client.Alright) + sizeof(client.Home) + sizeof(client.SecondName) << endl;
    cout << "Sum of fields in DisorderedClient struct: " <<  sizeof(client.Age) + sizeof(client.Queue) + sizeof(client.Name) + sizeof(client.Alright) + sizeof(client.Home) + sizeof(client.SecondName) << endl;
    cout << &client.Home << "-bool" << " " << &client.Queue << "-int" << " " << &client.Name << "-char" << " " << &client.Age << "-float" << " " << &client.Alright << "-bool" << " " << &client.SecondName << "-char" << endl;
    cout << &client1.Home << "-bool" << " " << &client1.Queue << "-int" << " " << &client1.Name << "-char" << " " << &client1.Age << "-float" << " " << &client1.Alright << "-bool" << " " << &client1.SecondName << "-char" << endl;
    cout << &disorderedClient.Alright << "-bool" << " " << &disorderedClient.Home << "-bool" << " " << &disorderedClient.Name << "-char" << " " << &disorderedClient.SecondName << "-char" << " " << &disorderedClient.Queue << "-int" << " " << &disorderedClient.Age << "-float" << endl;
    cout << &disorderedClient1.Alright << "-bool" << " " << &disorderedClient1.Home << "-bool" << " " << &disorderedClient1.Name << "-char" << " " << &disorderedClient1.SecondName << "-char" << " " << &disorderedClient1.Queue << "-int" << " " << &disorderedClient1.Age << "-float" << endl;
    return 0;
}

