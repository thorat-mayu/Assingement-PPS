// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class student
{
   public:
   string name;
   int rollnumber;
   int age;
   
   void displayinfo()
{
    cout <<"Name:"<<name<<endl;
    cout<<"Roll number:"<<rollnumber <<endl;
    cout <<"Age:"<<age<<endl;
}
};
int main()
{
    student s1;
    student s2;
    s1.name ="Mayuri";
    s1.rollnumber=30;
    s1.age=20;
    
    s2.name ="Shantanu";
    s2.rollnumber=37;
    s2.age=25;
    
    cout <<"s1 information:"<<endl;
    s1.displayinfo ();
    cout <<"s2 information:"<<endl;
    s2.displayinfo ();

    return 0;
}