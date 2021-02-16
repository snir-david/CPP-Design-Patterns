#include <iostream>


using namespace std;

class Employee {
    string name;
    int salary;
public:
    Employee(string s, int sala) {
        this->name = s;
        this->salary = sala;
        cout << "employee CTOR" << endl;
    }

    Employee(Employee &e) {
        this->salary = 0;
        *this = e;
        cout << "employee CCTOR" << endl;
    }

    Employee &operator=(const Employee &e) {
        if (this != &e) {
            cout << "employee op =" << endl;
            this->salary = e.salary;
            this->name = e.name;
        }
        return *this;
    }


    Employee(Employee &&e) {
        cout << "employee move CTOR" << endl;
        *this = move(e);
    }
    Employee &operator=(const Employee &&e) {
        if (this != &e) {
            cout << "employee&& op =" << endl;
            this->salary = e.salary;
            this->name = e.name;
        }
        return *this;
    }

    ~Employee(){
        cout << "employee DTOR";
        if(this->salary == 0){
            cout << "with salary == 0";
        }
        cout << endl;

    }

};

//int main() {
//    Employee e("Yossi", 5000);
//    Employee e1("Dana", 4500);
//    e = (Employee&&) e1;
//    return 0;
//}