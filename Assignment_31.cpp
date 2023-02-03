#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

/*1. 
class Person{
    char name[20];
    int age;
    public:
    void setname(char *p){strcpy(name,p);}
    void setage(int x){age=x;}
    char * getname(){return name;}
    int getage(){return age;}
};

class Employee:public Person{
    int Empid;
    int salary;
    public:
    void setEmpid(int x){Empid=x;}
    void setSalary(int s){salary=s;}
    int getEmpid(){return Empid;}
    int getSalary(){return salary;}
    void display()
    {
        cout<<getname()<<endl<<getage()<<endl<<getEmpid()<<endl<<getSalary();
    }
};

int main()
{
    Employee e1;
    e1.setname("AAFIYA AHMAD");
    e1.setage(1);
    e1.setEmpid(22);
    e1.setSalary(220000);
    e1.display();
}*/

/*2
class numbers{
    protected:
    int x,y,z;
    public:
    void input(){cin>>x>>y;}
    void add(){z=x+y;}
};
class sum:public numbers{
    public:
    void show(){cout<<z;}
};
int main()
{
    sum s1;
    s1.input();
    s1.add();
    s1.show();
    return 0;
}*/

/*3
class marks{
    protected:
    int maths,english,hindi;
    public:
    void input(){cin>>maths>>english>>hindi;}
};
class total:public marks{
    protected:
    int sum;
    public:
    void totalmarks(){sum=maths+english+hindi;}
};
class percentage:public total{
    public:
    void per(){cout<<sum/3;}
};
int main()
{
    percentage p1;
    p1.input();
    p1.totalmarks();
    p1.per();
}*/

/*4
class person{
    protected:
    char name[20],address[50],phone[10];
};
class Employee:public person{
    protected:
    int eno;
    char ename[20];
};
class Manager:public Employee{
    private:
    char designation[20],department_name[30];
    int basic_salary;
    public:
    void input()
    {
        cout<<"\nEnter Employee No. : ";
        cin>>eno;
        cout<<"\nEnter Name : ";
        fflush(stdin);
        fgets(name,20,stdin);
        cout<<"\nEnter Address : ";
        fflush(stdin);
        fgets(address,50,stdin);
        cout<<"\nEnter Phone Number : ";
        fflush(stdin);
        fgets(phone,10,stdin);
        cout<<"\nEnter Designation : ";
        fflush(stdin);
        fgets(designation,20,stdin);
        cout<<"\nEnter Department Name : ";
        fflush(stdin);
        fgets(department_name,30,stdin);
        cout<<"\nEnter Basic Salary : ";
        cin>>basic_salary;
    }
    int getsalary(){return basic_salary;}
    void display()
    {
        cout<<"\n\nEmployee No. : "<<eno;
        cout<<"\n\nName : "<<name;
        cout<<"\nAddress : "<<address;
        cout<<"\nPhone : "<<phone;
        cout<<"\n\nDesignation : "<<designation;
        cout<<"\nDepartment : "<<department_name;
        cout<<"\nBasic Salary : "<<basic_salary;
    }
};
Manager* highest_Salary(Manager *m,int n)
{
    int i,peakAmount=m[0].getsalary();
    Manager *first = NULL;
    for(i=1;i<n;i++)
    {

        if(m[i].getsalary()>peakAmount)
        {
            first=&m[i];
        }
    }
        return first;
}

Manager* highest_Salary(Manager *,int);
int main()
{
    int i,nManagers;
    cout<<"How Many Managers you want to Enter? : ";
    scanf("%d",&nManagers);
    Manager *m= new Manager[nManagers];
    for(i=0;i<nManagers;i++)
    {
        cout<<"\nEnter Manager "<<i+1<<" details.";
        cout<<"\n------------------------------------";
        m[i].input();
    }
    Manager *highest=NULL;
    highest=highest_Salary(&m[0],nManagers);
    cout<<highest->getsalary();
    highest->display();
    delete m;
    return 0;
}*/

