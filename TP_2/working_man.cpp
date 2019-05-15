#include "working_man.h"

//Constructor without parameters
Working_man::Working_man(){
    file_number = 0;
    surname_name = "";
    salary = 0;
}

//Constructor with parameters
Working_man::Working_man(unsigned long int file_number, string surname_name){
    this->file_number = file_number;
    this->surname_name = surname_name;
}

void Working_man::set_file_number(unsigned long int file_number){
    this->file_number = file_number;
}

unsigned long int Working_man::get_file_number(){
    return file_number;
}

void Working_man::set_surname_name(string surname_name){
    this->surname_name = surname_name;
}

string Working_man::get_surname_name(){
    return surname_name;
}
