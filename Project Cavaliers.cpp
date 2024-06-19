#include<bits/stdc++.h>
#include<windows.h>
#include<fstream>

using namespace std;

const short text_col_code = 3;
#define ZERO 48
#define ONE 49
#define TWO 50
#define THREE 51

void change_text_color(short col_code);
void display_options();

class Client{

    private:
        string full_name;
        long long national_id;
        bool gender;
        string mail;
        long long phone_number;

    public:


};

class Car1{
private:
    string Type = "Car";
    string Car_Name="Toyota Allion";
    string Driver_Name="Pratik";
    string Driver_ID="C101";
    double rate ;
public:
    Car1(){

    }

    Car1(double r)
    {
        rate=r;
    }


    void info()
    {
        cout<<"Vehicle Type: "<<Type<<endl;
        cout<<"Vehicle Name: "<<Car_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 40 Tk."<<endl;
    }
    void payment(double km){
        double cost;
        cost=km*rate;
        cout<<"Vehicle Type: "<<Type<<endl;
        cout<<"Vehicle Name: "<<Car_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 40 TK."<<endl;
        if(cost<=40 && cost>=1){
            cout<<"Cost: ";
            cout<<"40 TK.";
        }
        else{
            cout<<"Cost: ";
             cout<<cost<<" TK.";
        }

    }
};


class Car2{
private:
    string Type = "Car";
    string Car_Name="Hyndai Sonata Hybrid SEL";
    string Driver_Name="Shanto";
    string Driver_ID="C102";
    double rate=55;
public:
    Car2(){

    }

    Car2(double r)
    {
        rate=r;
    }

    void info()
    {
        cout<<"Vehicle Type: "<<Type<<endl;
        cout<<"Vehicle Name: "<<Car_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 55"<<endl;
    }


    void payment(double km){
        double cost;
        cost=km*rate;
        cout<<"Vehicle Type: "<<Type<<endl;
        cout<<"Vehicle Name: "<<Car_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 55"<<endl;
        if(cost<=55 && cost>=1){
            cout<<"Cost: ";
            cout<<"55 TK.";
        }
        else{
            cout<<"Cost: ";
             cout<<cost<<" TK.";
        }

    }
};

class Bike1{
private:
    string type = "Bike";
    string Bike_Name="Honda X Blade";
    string Driver_Name="Ahnaf";
    string Driver_ID="B101";
    double rate = 20;
public:
Bike1()
{

}

    Bike1(double r)
    {
        rate=r;
    }

    void info()
    {
        cout<<"Vehicle Type: "<<type<<endl;
        cout<<"Vehicle Name: "<<Bike_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 20"<<endl;
    }

    void payment(double km){
        double cost;
        cost=km*rate;
        cout<<"Vehicle Type: "<<type<<endl;
        cout<<"Vehicle Name: "<<Bike_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 40"<<endl;
        if(cost<=20 && cost>=1){
            cout<<"Cost: ";
            cout<<"20 TK.";
        }
        else{
            cout<<"Cost: ";
             cout<<cost<<" TK.";
        }

    }
};


class Bike2{
private:
    string type = "Bike";
    string Bike_Name="Suzuki Gixxer SF MotoGP";
    string Driver_Name="Siam";
    string Driver_ID="B102";
    double rate = 20;
public:
    Bike2(){

    }

  Bike2(double r)
    {
        rate=r;
    }

    void info()
    {
        cout<<"Vehicle Type: "<<type<<endl;
        cout<<"Vehicle Name: "<<Bike_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 20"<<endl;
    }


    void payment(double km){
        double cost;
        cost=km*rate;
        cout<<"Vehicle Type: "<<type<<endl;
        cout<<"Vehicle Name: "<<Bike_Name<<endl;
        cout<<"Driver Name: "<<Driver_Name<<endl;
        cout<<"Driver ID: "<<Driver_ID<<endl;
        cout<<"Rate per kilometer: 20"<<endl;
        if(cost<=20 && cost>=1){
            cout<<"Cost: ";
            cout<<"20 TK.";
        }
        else{
            cout<<"Cost: ";
             cout<<cost<<" TK.";
        }

    }
};

