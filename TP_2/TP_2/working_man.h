#ifndef WORKING_MAN_H_INCLUDED
#define WORKING_MAN_H_INCLUDED
#include <string>
using namespace std;

class Working_man{
    private:
        //Attributes
        unsigned long int file_number, salary;
        string surname_name;
    public:
        //Methods
        //Constructor without parameters
        Working_man();
        //Constructor with parameters
        Working_man(unsigned long int file_number, string surname_name);

        void set_file_number(unsigned long int file_number);
        unsigned long int get_file_number();
        void set_surname_name(string surname_name);
        string get_surname_name();
        unsigned long int calculate_salary();
        void to_string();



};





#endif // WORKING_MAN_H_INCLUDED
