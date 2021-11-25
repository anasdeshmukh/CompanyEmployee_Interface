#ifndef HR_H
#define HR_H

#pragma once

#include "IEmployee.h"

class IHR
{
public:
    IHR();
    virtual ~IHR();

    virtual void addEmployee(IEmployee* employee, std::string profile) = 0;
    virtual void removeEmployee(IEmployee* employee, std::string profile) = 0;
    virtual std::vector<IEmployee*> getAllEmployees() = 0;

    //HR activities or mathods
};

class HR : public IEmployee, public IHR
{
public:
    HR();
    virtual ~HR();

    virtual void addEmployee(IEmployee* employee, std::string profile);
    virtual void removeEmployee(IEmployee* employee, std::string profile);
    virtual std::vector<IEmployee*> getAllEmployees();

    void setSalary(double);
    double getSalary();

    //HR activities or mathods

private:
    std::vector<IEmployee*> AllEmployees;
    double TotalSalaryOfAllEmployee;
    double salary;
};

class IFinance
{
public:
    IFinance();
    virtual ~IFinance();
    virtual double CalculateSalary(const HR&) = 0;

};

class Finance : public IEmployee, public IHR
{
public:
    Finance();
    virtual ~Finance();

private:
    double TotalSalaryOfAllManagers;
    EMP_TYPE employeeType = EMP_TYPE::ORG_HR;
};

#endif // HR_H
