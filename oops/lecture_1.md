# OOPs <Object oriented programming>

- object are entities in the real world.
- class is like a blueprint of these entities.

class Teacher {
     // properties | attributes
    string name; 
    string dept;
    string subject;
    float salary;

    // method | Member functions
    void changeDept(newdept) {
        dept = newdept;
    }
};

## Access Modifiers

private:- data & methods accessible inside class.

public:- data / methods accessible to everyone.

protected:- data & methods accessible inside class & to its derived class.


# 4 Main pillars of OOPs:

1. Encapsulation
2. Abstraction
3. Inheritance
4. polymorphism


## 1. Encapsulation

Encapsulation is wrapping up of data and member function in a single unit class/ class.

-> it basically use to hide the data/attribute in a class.

class Account {
    Private:
        double balance;

    Public:
        string username;
};


# Constructor

* constructor

special method invoked automatically at time of object creation. used for initialisation.

- same name as class.
- constructor doesn't have a return type.
- Only called once, at object creation.
- Memory allocation happens when constructor is called.

class Teacher {
    Private:
        double salary;

    Public:
        string name;

        Teacher() { // constructor
            name = "ABC";
        }
}

int main() {
    Teacher t1;
    t1. cout<<t1.name;
}


# Shallow & Deep copy

- A shallow copy of an object copies all the member values from one object to another.

-> A deep copy, on the other hand, not only copies the member value but also copies any dynamically allocated memory that the member points to.