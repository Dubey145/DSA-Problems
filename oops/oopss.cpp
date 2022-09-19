// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
oops concepts are used to represent real world objects
a class is a user defined data types
they represent attributes of real world objects

*/


class employee 
    {
        //members are private by default
        protected:
            string name;
            string company;
            int age;
        public: // these are access modifiers
        
        //lets create a constructor to set predefined values for the attributes
        //a constructor is invoked every time an object of the employee class is created 
            employee()
                {
                    age = 21;
                    name = "Aayush";
                    company = "Amazon";
                }   
            employee(string name, int age, string company)
                {
                    this->name = name;
                    this->age = age;
                    this->company = company;
                }
            void day1()
                {
                    cout<<"hello I am "<<name<<" I am "<<age<<" and I work at "<<company<<endl;
                }
            //example setter
            void setAge(int age)
                {
                    this->age = age;
                }
            int getAge()
                {
                    return age;
                }
            string getName()
                {
                    return name;
                }
            void get_promotion()//abstraction
                {
                    if(age>30)
                        cout<<"you are promoted "<<endl;
                    else 
                        cout<<"no way"<<endl;
                }
    };

/*
Encapsulation : wrapping up of data into a single unit 
it is the binding of data and the methods that operate on them together

this can be done by making data members private and making getter and setter functions that operate on these data members

this prevents anyone or anything that is outside the class to modify the attribute values
*/

/*
Abstraction : Displaying only the essential information to the outside world and hiding the details 

eg : you take a picture on your phone, you just press a button, you do not know how it is processed internally 

int c++ we use abstract class and the same job can be done by using an interface in java 
/*

Inheritance : 

*/
//developer inherits employee
class developers : public employee 
    {
        public : 
            string fav_prog_lang;
            developers(string name, int age, string company,string language):employee(name,age,company)
                {
                    fav_prog_lang = language;
                }
            void fix_bug()
                {
                    //cout<<getName()<<" is fixing a bug using "<<fav_prog_lang;
                    cout<<name<<" is fixing a bug using "<<fav_prog_lang<<endl;
                }
            //we use getters to access the properties of the parent class --> if they are private in the parent class 
            //if we make the parent properties protected then they will be available in the derived class as well
            void work()
                {
                    cout<<"hi I am "<<name<<" i am a developer"<<endl;
                }
    };

class teacher : employee
    {
        public: 
        string subject;
        teacher(string name, int age, string company, string subject) : employee(name,age,company)
            {
                this->subject = subject;
            }
        void prepare_lesson()
            {
                cout<<name<<" is preparing a"<<subject<<" lesson"<<endl;
            }
        void work()
            {
                cout<<"hi I am "<<name<<" i am a teacher"<<endl;
            }
    };
/*
Polymorphism : same name different functions - when a function has many forms 
work is defined in both teacher and developer but they have different tasks 

polymorphism is 
*/
int main()
    {
        employee e1;
        e1.day1();
        employee e2 = employee("vivo",1,"vivo");
        e2.day1();
        e2.setAge(29);
        cout<<e2.getAge()<<endl;

        developers d1("aayush",21,"Amazon","cpp");
        d1.fix_bug();
        //d1.get_promotion(); // cannot access because the inheritance is private by default

        //now that the inheritance is public d1 can access the function from main 
        d1.get_promotion(); 

        teacher t("jack",43,"coolschool","history");
        t.prepare_lesson();

        t.work();
        d1.work();

        // employee *emp1 = &t;
        // emp1->work();
        return 0;
    }