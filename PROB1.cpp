
#include <iostream>
using namespace std;

class Person {
 
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print_info() {
            cout << "My name is: " << name << " my age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

int main(){
  Person p1("Swasthik",22);
  p1.print_info();
  return 0;
}
