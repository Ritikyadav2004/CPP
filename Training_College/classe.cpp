/*   
WRITE A CPP CODE IN WHICH ASK THE NAME OF THE USER AND  BASIC SALARY.
CALCULATE THE GROSS SALARY OF THIS USER IF HRA(HOUSE RENT ALLOWANCE) 
IS 5% OF THE BASIC SALARY.
AND DA(DAERNESS ALLOWNCE) IS 10% OF THE BASIC SALARY.
WE HAVE TO PRINT THE NAME OF THE PERSON IN ONE LINE AND
HIS/HER GROSS SALARY IN NEXT LINE
*/
#include<iostream>
using namespace std;
// class employee
// {
//     public:
//     string name;
//     float salary;
//     float gsalary;
//     public:
//     int getdata()
//     {    
//         cout<<"Enter Your Name :";
//         cin>>name;
//         cout<<"Enter Your basic salary :";
//         cin>>salary;
//     }
//     int showdata()
//     {
//        cout<<name<<endl;
//        cout<<salary;
//     }

// };
//     int main()
//     {
//         employee ep;
//         cout<<ep.getdata();
//         cout<<ep.showdata();
//         return 0;

//     }

int main()
{
    string name;
    double  basic_salary;
    double  gross_salary;
    // cout<<"Enter Your Name:";
    //enter name
    cin>>name;
    // cout<<"Enter Your Basic salary:";
    //enter sadouble
    cin>>basic_salary;
    //calculating gross salsary
    gross_salary=basic_salary*0.15+basic_salary;
    cout<<name<<endl;
    cout<<gross_salary;
    return 0;
    
}
