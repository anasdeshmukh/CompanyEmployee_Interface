#ifndef EMPOYEE_H
#define EMPOYEE_H

#include "iemployeeinfo.h"

class Employee : public IEmployeeInfo
{
    Employee(std::string empName, std::string empProfile, double empSalary)
    {
        name = empName; profile = empProfile; salary = empSalary;
    }
    virtual ~Employee();

    void add(Employee employee);
    void remove(Employee employee);
    virtual std::vector<Employee> getChild();

    std::string getName();
    std::string getProfile();
    std::string getContact();
    double getSalary();

private:
    std::string name;
    std::string profile;
    std::string email;
    double salary;
    std::vector<Employee> EmployeesManaged;
};

#endif // EMPOYEE_H
