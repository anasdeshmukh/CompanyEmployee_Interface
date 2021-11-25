#ifndef IEMPLOYEE_H
#define IEMPLOYEE_H

#pragma once

#include <string>
#include <vector>

enum class EMP_TYPE
{
    ORG_BOSS = 0,
    ORG_HR,
    ORG_MANAGER,
    ORG_DEVELOPER,
    ORG_HELPER
};

class IEmployee
{
public:
    IEmployee();
    virtual ~IEmployee();

    virtual void addHR(IEmployee* employee) = 0;        // update Parents
    virtual void RequestHr() = 0;                       // request to reporting HR
    virtual void NotificationReceived() = 0;                // Notification from parent OR Organization
    virtual void addParent(IEmployee* employee) = 0;        // update Parents
    virtual void removeParent(IEmployee* employee) = 0;     // update Parents
    virtual void RequestParent() = 0;                       // request to reporting Parent
    virtual void addChild(IEmployee* employee) = 0;         // update EmployeesManaged
    virtual void removeChild(IEmployee* employee) = 0;      // update EmployeesManaged
    virtual void NotifyChild() = 0;                         // Notification to childs
    virtual void RequestReceivedFromChild() = 0;            // request received from child
    virtual std::vector<IEmployee*> getChilds() = 0;        // return EmployeesManaged

    void setName(std::string) {};
    void setContact(std::string) {};
    virtual void setSalary(double) = 0;
    double getSalary() {};

    std::string getName() {};
    std::string getProfile() {};
    std::string getContact() {};

protected:
    std::string name;
    std::string profile;
    std::string email;
    std::vector<IEmployee> EmployeesManaged;
    std::vector<IEmployee> Parents;
};

#endif // IEMPLOYEE_H
