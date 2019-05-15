#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include "working_man.h"

class Employee : public Working_man{
    private:
        //Attributes
        unsigned long int monthly_salary;
        unsigned int lates_arrivals,absences;
    public:
        //Methods
        //Constructor without parameters
        Employee();
        //Constructor with parameters
        Employee(unsigned long int monthly_salary, unsigned int lates_arrivals, unsigned int absences);

        string get_type_of_worker();
        void set_monthly_salary(unsigned long int monthly_salary);
        unsigned long int get_monthly_salary();
        void set_lates_arrivals(unsigned int lates_arrivals);
        unsigned int get_lates_arrivals();
        void set_absences(unsigned int absences);
        unsigned int get_absences();
        virtual unsigned long int calculate_salary();

};



#endif // EMPLOYEE_H_INCLUDED
