#include <iostream> 
#include <cassert> 
using namespace std; 
#include "Linkedlist.h"
// --- paste your Node and LinkedList classes above main --- 
 
int main() { 
    LinkedList L; 
 
    // TC1: insertAtHead (builds list in reverse order) 
    L.insertAtHead(30); 
    L.insertAtHead(20); 
    L.insertAtHead(10); 
    cout << "TC1: "; L.print(); 
 
    // TC2: insertAtTail 
    L.insertAtTail(40); 
    L.insertAtTail(50); 
    cout << "TC2: "; L.print(); 
 
    // TC3: length 
    cout << "TC3: length = " << L.length() << endl; 
 
    // TC4: search 
    cout << "TC4: search(30)=" << L.search(30) 
         << " search(99)=" << L.search(99) << endl; 
 
    // TC5: delete head 
    L.deleteValue(10); 
    cout << "TC5: "; L.print(); 
 
    // TC6: delete tail 
    L.deleteValue(50); 
    cout << "TC6: "; L.print(); 
 
    // TC7: delete middle 
    L.deleteValue(30); 
    cout << "TC7: "; L.print(); 
 
    // TC8: delete non-existent 
    bool r = L.deleteValue(99); 
    cout << "TC8: deleteValue(99)=" << r << endl; 
 
    // TC9: reverse 
    LinkedList L2; 
    L2.insertAtTail(1); L2.insertAtTail(2); L2.insertAtTail(3);
     L2.reverse(); 
     cout << "TC9: "; L2.print(); 
     // TC10: empty list edge cases 
     LinkedList L3; 
     cout << "TC10: length=" << L3.length() 
     << " search=" << L3.search(5) 
     << " delete=" << L3.deleteValue(5) << endl; 
     return 0;
     }