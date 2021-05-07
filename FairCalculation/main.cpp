#include <iostream>
using namespace std;

class farebill
{
    int distance;
    int time;
    float wt;
    float ut;
    int bill;
    int destination;
    int choice;
public:
    farebill();
    float cng();
    float bus();
    float uber();


};

farebill::farebill()
{
    cout<< "Enter Destination: "<<endl<<"1.Malibag"<<endl<<"2.Dhanmondi"<<endl<<"3.uttara"<<endl;
    cin>>choice;
    cout<<"Give distance of the destination:"<<endl;
    cin>>distance;

    cout<<"Enter your travel time:"<<endl<<"1.7AM"<<endl<<"2.2PM"<<endl<<"3.7PM"<<endl;
    cin>>time;


    if (destination==1)
    {
        cout<<"Enter the distance :"<<endl;
        cin>>distance;
        wt=10;
        ut=80;

    }

    else if (destination==2)
      {
          cout<<"Enter the distance:"<<endl;
          cin>>distance;
          wt=20;
          ut=70;

      }

      else if (destination==3)
      {
          cout<<"Enter the distance:"<<endl;
          cin>>distance;
          wt=20;
          ut=120;
      }
      else
        cout<<"Error"<<endl;

    if(time==1)
    {
        wt=10;
        ut=60;
    }

    else if(time==2)
    {
        wt=20;
        ut=90;
    }

    else if(time==3)
    {
        wt=30;
        ut=120;
    }

    else
        cout<<"Error!"<<endl;

}

float farebill::cng()
{


    bill=(40+((distance-2)*12)+(wt*2));

    cout<<"CNG fair: "<<bill<<endl;
}

float farebill::bus()
{

    bill=(distance*2);
    cout<<"BUS fair :"<<bill<<endl;

}

float farebill::uber()
{


    bill=(100+(distance*20)+(ut*2.5));
    cout<<"UBER fair :"<<bill<<endl;


}


int main()
{
    farebill user;
    user.bus();
    user.cng();
    user.uber();


    return 0;
}
