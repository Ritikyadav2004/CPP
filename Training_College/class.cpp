#include<iostream>
using namespace std;
class car
{
    private:
    string model;
    string fuel;
    int speed ; //kmph
    public:
    car(string mod,string die,int spee)
    {
        model=mod;
        fuel=die;
        if(spee>0)
        speed=spee;
        else
        speed=0;
    } 
    //to dispaly all the data at once
    void displayAll()
    {
        cout<<"Model :"<<model<<endl;
        cout<<"Fuel  :"<<fuel<<endl;
        cout<<"Speed :"<<speed<<endl;
    } 
    //to dispaly only speed only
    int getspeed()
    {
        return speed;
    }
    string getmodel()
    {
        return model;

    }
   string getfuel()
   {
    return fuel;
   }
};
int main()
{
    car c1("Rolls Roces","Diesel",100);
    car c2("Lamborgini","Diesel",120);
    c1.displayAll();
    c2.displayAll();
  //  cout<<c1.getspeed();
//   cout<<c1.getmodel()<<endl;
//   cout<<c2.getmodel()<<endl;
cout<<endl;
cout<<c2.getspeed();

}