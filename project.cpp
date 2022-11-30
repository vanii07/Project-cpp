#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
    public:
    string name,address,email,description;
    int pin_code;
    long int contact_no;
    Hotel()
    {
        cout<<"\n----------- WELCOME TO HOTEL COSMOS -----------";
        description = "Get an amazing experience of beautiful interior, pools, fitness clubs and soothing spas.\n\n";
        name = "Hotel Cosmos.";
        address = "Jabalpur,Madhya Pradesh.";
        pin_code = 482003.;
        contact_no = 889798999.;
        email = "hotelcosmos@gmail.com";
    }
};
class Discounts
{
    public:
     void offers()
     {
        char letter;
        cout<<"\nDo you wanna know about ongoing discounts and offers?\nType 'Y' for Yes and 'N'for No."<<endl;
        cin>>letter;
        if (letter == 'Y')
        {
            cout<<"\n\n-------CHRISTMAS SPECIAL OFFER------\n\n";

            cout<<"1.On more than one room booking, get a chance to win free vouchers.\n";
            cout<<"2.On staying for one week,free dinner for two days.\n";
            cout<<"3.Free night's stay with the purchase of two stays.\n";

            cout<<"\n\n-------EXCITING OFFERS THIS FALL--------\n\n";

            cout<<"1.On the booking of more than two rooms,Flat 10 % OFF in the overall booking.\n";
            cout<<"2.Exciting discount offers on food ,spa , etc. on direct booking.\n";
            cout<<"\nVisit us for more exciting offers like this.:)\n\n";            
        }
        else if (letter == 'N')
        {
            cout<<"Have A Good Day."<<endl;
        }
        else{
            cout<<"Please enter an appropriate choice."<<endl;
        } 
     }   

};
class Food
{public:
void Home_Delivery()
{
   char opt;
   string ord;
   string pata;
   cout<<"\n\n\n-----WELCOME TO FOOD DELIVERY SECTION-----\n\n\n";
   cout<<"Do you want to use our food delivery service.\nType Y for Yes and N for No."<<endl;
   cin>>opt;
   if (opt == 'Y')
   {
    cout<<"This is our menu.Select what do you wanna eat and tell us."<<endl;
    cin>>ord;
    cout<<"Address:"<<endl;
    cin>>pata;
    cout<<"Your order is on the way."<<endl;
    }
   else if(opt == 'N')
   {
    cout<<"Have a Great Day."<<endl;
   }  
   else
   {
    cout<<"Please Enter a Valid Character."<<endl;
   }
}
};
class Room:public Discounts
{
    public:
    void room_booking()
    {
        int type,rooms,people,days,cost,rupay;
        cout<<"\n\n\n-----WELCOME TO ROOM BOOKING SECTION-----\n\n\n";
        cout<<"Please select the type of room you want to stay in:"<<endl;
        cout<<"1.Single Room.\t\t\t5,000 per night"<<endl;
        cout<<"2.Twin or Double Room.\t\t10,000 per night"<<endl;
        cout<<"3.Studio Room.\t\t\t15,000 per night"<<endl;
        cout<<"4.Deluxe Room.\t\t\t20,000 per night"<<endl;
        cout<<"5.Luxury Room.\t\t\t25,000 per night"<<endl;
        cout<<"6.Luxury Suite.\t\t\t27,000 per night"<<endl;
        cout<<"7.Luxury Grande Suite.\t\t29,000 per night"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>type;
        switch (type)
        {
        case 1:
            cout<<"How many single rooms do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 5000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;
        case 2:
            cout<<"How many double rooms do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 10000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;
        case 3:
            cout<<"How many studio rooms do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 15000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;
        case 4:
            cout<<"How many deluxe rooms do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 20000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;
        case 5:
            cout<<"How many luxury rooms do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 25000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;  
        case 6:
            cout<<"How many luxury suite do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 27000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;  
        case 7:
            cout<<"How many luxury grande suite do you want?"<<endl;
            cin>>rooms;
            cout<<"How long will you stay?"<<endl;
            cin>>days;
            cout<<"How many people will stay?"<<endl;
            cin>>people;
            cost = 29000*days;
            cout<<"You have to pay -"<<cost<<endl;
            break;              
        
        default:
            cout<<"Please enter a valid choice."<<endl;
            break;
        }
        
        cout<<"How do you want to make a payment?\nSelect 1 for online and 2 for offline."<<endl;  
        cin>>rupay;    
        if (rupay == 1)
        {
            cout<<"Please go to the bill and payment section for online payment."<<endl;
        }
        else if (rupay == 2)
        {
            cout<<"See You There."<<endl;
        }
        else
        {
            cout<<"Enter a valid number."<<endl;
        }
        
        
    }

};

