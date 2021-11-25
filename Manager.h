#ifndef MANAGER_H
#define MANAGER_H

#pragma once

#include "IEmployee.h"

class Manager : public IEmployee
{
public:
    Manager(std::string empName, double empSalary);
    virtual ~Manager() = default;

    //manager activities or mathods

private:
    double salary;
    EMP_TYPE employeeType = EMP_TYPE::ORG_MANAGER;
};

#endif // MANAGER_H