/*5.
class Item{
    protected:
    int item_no,price;
    char name[20];
};
class Discounted_Item:public Item{
    protected:
    float discount_Percent,discounted_Price,discount;
    public:
    void input()
    {
        cout<<"\nEnter Item Name : ";
        fflush(stdin);
        fgets(name,20,stdin);
        cout<<"\nEnter Item No. : ";
        cin>>item_no;
        cout<<"\nEnter Item Price : ";
        cin>>price;
        cout<<"\nEnter Discount Percent : ";
        cin>>discount_Percent;
        discounted_Price=price-(discount_Percent/100)*price;
        discount=(discount_Percent/100)*price;
        cout<<"\n------------------------------------/n";

    }
    void display()
    {
        cout<<"\nItem Name : "<<name;
        cout<<"\nItem No. : "<<item_no;
        cout<<"\nItem Price : "<<price;
        cout<<"\nDiscounted Percent :"<<discount_Percent;
        cout<<"\nDiscounted Price :"<<discounted_Price;
        cout<<"\n------------------------------------\n";
    }
    friend void TotalPrice(Discounted_Item*,int);
};
void TotalPrice(Discounted_Item *d,int n)
{
    int i;
    float total_Price=0,total_Discount=0;
    for(i=0;i<n;i++)
    {
        total_Price=total_Price+d[i].price;
        total_Discount=total_Discount+d[i].discount;;
    }
    cout<<"\nTotal Price : "<<total_Price;
    cout<<"\nTotal Discount : "<<total_Discount;
}
int main()
{
    int i,n;
    cout<<"How Many Items You Want to enter? : ";
    cin>>n;
    Discounted_Item *D1=new Discounted_Item[n];
    for(i=0;i<n;i++)
    {
        D1[i].input();
    }
    for(i=0;i<n;i++)
    {
        D1[i].display();
    }
    TotalPrice(&D1[0],n);
    return 0;

}*/

/*6.
class RA;
class SJ{
    private:
    int s;
    public:
    SJ(int a){s=a;}
    void show(){cout<<s<<endl;}
    int gets(){return s;}
    friend void fun(SJ&,RA&);
};
class RA{
    private:
    int r;
    public:
    RA(int a){r=a;}
    int getr(){return r;}
    void show(){cout<<r;}
    friend void fun(SJ&,RA&);
};
void fun(SJ &sj,RA &ra)
{
    int temp=sj.gets();
    sj=ra.getr();
    ra=temp;

}
int main()
{
    SJ s1=1;
    RA r1=3;
    fun(s1,r1);
    s1.show();
    r1.show();
}*/

