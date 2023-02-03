#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

/*1.
class FLOAT{
    float x;
    public:
    FLOAT(){}
    FLOAT(float n){x=n;}
    void setdata(float f){x=f;}
    float getdata(){return x;}
    float operator+(FLOAT);
    float operator-(FLOAT);
    float operator*(FLOAT);
    float operator/(FLOAT);
};
float FLOAT::operator+(FLOAT f)
{
    float temp;
    temp=f.x;
    return (this->x+temp);
}
float FLOAT :: operator-(FLOAT f)
{
    float temp;
    temp=f.x;
    return (this->x-temp);
}
float FLOAT::operator*(FLOAT f)
{
    float temp;
    temp=f.x;
    return (this->x*temp);
}
float FLOAT::operator/(FLOAT f)
{
    float temp;
    temp=f.x;
    return (this->x/temp);
}
int main()
{
    FLOAT f1;
    FLOAT f2;
    FLOAT f3;
    f1.setdata(10);
    f2.setdata(20);
    f3=f1+f2;
    cout<<f3.getdata();
    return 0;
}*/

/*2.
class Rectangle{
    float l,b;
    public:
    Rectangle(int len, int wid){l=len;b=wid;}
    Rectangle(double len, double wid){l=len;b=wid;}
    Rectangle(int len,double wid){l=len;b=wid;}
    Rectangle(double len,int wid){l=len;b=wid;}
    void display(){cout<<l<<endl<<b;}
    double area(){return l*b;}
};
int main()
{
    Rectangle r1(15.12,25.2);
    cout<<r1.area();
}*/

/*3.
class Animals{
    private:
    string sound;
    public:
    void set_sound(string sound){this->sound=sound;}
    string Sound(){return sound;}
};
class Dog:public Animals{
    private:
    string dog_sound;
    public:
    string Sound(){return dog_sound;}
    void set_sound(string sound){this->dog_sound=sound;}
};
int main()
{
    Animals Cat,d1;
    Cat.set_sound("MEOU");
    cout<<Cat.Sound()<<endl;
    d1.set_sound("Bark");
    cout<<d1.Sound()<<endl;
}
*/

/*4.
class Addition{
    public:
    int add(int x, int y,int z=0){cout<<"1st"<<endl;return x+y+z;}
    double add(double x, double y,double z=0){cout<<"2nd"<<endl;return x+y+z;}
    
    double add(int x, int y, double z=0){cout<<"3rd"<<endl;return x+y+z;}
    double add(int x, double y, int z=0){cout<<"4th"<<endl;return x+y+z;}
    double add(double x, int y, int z=0){cout<<"5th"<<endl;return x+y+z;}

    double add(double x, double y, int z=0){cout<<"6th"<<endl;return x+y+z;}
    double add(double x, int y, double z=0){cout<<"7th"<<endl;return x+y+z;}
    double add(int x, double y, double z=0){cout<<"8th"<<endl;return x+y+z;}


};
int main()
{
    Addition a1;
    cout<<a1.add(10,24.1,15.4);
}
*/

/*5.
class A{
    double y;
    public:
    A(){cout<<"ZERO\n";}
    A(double n){cout<<"FIRST"<<endl;y=n;}
};
class B:public A{
    double w;
    public:
    B():A(){cout<<"Third\n";}
    B(double n,double o):A(o){cout<<"FOURTH\n";w=n;}
};
int main()
{
    B b1(20,30);
}*/

/*6.
class A{
    public:
    A(){cout<<"First Constructor\n";}
    ~A(){cout<<"First Destructor\n";}
};
class B:public A{
    public:
    B():A(){cout<<"Second Constructor\n";}
    ~B(){cout<<"Second Destrucot\n";}

};
class C:public B{
    public:
    C():B(){cout<<"Third Constructor\n";}
    ~C(){cout<<"Third Destructor\n";}

};
int main()
{
    C c1;
}*/

/*7.
class A{
    int id;
    public:
    A(){cout<<"First Constructor\n";}
    A(int x){id=x;cout<<"First Initializer\n";}
    int getid(){return id;}
};
class B:public A{
    string name;
    public:
    B():A(){cout<<"Second Constructor\n";}
    B(string n,int x):A(x){
        name=n;
        cout<<"Second Initializer\n";}
    void display()
    {
        cout<<name<<getid();
    }
};
int main()
{
    B b1("Salman Khan\n",54);
    b1.display();
}*/

/*8.
class Factorial{
    int n,fact=1;
    public:
    Factorial(int x){n=x;}
    Factorial(Factorial &f){n=f.n;}
    void calculate()
    {
        for(int i=1;i<=n;i++)
            fact=fact*i;
    }
    void display(){cout<<fact;}
};
int main()
{
    Factorial f(5);
    f.calculate();
    f.display();

}*/

/*9.
class Area{
    private:
    float areaofRectanlge,areaofCircle,areaofTriangle;
    public:
    Area(){}
    Area(float l,float b){areaofRectanlge=(l*b);}
    Area(float r){areaofCircle=(3.14*r*r);}
    Area(int a,int b,int c){
        float s=(a+b+c)/2.0;
        areaofTriangle=sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void displaytri()
    {
        if(areaofTriangle==0)
        cout<<"Invalid Triangle\n";
        else
        cout<<"Area of Triangle "<<areaofTriangle<<endl;
    }
    void displayrec(){cout<<"Area of Rectangle "<<areaofRectanlge<<endl;}
    void displaycir(){cout<<"Area of Circle "<<areaofCircle<<endl;}
};
int main()
{
    while(true)
    {
        cout<<"1.Calculate the area of Triangle."<<endl;
        cout<<"2.Calculate the area of Rectangle."<<endl;
        cout<<"3.Calculate the area of Circle."<<endl;
        cout<<"4.Exit"<<endl;
        int choice;
        cin>>choice;
        system("cls");
        if(choice==1)
        {
            cout<<"Enter the Value of edges :";
            int a,b,c;
            cin>>a>>b>>c;
            Area a1(a,b,c);
            a1.displaytri();
        }
        else if(choice==2)
        {
            cout<<"Enter the value of length and width :";
            int x,y;
            cin>>x>>y;
            Area a2(x,y);
            a2.displayrec();
        }
        else if(choice==3)
        {
            cout<<"Enter Radius of Circle :";
            float r;
            cin>>r;
            Area a3(r);
            a3.displaycir();
        }
        else if(choice==4)
        return 0;
        else
        cout<<"Invalid Input";
    }
    return 0;
}
*/

/*10.
class Player{
    private:
    int *m1,m,player_no,matches,goals;
    char name[20];
    public:
    Player()
    {
        cout<<"\nEnter Player no. ";
        cin>>player_no;
        cout<<"\nEnter Player Name ";
        fflush(stdin);
        fgets(name,20,stdin);
        cout<<"\nEnter No. of Matches ";
        cin>>m;
        m1 = new int[m];
        for(int i=0;i<m;i++)
        {
            cout<<"\nEnter Goals in "<<i+1<<"matches ";
            cin>>m1[i];
        }
    }
    void display()
    {
        cout<<"\nPlayer No.   "<<player_no<<endl;
        cout<<"\nPlayer Name. "<<name<<endl;
        for(int i=0; i<m; i++)
        {
            cout<<"\nGoals in match "<<i+1<<" : "<<m1[i];
        }
    }
};

int main()
{
    Player p1;
    p1.display();
}*/