#include "HR.h"

IHR::IHR()
{

}

IHR::~IHR() = default;

HR::HR()
{

}

HR::~HR(){ };

void HR::addEmployee(IEmployee *employee, std::string profile)
{

}

void HR::removeEmployee(IEmployee *employee, std::string profile)
{

}

std::vector<IEmployee*> HR::getAllEmployees()
{
    return AllEmployees;
}
