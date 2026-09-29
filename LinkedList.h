#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;
class LinkedList { // LinkedList class
    private:
        class Node { // Node class
            public: // attributes of node class
            int data;
            Node* next;

            Node(int value) { // Constructor of Node class
                data = value;
                next = nullptr;    
            
            }
        };
        Node* head; 
    public:
        LinkedList() {
            head = nullptr;
        } 
        void insertAtHead(int value) {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }
        void insertAtTail(int value) { 
            Node* newNode = new Node(value); 
            if (head == nullptr) { 
            head=newNode;
            return; 
            } 
            Node* current = head; 
            while (current->next!= NULL) { 
            current = current->next; 
            } 
            current->next=newNode;
        }
        bool deleteValue(int value) { 
        if (head == nullptr) return false; 
        // Case B
         if (head->data == value) { 
        Node* temp = head; 
        head=head->next;
        delete temp; 
        return true; 
            } 
 
        // Case C 
        Node* current = head; 
        while (current->next != nullptr) { 
            if (current->next->data == value) { 
                Node* temp = current->next; 
                current->next=temp->next;
                delete temp; 
                return true; 
            } 
            current = current->next; 
        } 
        return false; 
        }
        
        bool search (int value){
            Node* current = head;
            while(current != nullptr){
                if (current->data == value){
                    return true;
                }
                current = current->next;
            } 
            return false;
            }
        int length() {
            int count = 0;
            Node* current = head;
            while (current != nullptr){
                count++;
                current = current->next;
            }
            return count;
        }
        void reverse() {
            Node* previous = nullptr;
            Node* current = head;
            Node* next = nullptr;
            while (current != nullptr) {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }
            head = previous;
        
        }
        void print() {
            Node* current = head;
            while (current != nullptr){
                cout << current->data <<"->";
                current = current->next;
            }
            cout << "NULL" << endl;
        }
    };

#endif