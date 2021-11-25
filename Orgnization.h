#ifndef ORGNIZATION_H
#define ORGNIZATION_H

#pragma once

#include "HR.h"
#include <map>

class Orgnization
{
public:
    Orgnization();
    ~Orgnization() = default;

    void notifyAllEmployee();
    void notifyAllMAnager();
    void notifyAllHR();
    void notifyAllDeveloper();

    const HR& GetHR();

private:
    std::map<int, IEmployee*> AllEmployees; // key = empid, value = employee object

    double salary;
    HR HR_Object;
};

#endif // ORGNIZATION_H
