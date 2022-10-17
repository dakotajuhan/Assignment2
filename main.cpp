#include <iostream>
#include <bits/stdc++.h>


using namespace std;

class Employee
{
    public:
    virtual void getData()
    {
        
    }
    virtual void vacation()
    {
        
    }
    
    virtual void weeklySalary()
    {
        
    }
    virtual void healthInsurance()
    {
        
    }
};
class Professional:public Employee{
  
  public:
  int daysWorked;
  int dailyWage = 1000;
  void getData()
  {
      cout<<"Please enter the amount of days you have worked this week: "<<endl;
      cin>>daysWorked;
  }

  void healthInsurance()
  {
      //
  }
  void vacation()
  {
      if(daysWorked>=5)
      {
          cout<<"You get a vacation day  on saturday: "<<endl;
      }
      else
      {
          cout<<"You do not get a vacation day on Saturday: "<<endl;
      }
  }
  void  weeklySalary()
  {
    cout<<"Weekly salary is :"<<daysWorked*dailyWage<<endl;  
  }
    
};


class nonProfessional :public Employee{
    
     public:
     int hoursWorked;
     int hourSalary =100;
     void getData()
     {
         cout<<"Please enter the number of hours you have worked in a week: "<<endl;
         cin>>hoursWorked;
     }
  void vacation()
  {
     if(hoursWorked>=30)
      {
          cout<<"You are allowed a vacation day: "<<endl;
      }
      else
      {
          cout<<"You are not allowed a vacation day: "<<endl;
      } 
  }
  void healthInsurance()
  {
      // add custom data according to you
  }
  void weeklySalary()
  {
    cout<<"your weekly salary is: "<<hoursWorked*hourSalary<<endl;  
  }
};

int main()
{
Employee *e;
Professional p;

e=&p;
e->getData();
e->weeklySalary();
e->vacation();

nonProfessional np;
e=&np;
e->getData();
e->weeklySalary();
e->vacation();

    return 0;
}