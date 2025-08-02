#include <iostream>

using namespace std;


class Node {
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int value){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }
        ~LinkedList(){
            Node* temp = head;
            while(head){
                head= head->next;
                delete temp;
                temp = head;
            }
        }
        void append(int value){
            Node* newNode = new Node(value);
            if(length ==0){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
                
            }
            length++;
        }

        void printLinkedlist(){
            Node* temp = head;
            while(temp!=nullptr){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }
};



int main() {
    LinkedList* first = new LinkedList(1);
   
    first->append(2);
    first->printLinkedlist();

return 0;
}