class Housekeeping
{
    public:
    void maintenance()
    {
        int need;
        string help;
        cout<<"\n\n\n-----WELCOME TO HOUSEKEEPING AND MAINTENANCE SECTION-----\n\n\n";
        cout<<"Please select what you need- "<<endl;
        cout<<"1.Picking up laundry."<<endl;
        cout<<"2.Need cleaning and vaccuming."<<endl;
        cout<<"3.Other needs."<<endl;
        cin>>need;
        switch (need)
        {
        case 1:
            cout<<"Please wait for a short time,we will soon pick up your laundry."<<endl;
            break;
        case 2:
            cout<<"Sorry for the inconvenience.We will soon clean everything up."<<endl;
            break;
        case 3:
            cout<<"Need any other help?\nTell us-"<<endl;
            cin>>help; 
            cout<<"We will try to help you as soon as possible."<<endl;       
            break;     
        default:
        cout<<"Enter a valid option."<<endl;
            break;
        }
    }

};
class Event
{
    public:
    void event_book()
    {
       int func;
       string area,hall,garden,pool;
       cout<<"What kind of event do you want us to organise?"<<endl;
       cout<<"1.Weddings and Receptions."<<endl;
       cout<<"2.Themed Garden Parties."<<endl;
       cout<<"3.Pool parties."<<endl;
       cout<<"4.kitty parties."<<endl;
       cout<<"5.Birthday parties or small events."<<endl;
       cout<<"Please select the event for advance booking-"<<endl;
       cin>>func;
     switch (func)
     {
     case 1:
        cout<<"What do you prefer halls or garden area?"<<endl;
        cin>>area;
        if (area == hall)
        {
          cout<<"Visit us to review the hall and confirm the booking."<<endl;
        }
        else if (area == garden)
        {
            cout<<"Visit us to review the garden area and confirm the booking."<<endl;
        }
        else{
            cout<<"Please enter valid option."<<endl;
        }
        break;
     case 2:
        cout<<"Visit us to review the garden area and confirm the booking."<<endl;  
        break;
     case 3:
        cout<<"Visit us to review the pool area and confirm the booking."<<endl;  
        break;
     case 4:
         cout<<"What do you prefer halls or garden area?"<<endl;
        cin>>area;
        if (area == hall)
        {
          cout<<"Visit us to review the hall and confirm the booking."<<endl;
        }
        else if (area == garden)
        {
            cout<<"Visit us to review the garden area and confirm the booking."<<endl;
        }
        else{
            cout<<"Please enter valid option."<<endl;
        }
        break;
     case 5:
        cout<<"Visit us to review the hall area and confirm the booking."<<endl;  
        break;
     default:
       cout<<"Enter the correct choice."<<endl;
        break;
     }

    }
};
class Bill
{
    public:
    void payment()
    {
        int select;
        int pay,card,pin;
     cout<<"\n\n\n-----WELCOME TO BILL AND PAYMENT SECTION-----\n\n\n"<<endl;
     cout<<"Please select the mode of payment-"<<endl;
     cout<<"1.Scan QR code."<<endl;
     cout<<"2.Credit card or Debit card."<<endl;
     cout<<"3.UPI."<<endl;
     cout<<"Enter your choice: "<<endl;
     cin>>select;
     switch (select)
     {
     case 1:
        cout<<"Enter the bill amount:"<<endl;
        cin>>pay;
        cout<<"Your payment is successful."<<endl;
        break;
     case 2:
        cout<<"Enter your card number:"<<endl;
        cin>>card;
        cout<<"Enter the bill amount:"<<endl;
        cin>>pay;
        cout<<"Enter your pin:"<<endl;
        cin>>pin;
        cout<<"Your payment is successful."<<endl;
        break;
     case 3:
       cout<<"Enter the bill amount:"<<endl;
       cin>>pay;
       cout<<"Enter your pin:"<<endl;
       cin>>pin;
       cout<<"Your payment is successful."<<endl;
       break;   
     default:
     cout<<"Select a valid mode of payment."<<endl;
        break;
     }

    }
};
int main()
{
    int choice;
    Hotel H;
    cout<<"\n\n\n"<<H.description;
    cout<<"\nName of the Hotel: "<<H.name;
    cout<<"\nAddress: "<<H.address; 
    cout<<"\nPin code: "<<H.pin_code;
    cout<<"\nContact us on: "<<H.contact_no;
    cout<<"\nEmail: "<<H.email<<"\n\n\n"; 
       
    Food F;
    Room R;
    Housekeeping h;
    Event E;
    Bill B;
    
   do
   {   
    cout<<"-----------MAIN MENU-----------"<<endl;  
    cout<<"\n\n 1.Looking For Food?";
    cout<<"\n 2.Room Bookings.";
    cout<<"\n 3.Housekeeping.";
    cout<<"\n 4.Event Booking.";
    cout<<"\n 5.Bill and Payments.";
    cout<<"\n 6.Exit.";
    cout<<"\n Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        F.Home_Delivery();  
        break;
    case 2:
         R.room_booking();
         R.offers(); 
        break;
    case 3:
        h.maintenance();
       break;
    case 4:
        E.event_book();
        break;   
    case 5:
         B.payment();
       break;
    case 6:
        exit(0);
        break;    
    default:
    cout<<"Enter correct choice"<<endl;
        break;
    }
    } while (choice != 6);
    
   
    return 0;
}
