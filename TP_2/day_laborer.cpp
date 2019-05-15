#ifndef DAY_LABORER_CPP_INCLUDED
#define DAY_LABORER_CPP_INCLUDED

#include "day_laborer.h"

//Constructor without parameters
Day_laborer::Day_laborer(){
    daily_value = 0;
    days_amount = 0;
}

//Constructor with parameters
Day_laborer::Day_laborer(unsigned long int daily_value, unsigned int days_amount){
    this->daily_value = daily_value;
    this->days_amount = days_amount;
}

//set_daily_value
void Day_laborer::set_daily_value(unsigned long int daily_value){
    this->daily_value = daily_value;
}

//get_daily_value
unsigned long int Day_laborer::get_daily_value(){
    return daily_value;
}

//set_days_amount
void Day_laborer::set_days_amount(unsigned int days_amount){
    this->days_amount = days_amount;
}

//get_days_amount
unsigned int Day_laborer::get_days_amount(){
    return days_amount;
}

//calculate_salary
unsigned long int Day_laborer::calculate_salary(){
    return daily_value * days_amount;
}





#endif // DAY_LABORER_CPP_INCLUDED
