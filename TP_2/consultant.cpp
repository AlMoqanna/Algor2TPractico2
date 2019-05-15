#include "consultant.h"

//Constructor without parameters
Consultant::Consultant(){
    teaching_hour_value = 0;
    teaching_hours = 0;
    hours_to_substract = 0;
}

//Constructor with parameters
Consultant::Consultant(unsigned long int teaching_hour_value, unsigned int teaching_hours, unsigned int hour_to_substract){
    this->teaching_hour_value = teaching_hour_value;
    this->teaching_hours = teaching_hours;
    this->hours_to_substract = hour_to_substract;
}

//set_hour_value
void Consultant::set_teaching_hour_value(unsigned long int teaching_hour_value){
    this->teaching_hour_value = teaching_hour_value;
}

//get_hour_value
unsigned long int Consultant::get_teaching_hour_value(){
    return teaching_hour_value;
}

//set_hours
void Consultant::set_teaching_hours(unsigned int teaching_hours){
    this->teaching_hours = teaching_hours;
}

//get_hours
unsigned int Consultant::get_teaching_hours(){
    return teaching_hours;
}

//set_hours_to_substract
void Consultant::set_hours_to_substract(unsigned int hours_to_substract){
    this->hours_to_substract = hours_to_substract;
}

//get_hours_to_substract
unsigned int Consultant::get_hours_to_substract(){
    return hours_to_substract;
}

//calculate_salary
unsigned long int Consultant::calculate_salary(){
    unsigned long int penalty, salary_per_month;
    unsigned int hours_per_month;

    salary_per_month = teaching_hour_value * teaching_hours;
    hours_per_month = teaching_hours * 4;

    penalty = (hours_to_substract * salary_per_month) / hours_per_month;

    return salary_per_month - penalty;

}
