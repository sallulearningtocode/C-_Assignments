#include <iostream>
#include <string.h>
using namespace std;

/*1.Define a class Complex with appropriate instance variables and functions.
Define Following operators in the class.
a. +
b. -
c. *
d. ==

class Complex{
    private:
    int real,imag;
    public:
    void setData(int x,int y){real=x;imag=y;}
    void showData(){cout<<endl<<"Real  "<<real<<" Imag  "<<imag;}
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
        Complex operator-(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }
        Complex operator*(Complex c){
            Complex temp;
            temp.real=real*c.real;
            temp.imag=imag*c.imag;
            return temp;
        }
        bool operator==(Complex c){
            bool temp;
            if(real==c.real&&imag==c.imag)
                temp=true;
            else
            temp=false;
            return temp;
        }
};

int main()
{
    Complex c1,c3,c2;
    bool t;
    // c1.setData(5,4);
    // c2.setData(3,4);
    // c1.showData();
    // c2.showData();
    // c3=c1-c2;
    // t=c1==c2;
    // cout<<endl<<t;
    // c3.showData();
}*/

/*2.Write a program to overload unary operators that is increment and decrement.
class Salary{
    private:
    int BasicSalary;
    int epf;
    int Medical;
    public:

    void operator++(){
        BasicSalary=BasicSalary+3000;
        epf=epf+1000;
        Medical=Medical+1000;
    }
        void operator++(int){
        BasicSalary=BasicSalary+3000;
        epf=epf+1000;
        Medical=Medical+1000;
    }
    void show(){cout<<BasicSalary+epf+Medical<<endl;}

    void set(int x,int y,int z){BasicSalary=x;epf=y;Medical=z;}

    void operator--(){
        epf=epf-1000;
        Medical=Medical-1000;
    }

    void operator--(int){
        epf=epf-1000;
        Medical=Medical-1000;
    }
};

int main()
{
    Salary s;
    s.set(18000,2645,1897);
    cout<<"Initial Salary"<<endl;
    s.show();
    cout<<"After  Increment"<<endl;
    ++s;
    s.show();
    cout<<"After Decrement"<<endl;
    --s;
    s.show();
    cout<<"After Increment"<<endl;
    s++;
    s.show();
    s++;
    cout<<"After Decrement"<<endl;
    s.show();
}*/

/*3.Write a C++ program to add two complex numbers using operators overloaded by a frined function.
class Complex{
    public:
    int real,imag;
    friend Complex operator+(Complex);
    void show(){cout<<"Real "<<real<<" Imag "<<imag<<endl;}
    void setdata(int x, int y){real=x;imag=y;}
};

Complex operator+(Complex c,Complex c1){
    Complex temp;
    temp.real=c.real+c1.real;
    temp.imag=c.imag+c1.imag;
    return temp;
}

int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.show();
}*/

/*4.Create Class Time which contains:
-Hours
-Minutes
-Seconds
Write a C++ program using operator overloading for the following:
1.== : To Check whether two times are the same or not.
2.>> : To accept the time.
3.<< : To display the time.

class Time{

    public:
    int h,m,s;

    int operator==(Time t){
        if(h==t.h&&m==t.m&&s==t.s)
        return 1;
        return 0;
    }

    friend istream& operator>>(istream&, Time&);
    friend ostream& operator<<(ostream&, Time);
};
istream& operator>>(istream &din, Time &t){
    cout<<"Enter Hours      :";
    cin>>t.h;
    cout<<"Enter Minutes    :";
    cin>>t.m;
    cout<<"Enter Seconds    :";
    cin>>t.s;
    return din;
}
ostream& operator<<(ostream &dout, Time t){
    cout<<"Hours    :   "<<t.h<<"\n";
    cout<<"Minutes  :   "<<t.m<<"\n";
    cout<<"Seconds  :   "<<t.s<<"\n";
    return dout;
}
int main()
{
    Time t1,t2;
    cout<<"Enter First TIme\n-------------------------\n";
    cin>>t1;
    cout<<"\nFirst Time\n";
    cout<<t1;
    cout<<"\nEnter Second TIme\n-------------------------\n";
    cin>>t2;
    cout<<"\nSecond TIme\n";
    cout<<t2;
    if((t1==t2))
    cout<<"\nTimes are Same";
    else
    cout<<"\nTimes are different";

}*/

/*5.Consider following Class Numbers
 Overload the operator unary minu(-) to negate the numbers.

class Number{
    public:
    int x,y,z;
    friend void operator-(Number&);
    void setdata(int a,int b,int c){
        x=a;y=b;z=c;
    }
    void show(){
        cout<<x<<"\n"<<y<<"\n"<<z;
    }
};
void operator-(Number &n)
    {
        n.x=-n.x;
        n.y=-n.y;
        n.z=-n.z;
    }

int main()
{
    Number n1;
    n1.setdata(10,20,30);
    -n1;
    n1.show();
}*/

