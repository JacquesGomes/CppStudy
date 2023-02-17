#include <iostream>
using namespace std;

class Node{
    private:
        int element;
        Node* next;

    public:

        Node (int element){ //constructor inicializing the node. "this" is used to diferentiate the local variable from the object one
            this-> element = element;
            this->next = NULL;
        }

        //methods:

        int getElement(){
            return element;
        }

        Node* getNext(){
            return next;
        }

        void setNext(Node* p){
            next = p;
        }

    
};

class List{
    private:
        Node* head;
        Node* tail;

    public:

        void menu();
        void action (int);

        List(){
            head = NULL;
            tail = NULL;
            menu();
        }

        List (int v){
            head = new Node(v);
            tail = head;
            menu();
        }

        virtual ~List(){
            delete head;
        }

        void show(){
            cout << "\nAll elements: " << endl;
            Node* c = head;

            if(empty()){
                cout << "The list is empty." << endl;
            }
            else{
                while(c){
                    cout << c->getElement() << endl;
                    c = c->getNext();
                }
                cout << endl;
            }
        }

        bool empty(){ //checks if the list is empty
            return(head == NULL);
        }

        void insert_head(int v){
            Node* new_node = new Node(v);

            if(empty()){
                head = new_node;
                tail = new_node;
            }
            else{
                new_node->setNext(head);
                head = new_node;
            }
        }

        void insert_tail(int v){
            Node* new_node = new Node(v);

            if(empty()){
                head = new_node;
                tail = new_node;
            }
            else{
                tail->setNext(new_node);
                tail = new_node;
            }
        }



        int getSize (){

            if(empty()){
                return 0;
            }

            Node* c = head;

            int size = 0;

            do{

                c = c->getNext();
                size++;

            } while (c);

            return size;

        }

        bool checkElement(int v){

            Node* c = head;

            while(c){
                if(c->getElement() == v){
                    return true;
                }
                c = c->getNext();
                
            }
            return false;
        }

        void remove(){ //Remove tail
            if(!empty()){
                if(head->getNext()==NULL){
                    head = NULL;
                }
                else if(head->getNext()->getNext()==NULL){
                    head->setNext(NULL);
                }
                else{
                    Node* temp1 = head;
                    Node* temp2 = head->getNext();
                    Node* temp3 = head->getNext()->getNext();

                    while(temp3){
                        Node* aux = temp2;
                        temp2 = temp3;
                        temp1 = aux;
                        temp3 = temp3->getNext();
                    }
                    delete temp1->getNext();
                    temp1->setNext(NULL);
                    tail = temp1;
                }
            }
        }

};

void List::menu(){

    int op = 0;

    do{
        cout << "0. Quit"<<endl;
        cout << "1. Show All List Elements"<<endl;
        cout << "2. Check if the list is empty"<<endl;
        cout << "3. Check if Certain Element is in the List" << endl;
        cout << "4. Show List Size" <<endl;
        cout << "5. Insert Element at Tail Position" << endl;
        /*
        cout << "5. Show List Size" <<endl;
        cout << "6. Show All List Elements" <<endl;
        cout << "7. Show List Head" << endl;
        cout << "8. Show List Tail" <<endl;*/
        cout << endl;
        cout << "Print the operation of your choice: ";
        /*//Check if Certain Element is in the List
        //Insert Element at Head Position
        //Insert Element at Tail position
        //Delete Last Element*/
        cin >> op;
        action (op);

    } while (op);

}



void List::action(int op){
    switch(op){

        case 0:
            cout  << "Bye bye." << endl;
            break;

        case 1:
            show();
            break;

        case 2:

            cout << endl;
            if(empty()==1){
                cout << "The list is empty" <<endl;
            }
            else{
                cout << "The list isnt empty" << endl;
            }
            cout << endl;
            break;

        case 3:
            int check;
            cout << endl;
            cout << "Insert the number you want to check: ";
            cin >> check;
            cout << endl;

            if((checkElement(check)) == true){
                cout << "The number '" <<check << "' is on the list" << endl;
            }
            else {
                cout << "The number '" << check << "' isn't on the list" <<endl;
            }
            cout << endl;
            break;

        case 4:
            int size_int;
            size_int = getSize();

            cout << endl;
            cout << "The list size is: " << size_int <<endl;
            cout << endl;
            break;

        case 5:

            int tail_number;
            cout << endl;
            cout << "Insert the number you want to insert at the tail position: ";
            cin >> tail_number;

            insert_tail (tail_number);
            cout << endl;
            cout << "Here is the list new tail: " << tail->getElement() << endl;
            cout << endl;
            break;

        case 6:
            
        case 7:

        case 8:

        default:

            cout<< "Invalid Option." <<endl;
    }
}

int main(){

    List chain(0);
    chain.remove();

    return 0;
}