/*7.
class Employee{
    public:
    int emp_code;
    char name[20];
        void get()
        {
            cout<<"Employee Number : ";
            cin>>emp_code;
            cout<<"Enter Name : ";
            fflush(stdin);
            fgets(name,20,stdin);
        }
};

class FullTime:public Employee{
    private:
    float daily_rate;
    int no_of_days,salary;
    public:
    void input1()
    {
        cout<<"Enter Daily Rate : ";
        cin>>daily_rate;
        cout<<"Enter No. of Days : ";
        cin>>no_of_days;
        salary=daily_rate*no_of_days*30;
    }

    void show1()
    {
        cout<<"------------------------------------\n";
        cout<<"\nEmployee Number : "<<emp_code;
        cout<<"\nEmplyee Name : "<<name;
        cout<<"\nSalary is :"<<salary;
        cout<<"\nStatus : Full Time\n";
        cout<<"------------------------------------\n";
    }
};

class PartTime:public Employee{
    protected:
    int working_hours,hourly_rate,salary;
    public:
    
    void input2()
    {
        cout<<"Enter Hourly Rate :";
        cin>>hourly_rate;
        cout<<"Enter Working Hours :";
        cin>>working_hours;
        salary = working_hours*hourly_rate*30;
    }
    
    void show2()
    {
        cout<<"------------------------------------\n";
        cout<<"\nEmployee Number : "<<emp_code;
        cout<<"\nEmplyee Name : "<<name;
        cout<<"\nSalary is :"<<salary;
        cout<<"\nStatus : Part Time\n";
        cout<<"------------------------------------\n";

    }

};



int main()
{
    int var=0;
    int var1=0;
    FullTime f[5];
    PartTime p[5];
    int c,total_Employees=0;
        do
        {
            cout<<"1.Enter Record\n";
            cout<<"2.Display Record\n";
            cout<<"3.Search Record\n";
            cout<<"4.Quit\n";
            cout<<"Enter Your Choice : ";
            cin>>c;
            switch(c)
        {
            case 1:
                int y;
                    cout<<"1. Full Time\n";
                    cout<<"2. Part Time\n";
                    cout<<"3. Previous Menu\n";
                    cout<<"\n Enter : ";
                    cin>>y;
                switch(y)
                {
                    case 1:
                            int n;
                            cout<<"How Many Employees You want to add\n";
                            cin>>n;
                        for(int j=0;j<n;j++)
                            {
                                f[j].get();
                                f[j].input1();
                                var++;
                            }
                        break;
                    case 2:
                        int a;
                        cout<<"How Many Employees You want to add\n";
                        cin>>n;              
                        for(int j=0;j<a;j++)
                        {
                            p[j].get();
                            p[j].input2();
                            var1++;
                        }
                        break;
                    default:
                        cout<<"Press 1 or 2\n";
                        break;
                }
            case 2:
                for(int j=0;j<var;j++)
                f[j].show1();
                for(int j=0;j<var1;j++)
                p[j].show2();
                break;
            
            case 3:
                int flag=0,i=0,n;
                cout<<"Enter Employee Code\n";
                cin>>n;
                while(1)
            {
                if(f[i].emp_code==n)
                {   
                    f[i].show1();
                    flag=1;
                    break;
                }
                else if(p[i].emp_code=n)
                {
                    p[i].show2();
                    flag=1;
                    break;
                }
                if(flag==1)
                break;
                i++;
            }
            break;
        }
    }while(c!=4);
return 0;
}*/

/*8.
class Customer{
    char name[20];
    long long phone;
    public:
        inputc()
        {
            cout<<"\nEnter Customer Name      :\n";
            cin>>name;
            cout<<"\nEnter Customer Mobile No. :\n";
            cin>>phone;
        }
        void showc()
        {
            cout<<"\nCustomer's Details\n";
            cout<<"\n--------------------------------\n";
            cout<<"\nCustomer Name     : "<<name;
            cout<<"\nCustomer Phone    : "<<phone;
        }
};
class Depositor:public Customer{
    int acno,balance;
    public:
    void inputd()
    {
            cout<<"\nEnter Customer A/C No.   :\n";
            cin>>acno;
            cout<<"\nEnter Customer Balance.   :\n";
            cin>>balance;
    }
    void showd()
    {
        cout<<"\nCustomer's Details\n";
        cout<<"\n--------------------------------\n";
        cout<<"\nCustomer A/C No.     : "<<acno;
        cout<<"\nCustomer Balance     : "<<balance;
    }
};
class Borrower:public Depositor{
    int loanno,loan_amt;
    public:
    void inputb()
    {
            cout<<"\nEnter Loan No.      :\n";
            cin>>loanno;
            cout<<"\nEnter Loan Amount.   :\n";
            cin>>loan_amt;        
            cout<<"\n-----------------------\n";
    }
    void showb()
    {
        cout<<"\nLoan No      :"<<loanno;
        cout<<"\nLoan Amount  :"<<loan_amt;
        cout<<"\n-----------------------\n";
    }
};

int main()
{
    int n;
    cout<<"\nEnter No. of Cutomer Details you want to :";
    cin>>n;
    Borrower *b1=new Borrower[n];
    for(int i=0;i<n;i++)
    {
        b1[i].inputc();
        b1[i].inputb();
        b1[i].inputd();
    }
    for(int i=0;i<n;i++)
    {
        b1[i].showc();
        b1[i].showd();
        b1[i].showb();
    }
    return 0;
}*/

