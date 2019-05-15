#include "node.h"

//Constructor with parameters
Node::Node(Working_man data){
    this->data = data;
    next = 0;
}

//Destructor
Node::~Node(){

}

//set_data
void Node::set_data(Working_man data){
    this->data = data;
}

//set_next
void Node::set_next(Nodo* next){
    this->next = next;
}

//get_data
Working_man Node::get_data(){
    return data;
}

//get_next
Node* Node::get_next(){
    return next;
}

//have_next
bool Node::have_next(){
    return (next != 0);
}
