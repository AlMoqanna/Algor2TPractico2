#ifndef DAY_LABORER_H_INCLUDED
#define DAY_LABORER_H_INCLUDED
#include "working_man.h"

class Day_laborer : public Working_man{
    private:
        //Attributes
        unsigned long int daily_value;
        unsigned int days_amount;

    public:
        //Methods
        //Constructor without parameters
        Day_laborer();
        //Constructor with parameters
        Day_laborer(unsigned long int daily_value, unsigned int days_amount);

        void set_daily_value(unsigned long int daily_value);
        unsigned long int get_daily_value();
        void set_days_amount(unsigned int days_amount);
        unsigned int get_days_amount();
        virtual unsigned long int calculate_salary();








};


#endif // DAY_LABORER_H_INCLUDED
