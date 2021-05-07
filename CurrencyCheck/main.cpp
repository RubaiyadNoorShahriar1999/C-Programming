#include <iostream>

using namespace std;

class currency
{
    float result, usd, euro;

public:
    float divert (float amount,float rate);
};

float currency::divert(float amount,float rate)
{
    result = amount/rate;
    usd = amount/85;
    euro = amount/96;

    cout<<"In USD: "<<usd<<endl;
    cout<<"In Euro: "<<euro<<endl;

    cout<<"Converted Amount: "<<result<<endl<<endl;

    return result;
}

int main()
{
    currency user;

    int choice;
    float bdt;

    cout<<"Enter Amount  in BDT: ";
    cin>> bdt;

    cout<<"Choice a country: "<<endl<<"1. Malaysian Ringgit"<<endl<<"2. USD"<<endl<<"3.indian Rupee"<<endl<<"4. Singapore Dollar"<<endl<<"5. Euro"<<endl<<"6. British"<<endl<<"7.japanese yen"<<endl<<"8.Korean won"<<endl<<"9.Swiss franc"<<endl<<"10.Norwegian Krone"<<endl<<"Choice: ";
    cin>>choice;
    cout<<endl<<endl;


    if (choice==1)
        user.divert(bdt,20);
    else if (choice==2)
        user.divert(bdt,85);
    else if (choice==3)
        user.divert(bdt,1.5);
    else if (choice==4)
        user.divert(bdt,62);
    else if (choice==5)
        user.divert(bdt,94);
    else if (choice==6)
        user.divert(bdt,84);
    else if (choice==7)
        user.divert(bdt,0.74);
    else if (choice==8)
        user.divert(bdt,0.94);
    else if (choice==9)
        user.divert(bdt,0.045);
    else if (choice==10)
        user.divert(bdt,12.69);

    else
        cout<<"!!Error!!";


    return 0;
}
