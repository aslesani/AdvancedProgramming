#include <iostream>
using namespace std;
#include <string>
using std::string;

class Teacher{

    private:
        string name;
        string family;
        string education;
        string nationalCode;
        int room;

    public:
        Teacher(string name, string family): name(name), family(family){
            
        }

        Teacher(string n, string f, string edu, string nc, int r){
            name = n;
            family = f;
            education = edu;
            nationalCode = nc;
            room = r;

        }

        string getName(){
            return name;
        }
};

class Lecture{
    
    private:
    
        int code;
        int units;
        int maxNumberOfStudents;
        string name;
        Teacher &teacher;

    public:
        Lecture(int c, int un, int m, string n, Teacher &t):teacher(t){
            code = c;
            units = un;
            maxNumberOfStudents = m;
            name = n;
             
        }
       /*
        Lecture(string n, int uns){
            name = n;
            units = uns;
        }*/        

       
        void setName(string n){
            if(n.length() <= 20){
                name = n;
            }

            else{
                name = n.substr(0, 20);
            }
            
        }

        string getName(){
            return name;
        }

        string getTeacher(){
            return teacher.getName();
        }
};

int main(){
    Teacher t("Adele", "Lesani", "PhD", "123", 399);
    Lecture lec(12, 3, 35, "AP", t);
    cout<<"Lecture name:"<<lec.getName()<<endl;
    cout<<"Teacher name:"<<lec.getTeacher()<<endl;
    
    return 0;
}