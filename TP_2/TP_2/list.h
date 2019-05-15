#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "node.h"

class List{

    private:
        Node* first;
        unsigned int length;

    public:
        List();
        ~List();
        void insert_node(Working_man data);
        unsigned get_length();
        Working_man get_data(unsigned pos);
        bool empty_list();
        void del_data(unsigned pos);


};

#endif // LIST_H_INCLUDED
