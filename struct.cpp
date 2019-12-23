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
    cout << "Size of Client: " << sizeof(disorderedClient) << endl;
    cout << "Size of Client1: " << sizeof(disorderedClient1) << endl;
    cout << "Size of DisorderedClient: " << sizeof(Client) << endl;
    cout << "Size of DisorderedClient1: " << sizeof(Client1) << endl;
    cout << "Sum of fields in Client struct: " << sizeof(client.Age) + sizeof(client.Queue) + sizeof(client.Name) + sizeof(client.Alright) + sizeof(client.Home) + sizeof(client.SecondName) << endl;
    cout << "Sum of fields in DisorderedClient struct: " <<  sizeof(client.Age) + sizeof(client.Queue) + sizeof(client.Name) + sizeof(client.Alright) + sizeof(client.Home) + sizeof(client.SecondName) << endl;
    cout << "Sum of structs: " << sizeof(Client) + sizeof(disorderedClient) + sizeof(disorderedClient1) + sizeof(Client1)<< endl;
    cout << &client.Alright << " " << &client.Name << " " << &client.Queue << " " << &client.Age << " " << &client.Name << " " << &client.SecondName << endl;
    cout << &client1.Alright << " " << &client1.Name << " " << &client1.Queue << " " << &client1.Age << " " << &client1.Name << " " << &client1.SecondName << endl;
    cout << &disorderedClient.Alright << " " << &disorderedClient.Name << " " << &disorderedClient.Queue << " " << &disorderedClient.Age << " " << &disorderedClient.Name << " " << &disorderedClient.SecondName << endl;
    cout << &disorderedClient1.Alright << " " << &disorderedClient1.Name << " " << &disorderedClient1.Queue << " " << &disorderedClient1.Age << " " << &disorderedClient1.Name << " " << &disorderedClient1.SecondName << endl;
    return 0;
}
