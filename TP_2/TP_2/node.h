#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include "working_man.h"

class Node{

    private:
        Working_man data;
        Node *next;
    public:
        Node (Working_man data);
        ~Node();
        void set_data(Working_man data);
        void set_next(Node* p_next);
        Working_man get_data();
        Node* get_next();
        bool have_next();

};







#endif // NODE_H_INCLUDED
