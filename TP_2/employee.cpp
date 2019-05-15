#include "employee.h"

//Constructor without parameters
Employee::Employee(){
    monthly_salary = 0;
    lates_arrivals = 0;
    absences = 0;
}

//Constructor with parameters
Employee::Employee(unsigned long int monthly_salary, unsigned int lates_arrivals, unsigned int absences){
    this->monthly_salary = monthly_salary;
    this->lates_arrivals = lates_arrivals;
    this->absences = absences;
}

//set_monthly_salary
void Employee::set_monthly_salary(unsigned long int monthly_salary){
    this->monthly_salary = monthly_salary;
}

//get_monthly_salary
unsigned long int Employee::get_monthly_salary(){
    return monthly_salary;

}

//set_lates_arrivals
void Employee::set_lates_arrivals(unsigned int lates_arrivals){
    this->lates_arrivals = lates_arrivals;
}

//get_lates_arrivals
unsigned int Employee::get_lates_arrivals(){
    return lates_arrivals;
}

//set_absences
void Employee::set_absences(unsigned int absences){
    this->absences = absences;
}

//get_absences
unsigned int Employee::get_absences(){
    return absences;
}

//calculate_salary
unsigned long int Employee::calculate_salary(){
    unsigned long int bonus, penalty;
    if (absences == 0 && lates_arrivals <= 3){
        bonus = (monthly_salary * 10)/100;
        return monthly_salary + bonus;
    }
    else if (absences > 0){
        penalty = (absences * monthly_salary)/30;
        return monthly_salary - penalty;
    }
    else
        return monthly_salary;
}
