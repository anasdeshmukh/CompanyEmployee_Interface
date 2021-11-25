#ifndef DEVELOPER_H
#define DEVELOPER_H

#pragma once

#include "IEmployee.h"

class Developer : public IEmployee
{
public:
    Developer(std::string empName, double empSalary);
    virtual ~Developer() = default;

    //developer activities or mathods

private:
    double salary;
    EMP_TYPE employeeType = EMP_TYPE::ORG_DEVELOPER;
};

#endif // DEVELOPER_H
