## Destructor

* It is used to protect from memory leak etc.
* Destructor is called just after finishing the main function.

```cpp
class Student {
    Public:
        string name;
        string cls;
        void getInfo() {}

    Private:
        bool paidFee;

        Student(string name) {
            this->name = name;
        }

        ~Student() {
            delete variables;
        }
};

int main() {
    Student s1("Ragveer");
    s1.getInfo();

    return 0;
}
```
## 3. Inheritance

When properties & member functions of a class are passed on to the derived class.

```cpp
class Person() {
    Public:
        string name;
        int age;

    Person() {}
};

class Student : public Person {
    Public:
        int rollno;

        void getInfo() {
            cout << name << age << rollno;
        }
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 25;
    s1.roll = 126;
    s1.getInfo();
}
```