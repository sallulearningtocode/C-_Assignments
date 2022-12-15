#include<iostream>
#include<typeinfo>
using namespace std;

/*1.Define a claa Complex with appropriate instance variables 
and member functions. Overload following operators.
a. << Insertion operator
b. >> Extraction operator
class Complex{
    int real,imag;
    public:
    friend istream& operator>>(istream&,Complex&);   
    friend ostream& operator<<(ostream&,Complex);   
};
ostream& operator<< (ostream &dout,Complex c){
        cout<<c.real<<"+"<<c.imag;
        return dout;
}
istream& operator>> (istream &in,Complex &c)
{
    cin>>c.real>>c.imag;
    return in;
}
int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
}*/

/*2.Define a class Complex with appropriate instance variables and member functions
One of the functions shoud be setdata() to set the properties of the object.
Make Sure the names of formal arguments are the same as names of instance variables.

class Complex{
    int real,imag;
    public:
    void setdata(int real, int imag){
        this->real=real;this->imag=imag;
    }
    void show(){cout<<real<<" "<<imag;}
};int main()
{
    Complex c1;
    c1.setdata(5,6);
    c1.show();
}*/

/*3.Overload subscript operator [] that will be useful when we 
    want to check for an index out of bound.
class Array{
    int *p,size;
    public:
    Array(int s){
            size=s;
            p = (int *)malloc(sizeof(int)*size);
    }
    void operator[](int s){
            if(s<size)
            cout<<"Valid Index";
            else
            cout<<"Invalid Index";
    }
    void input()
    {
        int i;
        for(i=0;i<size;i++)
        {
            cin>>p[i];
        }
    }
    void show(){
        int i;
        for(i=0;i<size;i++)
        cout<<p[i]<<endl;
    }
};
int main()
{
    Array a1(10);
    // a1.input();
    // a1.show();
    a1[25];
}*/

/*4.Create a Student Class and overload new and delete operators as a member function 
 of the class.
class Student{
    int age,standard,id;
    string name;
    public:
    void setdata(){
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter Standard"<<endl;
        cin>>standard;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter id"<<endl;
        cin>>id;
    }
    void showdata(){
        cout<<"Name is "<<name<<endl;
        cout<<"Standard is"<<standard<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"Id is "<<id<<endl;
    }
    void operator=(Student *s){
            age = s->age;
            id=s->id;
            name=s->name;
            standard=s->standard;
    }
    void* operator new(size_t size){
        void *s;
        s = :: operator new(size);
        return s;
    }
    void operator delete(void *p){
        delete p;
    }
};
int main()
{
    
    Student s1,*p;
    p = new Student;
    p->setdata();
    p->showdata();
    delete p;
    p->showdata();
}*/

/*5.Create a Student Class and overload new and delete operators outside the class
class Student{
    int age,standard,id;
    char name[20];
    public:
    void setdata(){
        cout<<"Enter name"<<endl;
        fflush(stdin);
        fgets(name,20,stdin);
        cout<<"Enter Standard"<<endl;
        cin>>standard;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"Enter id"<<endl;
        cin>>id;
    }
    void showdata(){
        cout<<"Name = "<<name<<endl;
        cout<<"Standard = "<<standard<<endl;
        cout<<"Age  = "<<age<<endl;
        cout<<"Id  = "<<id<<endl;
    }
    friend void* operator new(size_t);
    friend void operator delete(void *);
};
    void * operator new(size_t size){
        void *p = malloc(size);
        return p;
    }
    void operator delete(void * s){
        free(s);
    }
int main()
{
    Student *s1;
    s1 = new Student;
    s1->setdata();
    s1->showdata();
    delete s1;
    s1->showdata();
}*/

/*6.Create a Complex Class and Overload Assignment (=) operator for that class
    class Complex{
    int real,imag;
    public:
    Complex(){}
    Complex(int x,int y){real=x;imag=y;}
    void show(){cout<<real<<" "<<imag;}
    void operator=(Complex C){real=C.real;imag=C.imag;}
};
int main()
{
    Complex c1(3,4),c2;
    c2=c1;
    c2.show();
}
*/

/*7. Create an integer class and overload logical not operator for that class

class Integer{
    int n;
    public:
    Integer(int a){n=a;}
    void operator!(){n=-n;}
    void show(){cout<<n;}
};
int main()
{
    Integer i(-4);
    !i;
    i.show();
}
*/

/*8.Create a Coordinate class for 3 variables x,y,z and overload comma operator
such that when you write c3=(c1,c2) then c2 is assigned to c3. Where c1, c2 and c3
are objects of 3d Coordinates.
class Coordinate{
    int x,y,z;
    public:
    void set(int a, int b, int c){x=a;y=b;z=c;}
    Coordinate operator,(Coordinate C){
        return C;
    }
    void show(){cout<<x<<" "<<y<<" "<<z;}
};

int main()
{
    Coordinate c1,c2,c3;
    c1.set(3,4,5);
    c3.set(6,7,8);
    c2=(c1,c3);
    c2.show();
}*/

/*9.Create an Integer class that contains int x as an instance variable
    x as an insatance variable and overload casting int() operator that will type cast
    your Integer class object to int data type.
class integer {
    private:
    int x;
    public:
    integer(){}
    integer(int a){cout<<"PC CALLED\n";x=a;}
    operator int()
    {
        return x;
    }
    void show(){cout<<x<<endl;}
};

int main()
{
    int x=10;
    integer i=20;
    x=i;
    i.show();
}/*

/*10. Create a Distance class having 2 instance variable feet and inches. Also Create default constructor
and parameterized constructor takes 2 variables. Now Overload () fucntion call operator that takes 3 arguments 
a,b and c and set feet = a+c+5 and inches = a+b+15.
class Distance{
    int feet,inches;
    public:
    Distance(){}
    Distance(int f, int i){
        feet=f;
        inches=i;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet=a+c+15;
        d.inches=a+b+5;
        return d;
    }
    void show(){cout<<" Feet "<<feet<<" Inches "<<inches<<endl;}
};
int main()
{
    Distance d2,d(10,2);
    d.show();
    d2=d(10,20,30);
    d.show();
    d2.show();
    return 0;
}*/

/*11.Create a class Marks that have one member variable marks and one member
fucntion that will print marks. We know that we can access member functions 
using (.) dot operator. Now you need to overload (->) arrow operator to access that function.
class marks{
    int mark;
    public:
    void show(){
        cout<<mark<<endl;
    }
    marks(int x){mark=x;}
    marks(){}
    marks *operator->(){
        return this;    
    }
};
int main()
{
    marks m1(10);
    m1.show();
    m1->show();
}*/