class Bike:public Bike1,public Bike2{

};

class Car:public Car1,public Car2{

};

 void car()
 {
    system("cls");
    double km , r1 , r2;
    ifstream rates;
    rates.open("rate_for_car1.txt");
    while(!rates.eof())
    {
        rates>>r1;
    }
    rates.close();
    ifstream rates2;
    rates2.open("rate_for_car2.txt");
    while(!rates2.eof())
    {
        rates>>r2;
    }
    rates2.close();
    Car1 C1(r1);
    Car2 C2(r2);
    cout<<"*************************\  Pick your Ride !!  /*************************"<<endl;
    cout<<"----------\  Car 1 /----------"<<endl;
    C1.Car1::info();
    cout<<endl;
    cout<<"----------\  Car 2 /----------"<<endl;
    C2.Car2::info();
    cout<<endl;
    int pick_car;
    cout<<"Enter your choice :";
    cin>>pick_car;
    if(pick_car==1)
    {
        system("cls");
        int confirm;
        cout<<"Enter your travel distance :";
        cin>>km;
        C1.Car1::payment(km);
        cout<<endl<<"~~~~~~~~~~~~~~~~|  Confirm your ride ?   |~~~~~~~~~~~~~~~~"<<endl<<"1.Yes"<<endl<<"2.No"<<endl;
        cin>>confirm;
        if(confirm==1)
        {
            system("cls");
            cout<<"Thank you for using our service , your ride will be here soon ! " <<endl;
        }
        else
           {
            system("cls");
            cout<<"Sorry that you cancelled , hope you'll use our service again soon !" <<endl;
           }
    }
    else if(pick_car==2)
    {
        system("cls");
        int confirm;
        cout<<"Enter your travel distance :";
        cin>>km;
        C2.Car2::payment(km);
        cout<<endl<<"~~~~~~~~~~~~~~~~|  Confirm your ride ?   |~~~~~~~~~~~~~~~~"<<endl<<"1.Yes"<<endl<<"2.No"<<endl;
        cin>>confirm;
        if(confirm==1)
        {
            system("cls");
            cout<<"Thank you for using our service , your ride will be here soon ! " <<endl;
        }
        else
            system("cls");
            cout<<"Sorry that you cancelled , hope you'll use our service again soon !" <<endl;
    }
    }


 void bike()
 {
    system("cls");
    double km;
    Bike B1 , B2;
    cout<<"*************************\  Pick your Ride !!  /*************************"<<endl;
    cout<<"----------\  Bike 1 /----------"<<endl;
    B1.Bike1::info();
    cout<<endl;
    cout<<"----------\  Bike 2 /----------"<<endl;
    B2.Bike2::info();
    cout<<endl;
    int pick_Bike;
    cout<<"Enter your choice :";
    cin>>pick_Bike;
    if(pick_Bike==1)
    {
        system("cls");
        int confirm;
        cout<<"Enter your travel distance :";
        cin>>km;
        B1.Bike1::payment(km);
        cout<<endl<<"~~~~~~~~~~~~~~~~|  Confirm your ride ?   |~~~~~~~~~~~~~~~~"<<endl<<"1.Yes"<<endl<<"2.No"<<endl;
        cin>>confirm;
        if(confirm==1)
        {
            system("cls");
            cout<<"Thank you for using our service , your ride will be here soon ! " <<endl;
        }
        else
           {
            system("cls");
            cout<<"Sorry that you cancelled , hope you'll use our service again soon !" <<endl;
            }
    }
    else if(pick_Bike==2)
    {
        system("cls");
        int confirm;
        cout<<"Enter your travel distance :";
        cin>>km;
        B1.Bike2::payment(km);
        cout<<endl<<"~~~~~~~~~~~~~~~~|  Confirm your ride ?   |~~~~~~~~~~~~~~~~"<<endl<<"1.Yes"<<endl<<"2.No"<<endl;
        cin>>confirm;
        if(confirm==1)
        {
            system("cls");
            cout<<"Thank you for using our service , your ride will be here soon ! " <<endl;
        }
        else
           {
            system("cls");
            cout<<"Sorry that you cancelled , hope you'll use our service again soon !" <<endl;
           }
    }
    }


 void up_Rate()
 {
     system("cls");
     cout<<"1.Bike or 2.car ?"<<endl;
     int choice_up_ra ;
     cin>>choice_up_ra;
     cout<<"Car 1 or Car 2"<<endl;
     cin>>choice_up_ra;
   if(choice_up_ra==1)
   {
       int rcup1 , rcup2;
       int choice_car_to_up;
       cout<<"Choose your car to change rate:"<<endl;
       cin>> choice_car_to_up;
     if(choice_car_to_up==1)
     {
         //int rcup1 , rcup2;
    ofstream rates;
    rates.open("rate_for_car1.txt");
    cin>>rcup1;
    rates<<rcup1;
    rates.close();
     }
     else  if(choice_car_to_up==2)
     {
         ofstream rates;
    rates.open("rate_for_car2.txt");
    cin>>rcup2;
    rates<<rcup2;
    rates.close();
     }
   }






 }






