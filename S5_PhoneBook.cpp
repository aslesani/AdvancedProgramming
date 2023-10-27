#include <iostream>
#include <string>
using namespace std;

class PhoneBook{
      std::string name;
      std::string phone;

      public:
      PhoneBook(){

      }
      PhoneBook(string name, string phone){
            this->name = name;
            this->phone = phone;
      }

      void print(){
            cout<<name<< ": "<<phone<<endl;
      }

      ~PhoneBook(){
            cout<<"Destructor\n";
      }
};


void phoneBookArray(){
      int n;
      cout<<"Enter numbrer of perspns:";
      cin>>n;
      PhoneBook phb[n];
      for(int i = 0; i<n; i++){
            string name, phone;
            cout<<"Enter name:\n";
            cin>>name;
            cout<<"Enter Phone:\n";
            cin>>phone;

            phb[i] = PhoneBook(name, phone);
      }

      for(int i=0; i<n; i++){
            phb[i].print();
      }
}

class PhoneBookLinkedList{
      
      public:
      string name;
      string phone;
      PhoneBookLinkedList *next;

      PhoneBookLinkedList(){
            name = "w";
            phone = "w";
            next = 0;
      }
      PhoneBookLinkedList(string name, 
                          string phone, 
                          PhoneBookLinkedList* ph){
            this->name = name;
            this->phone = phone;
            next = ph;
      }

      void print(){
            cout<<name<< ": "<<phone<<endl;
      }

      ~PhoneBookLinkedList(){
            cout<<"Destructor\n";
      }
};


int main(){
      PhoneBookLinkedList *contact1 = new PhoneBookLinkedList();
      PhoneBookLinkedList *contact2 = new PhoneBookLinkedList();
      contact1->name = "A1";
      contact1->phone = "0912";
      contact1->next = contact2;
      contact1->print();

      contact2->name = "A2";
      contact2->phone = "0935";
      contact2->print();
      //cout<<"contact2->next: "<<contact2->next<<endl;

      contact1->next->print();
      return 0;
}