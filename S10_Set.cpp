#include <iostream>
using namespace std;

class Set{
    friend Set operator-(Set, Set);
    friend bool operator==(Set s1, Set s2);
    private:
        int members[10] = {};
    public:
        void addMember(int item){
            if(item >= 1 && item<=10){
                members[item-1] = 1;
            }

            else{
                cout<<"the memebr must be between 1 and 10!\n";
            }
        }

        void deletemember(int item){
            if(item >= 1 && item<=10){
                members[item-1] = 0;
            }

            else{
                cout<<"the memebr must be between 1 and 10!\n";
            }

        }

        void print(){
            for(int i=0; i<10; i++){
                if(members[i] == 1){
                    cout<<i+1<<", ";
                }
            }

            cout<<endl;
        }

        Set operator+(Set s2){
            Set result;
            for(int i=0; i<10; i++){
                result.members[i] = this->members[i] or s2.members[i]; 
            }

            return result;
        }
};

Set operator-(Set s1, Set s2){
    Set result;
    for(int i=0; i<10; i++){
        result.members[i] = s1.members[i] and not(s2.members[i]);
    }
    return result;
}

bool operator==(Set s1, Set s2){
    for(int i=0; i<10; i++){
        if(s1.members[i] != s2.members[i]){
            return false;
        }
    }

    return true;
}
int main(){
    Set s1, s2;
    s1.addMember(5);
    s1.addMember(6);
    s1.addMember(10);
    s1.print();

    s2.addMember(6);
    s2.addMember(8);
    s2.print();

    Set s3 = s1+s2;
    s3.print();

    s3 = s1-s2;
    s3.print();

    cout<<(s1==s1)<<endl;
    return 0;
}