int main(){

    change_text_color(text_col_code);
    display_options();
    return 0;
}

void change_text_color(short col_code){

    HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(col, col_code);
}

void display_options(){

    char choiced_option = ' ';

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t";
            cout<<"********************************************************"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***              Welcome To Cavalry Chariots         ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t********************************************************"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***              Who you want to login as ?          ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***              1.As An Admin                       ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***              2.As A Client                       ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t***                                                  ***"<<endl;
    cout<<"\t\t\t\t********************************************************"<<endl;
    cout<<endl<<endl<<"\t\t\t\tWhat is Your Choice?: ";


    cin>>choiced_option;
    while(!((choiced_option == ONE) || (choiced_option == TWO))){
        cout<<"\n\t\t\t\t          Wrong Input! Please Try Again: ";
        cin>>choiced_option;

    }


    //Client Panel Section//

    system("cls");
   if(choiced_option == TWO)
    {
          while(1)
          {
           int choice;
           cout<<"><><><><><><><><><><><><><><><| Choose your option |><><><><><><><><><><><><><><><"<<endl;
           cout<<"1. History "<<endl<<"2. Cars "<<endl<<"3. Bikes "<<endl<<"4. Exit "<<endl;
           cout<<endl<<"Enter your Choice: ";
           cin>>choice;
              switch(choice)
              {
           case 1:
            //History
            cout<<"Yes 1"<<endl;
            break;
           case 2:
            car();
            //cout<<"Yes 2"<<endl;
            break;
           case 3:
            bike();
            //cout<<"Yes 3"<<endl;
            break;
           case 4:
            //exit
            cout<<"Yes 4"<<endl;
            break;

           default:
            cout<<"Invalid option ! Please try again!"<<endl;

              }
              if(choice<=4 )
                break;
          }
    }


    // Admin Panel section //


    else if(choiced_option==ONE)
    {
        while(1)
          {
           int choice;
           cout<<"><><><><><><><><><><><><><><><| Choose your option |><><><><><><><><><><><><><><><"<<endl;
           cout<<"1. Overall Income "<<endl<<"2. Update rate "<<endl<<"3. Update car "<<endl<<"4. Update driver "<<endl<<"5. Exit"<<endl;
           cout<<endl<<"Enter your Choice: ";
           cin>>choice;
              switch(choice)
              {
           case 1:
           // ova_inc();
            break;
           case 2:
            up_Rate();
            //cout<<"Yes 2"<<endl;
            break;
           case 3:
          //  update Car();
            //cout<<"Yes 3"<<endl;
            break;
           case 4:
          //  Update Driver();
            break;



           default:
            cout<<"Invalid option ! Please try again!"<<endl;

              }
              if(choice<=5 )
                break;
          }
    }

    /*if(choiced_option == ONE) admin_logIn
    else if(choiced_option == TWO) old_customer();
    else if(choiced_option == THREE) new_customer();*/
}
