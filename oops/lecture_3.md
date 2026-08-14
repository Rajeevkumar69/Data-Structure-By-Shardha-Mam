## 2. Abstraction

**Abstraction** means hiding unnecessary implementation details and showing only the important part.

### Static Keyword

`static` is used to create class-level members that are shared among all objects of a class.

```cpp
class Student {
public:
    static int count;
};

int Student::count = 0;
```

## 4. Polymorphism

**Polymorphism** is the ability of objects/functions to take different forms or behave differently depending on the context in which they are used.

### Types of Polymorphism

* **Compile-time polymorphism**
* **Run-time polymorphism**

### Compile-time Polymorphism

Compile-time polymorphism is achieved mainly through **function overloading** and **operator overloading**.

```cpp
class Print {
public:
    void show(int x) {
        cout << x;
    }

    void show(char ch) {
        cout << ch;
    }
};

int main() {
    Print p1;

    p1.show(101);

    return 0;
}
```

### Function Overloading

Function overloading means having multiple functions with the **same name** but **different parameters**.

The compiler decides which function to call at compile time.

```cpp
class Student {
public:
    string name;

    Student() {
        cout << "Non param";
    }

    Student(string name) {
        this->name = name;
        cout << "param";
    }
};

int main() {
    Student s1;
    Student s2("Rajeev");

    return 0;
}
```

### Run-time Polymorphism

Run-time polymorphism is achieved through **function overriding** using **inheritance** and **virtual functions**.

```cpp
class Parent {
public:
    virtual void show() {
        cout << "Parent";
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child";
    }
};

int main() {
    Parent* p = new Child();

    p->show();

    delete p;
    return 0;
}
```

### Function Overriding

Function overriding occurs when a derived class provides its own implementation of a function already defined in the base class.

* Same function name
* Same parameters
* Requires inheritance
* `virtual` enables runtime polymorphism