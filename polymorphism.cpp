#include<bits/stdc++.h>
using namespace std;

// example of constructor overloading
class Student{
public:
    string name;

    Student()
    {
        cout<<"I am non-paprmeterized\n";
    }
    Student(string name)
    {
        this->name = name;
        cout<<"I am parameterized \n";
    }

};

// example of function overloading
class print{
public:
        string x;
        string y = x;

    void show(int n)
    {
        cout<<"int : "<<n<<endl;
    }
    void show(string name)
    {
        cout<<"name : "<< name<<"\n";
    }
    print(string x)
    {
        this->x =x;
        this->y=x;
        cout<<"x :"<<x<<" y : "<<y<<endl;

    }
};


class  Parent{
public:
void getinfo()
{
    cout<<"I am from parent class \n";
}
virtual void hello()
{
    cout<<"virtual from parent \n";
}
};

class Child{
public:
void getinfo()
{
    cout<<"I am from Child class \n";
}
 void hello()
{
    cout<<"virtual from child \n";
}
};

//Abstract class
class Shape{  // pure virtual function
    virtual void draw() =0;

};

class Square{
    public:
    void draw()
    {
        cout<<"I can draw square";
    }
};

void fun()
{
    static int x=0;
    cout<<"x :"<<x<<"\n";
    x++;
}

class ABC{

public:
    ABC()
    {
        cout<<" constructor..\n";
    }

    ~ABC()
    {
        cout<<" destructor..\n";
    }

};

int main()
{


    // print s1("hi");
    // s1.show("roa");
    // Child c1;
    // c1.getinfo();
    // Parent p1;
    // p1.getinfo();
    // c1.hello();
    // Square s1;
    // s1.draw();
    // fun();
    // fun();
    // fun();
    // fun();

    if(true)
    {
        static ABC obj;
    }
    cout<<"pg end ....\n";
    return 0;

}