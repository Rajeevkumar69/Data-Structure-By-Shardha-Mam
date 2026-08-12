# OOPs <Object Oriented Programming>

* **Objects are entities in the real world.**
* **Class is a blueprint of these entities.**

```cpp
class Teacher {
    Private:
        string name;
        string dept;
        string subject;
        float salary;

    Public:
        void changeDept(newdept) {
            dept = newdept;
        }
};
```

## Access Modifiers

* **private:** Data & methods accessible inside the class.
* **public:** Data & methods accessible to everyone.
* **protected:** Data & methods accessible inside the class & derived class.

## 4 Main Pillars of OOPs

1. Encapsulation
2. Abstraction
3. Inheritance
4. Polymorphism

## 1. Encapsulation

**Encapsulation** is wrapping data and member functions into a single unit/class.

→ It is basically used to hide data/attributes inside a class.

```cpp
class Account {
    Private:
        double balance;

    Public:
        string username;
};
```

## Constructor

**Constructor:** Special method invoked automatically when an object is created.

* Same name as the class.
* No return type.
* Called once during object creation.
* Memory allocation happens when constructor is called.

```cpp
class Teacher {
    Private:
        double salary;

    Public:
        string name;

        Teacher() {
            name = "ABC";
        }
};

int main() {
    Teacher t1;
    cout << t1.name;
}
```

## Shallow & Deep Copy

* **Shallow Copy:** Copies all member values from one object to another.
* **Deep Copy:** Copies member values and dynamically allocated memory pointed to by the member.
