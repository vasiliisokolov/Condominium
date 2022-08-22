#include <iostream>

bool check_number(int);

int main()
{
    std::string condominium[10];
    int apartmentNumber;
    std::cout << "Input tenants:" << std::endl;
    
    for (int count = 0; count < 10; count++)
    {
        std::cin >> condominium[count];
    }
    for (int count = 0; count < 3; count++)
    {
        std::cout << "Input apartment number(0 - 9):" << std::endl;
        std::cin >> apartmentNumber;
        if (!check_number(apartmentNumber)) break;
        std::cout << condominium[apartmentNumber] << std::endl;
    }
}
bool check_number(int apartmentNumber)
{
    if (apartmentNumber < 0 || apartmentNumber > 9) return false;
    else return true;
}