/*9.
class Student{
    public:
    int id;
    char name[20];
    void inputdetails()
    {
        cout<<"\n----------------------------\n";
        cout<<"\nEnter Roll No         : ";
        cin>>id;
        cout<<"\nEnter Name of Student : ";
        fflush(stdin);
        fgets(name,20,stdin);
    }
};

class StudentExam:public Student{
    int m[6],summark=0;
    public:
    void inputM()
    {
        int i;
        for(i=0;i<6;i++)
        {
            cout<<"\nEnter Marks for Subject "<<i+1<<"  :";
            cin>>m[i];
        }
    }
    int totalmarks()
    {
        for(int i=0;i<6;i++)
        summark+=m[i];   
        return summark;
    }

    int* getmarks() {return m;}

    int getsum(){return summark;}
};

class StudentResult:public StudentExam{
    float percentage;
    public:
    void calcper()
    {
        percentage=(totalmarks()/6);
    }
    void showStatus()
    {
        cout<<"\n-----------------------------\n";
        cout<<"*********Student Marklist******\n";
        cout<<"-----------------------------\n";
        cout<<"Roll No.          : "<<id<<endl;
        cout<<"\nStudent's Name  : "<<name<<endl;
        for(int i=0;i<6;i++)
        {
            cout<<"Marks for Subject "<<i+1<<"  :"<<*(getmarks()+i)<<endl;
        }
        cout<<"\nTotal Percentage  : "<<percentage<<endl;
    }
};

int main()
{
    StudentResult s;
    s.inputdetails();
    s.inputM();
    s.calcper();
    s.showStatus();
    
}*/

/*10.
class worker{
    protected:
    int code;
    char name[20];
    float salary;
    public:
    worker(){}
    worker(int c,char *n,float s)
    {
        code=c;
        strcpy(name,n);
        salary=s;
    }
    void putw()
    {
        cout<<"\n Code        : "<<code;
        cout<<"\n Name        : "<<name;
        cout<<"\n Salary      : "<<salary;
    }
};
class officer{
    protected:
    float DA,HRA;
    public:
    officer(){}
    officer(float d, float h){DA=d;HRA=h;}
    void puto()
    {
        cout<<"\n DA         : "<<DA;
        cout<<"\n HRA        : "<<HRA;
    }
};
class manager:public worker,public officer{
    private:
    float TA,grossSal;
    public:
    manager(){}
    manager(int c, char *n, float s, float d, float h):worker(c,n,s),officer(d,h)
    {}
    void putm()
    {
        putw();
        puto();
        TA=0.10*salary;
        cout<<"\n TA        : "<<TA;
        grossSal=DA+HRA+TA+salary;
        cout<<"\n Gross Salary  : "<<grossSal;
    }
};
int main()
{
    int cnt,i;
    cout<<"\nEnter Manager Count    : ";
    cin>>cnt;
    manager *m;
    m=new manager[cnt];
    for(i=0;i<cnt;i++)
    {
        cout<<"\n Enter Worker information for "<<i+1<<"\n";
        cout<<"\n-----------------------------------------------";
        cout<<"\n Enter Code    : ";
        int c;
        cin>>c;
        cout<<"\n Enter Name    : ";
        char n[200];
        fflush(stdin);
        fgets(n,200,stdin);
        cout<<"\n Enter Salary  : ";
        float s;
        cin>>s;
        cout<<"\n Enter DA      : ";
        int d;
        cin>>d;
        cout<<"\n Enter HRA     : ";
        float h;
        cin>>h;
        m[i]=manager(c,n,s,d,h);
    }
    for(i=0;i<cnt;i++)
    {
        cout<<"\n---------------------------------------------";
        cout<<"\n Manager Information ";
        cout<<"\n---------------------------------------------";
        m[i].putm();
    }
    return 0;
}*/
