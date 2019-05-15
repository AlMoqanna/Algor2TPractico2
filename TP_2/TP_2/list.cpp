#include "list.h"

//Constructor without parameters
List::List(){
    first = 0;
    length = 0;
}

//Destructor
List::~List(){
    while (!this->empty_list()){
        this->del_data(1);
    }
}

//insert_node
void List::insert_node(Working_man data){
    Node* new_n = new Node(data);

    if (!(this->empty_list())){
        new_n->set_next(first);
    }

    first = new_n;
    length++;
}

//get_length
unsigned int List::get_length(){
    return length;
}

//get_data
Working_man List::get_data(unsigned pos){

    Node* aux = first;

    if(!empty_list()){
        for (unsigned int counter = 1; (counter < pos && aux); counter++)
            aux = aux->get_next();
        return aux->get_data();
    }

    return 0;
}

//empty_list
bool List::empty_list(){
    return (tam == 0);
}

//del_data
void List::del_data(unsigned int pos){
    Nodo* aux = first;

    if(!empty_list()){
        if(pos == 1)
            first = first->get_next();
        else{
            for (unsigned counter = 0; (counter < pos-1 && aux->get_next()); counter++)
                aux = aux->get_next();

            aux->set_next(aux->get_next());

        }

        Nodo* del = aux;
        cout << "The node with the data" << del->get_data() << "is deleted" << endl;
        delete del;
        length--;

    }


}