/*6.Create a class Cstring to represent a string.
a) Overload the + opertor to canatenate two strings.
b) == to compare 2 Strings.

class Cstring{
    char s[50];
    public:
    void input()
    {
        fflush(stdin);
        fgets(s,50,stdin);
    }

    void display(){cout<<s;}
    void operator+(Cstring s1){strcat(s,s1.s);}

    int operator==(Cstring s1)
    {
        int j,i,c1=0,c2=0;
        for(i=0;s[i];i++);
        cout<<i<<" ";
        for(j=0;s1.s[j];j++);
        cout<<j<<endl;
        if(i==j)
        {
            for(j=0;s[j];j++)
            {
                if(s[j]==s1.s[j])
                c1++;
            }
        }
        cout<<c1;
            if(i==j)
            return 1;
            return 0;
    }
};

int main()
{
   int a;
    Cstring s1,s2;
    s1.input();
    s2.input();
    s1+s2;
    s1.display();
    a=(s1==s2);
    if(a)
    cout<<"Strings Are Same";
    else
    cout<<"Strings are Different";
}*/

/*7.Define a C++ class Fraction
    Overload the following operators as member or friend:
    a) Unary ++(pre and post both)
    b) Overload as friend functions: operators << and >>.

class Fraction
{
public:
    long num, den;
    void fraction(long n = 0, long d = 0)
    {num = n;den = d;}
    friend Fraction operator++(Fraction &);
    friend Fraction operator++(Fraction &, int);
    void show() { cout << num << "/" << den; }
    friend istream &operator>>(istream &, Fraction &);
    friend ostream &operator<<(ostream &, Fraction);
    void operator=(Fraction f)
    {num = f.num;den = f.den;}
};
Fraction operator++(Fraction &f)
{
    ++f.num;
    ++f.den;
    return f;
}
Fraction operator++(Fraction &f, int)
{
    Fraction temp;
    temp.num=f.num;
    temp.den=f.den;
    f.num++;f.den++;
    return temp;
}

istream &operator>>(istream &din, Fraction &f)
{
    cout << "\n\nNumerator    :  ";
    cin >> f.num;
    cout << "\nDenominator  :  ";
    cin >> f.den;
    return din;
}
ostream &operator<<(ostream &dout, Fraction f)
{
    cout << f.num << "/" << f.den << endl;
    return dout;
}
int main()
{
    Fraction f1, f2;
    f1.fraction(0, 0);
    f2.fraction(0, 0);
    cout << "f1   :  ";
    cout << f1;
    cout << "\nf2   :  ";
    cout << f2;
    cout << "\nEnter 1st Fraction Value";
    cin >> f1;
    f1++; // Post Increment in f1
    cout << "f1++ : " << f1 << endl;
    ++f1; // Pre Increment in f1
    cout << "++f1 : " << f1;
    cout << "\nEnter 2nd Fraction Value";
    cin >> f2;
    cout<<"\n\nf2 = ++f1\n";
    f2 = ++f1;  //Pre-Increment in f1 and assign in f2
    cout << "f1   :   " << f1 << endl;
    cout << "f2   :   " << f2;
    cout<<"\n\nf2 = f1++\n";
    f2 = f1++;  //Post-Increment in f1 and assign in f2
    cout << "f1   :   " << f1 << endl;
    cout << "f2   :   " << f2;
}*/

/*8.Consider a Class Matrix
    Overload the -(Unary) should negate the numbers stored in the object.
class Matrix
{
    int a[3][3];

public:
    void input()
    {
        cout<<"Enter Matrix Element (3 X 3) :\n";
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cin >> a[i][j];
    }
    void show()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << a[i][j] << "    ";
            cout<<"\n";
        }
    }
    void operator-(){
        int i,j;
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j]=-a[i][j];
    }
};

int main()
{
    Matrix m1;
    m1.input();
    cout<<"\nMatrix is :\n\n";
    m1.show();
    -m1;
    cout<<"\n\nMatrix is :\n\n";
    m1.show();
}*/

/*9.Consider the following class mystring
    Overload the ! operator to reverse the case of each alphabet in the string
class mystring{
    char str[100];
    public:
    void operator!(){
        int i;
        for(i=0;str[i];i++)
        {
            if(str[i]>64&&str[i]<91)
            str[i]=str[i]+32;
            else if(str[i]>96&&str[i]<123)
            str[i]=str[i]-32;
        }
    }
    void input(){fgets(str,100,stdin);}
    void show(){cout<<str;}
};

int main()
{
    mystring s1;
    s1.input();
    !s1;
    s1.show();
}*/

/*10.Let m1 and m3 are two matrices. Find out m3=m1+m2 (use operator overloaing).
class Matrix
{
    int a[3][3];

public:
    void input()
    {
        cout<<"Enter Matrix Element (3 X 3) :\n";
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cin >> a[i][j];
    }
    void show()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << a[i][j] << "    ";
            cout<<"\n";
        }
    }
    Matrix operator+(Matrix m){
        int i,j;
        Matrix temp;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            temp.a[i][j]=m.a[i][j]+a[i][j];
        }
        return temp;
    }
    void operator=(Matrix m){
        int i,j;
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            a[i][j]=m.a[i][j];
        }
    }
};

int main()
{
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    cout<<"First Matrix : \n\n";
    m1.show();
    cout<<"Second Matrix :\n\n";
    m2.show();
    m3=m1+m2;
    cout<<"\nAddition of Matrix\n";
    m3.show();
}*/

