#ifndef CONSULTANT_H_INCLUDED
#define CONSULTANT_H_INCLUDED

#include "working_man.h"

class Consultant : public Working_man{
    private:
        //Attributes
        unsigned long int teaching_hour_value;
        unsigned int teaching_hours, hours_to_substract;

    public:
        //Methods
        //Constructor without parameters
        Consultant();
        //Constructor with parameters
        Consultant(unsigned long int teaching_hour_value, unsigned int teaching_hours, unsigned int hour_to_substract);

        void set_teaching_hour_value(unsigned long int teaching_hour_value);
        unsigned long int get_teaching_hour_value();
        void set_teaching_hours(unsigned int hours);
        unsigned int get_teaching_hours();
        void set_hours_to_substract(unsigned int hours_to_substract);
        unsigned int get_hours_to_substract();
        virtual unsigned long int calculate_salary();
};

#endif // CONSULTANT_H_INCLUDED
