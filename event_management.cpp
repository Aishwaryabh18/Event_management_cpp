#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<stdio.h>
#include<string.h>
#include<fstream>
#include <string>

using namespace std;

class NevException : public exception                               ///EXCEPTION HANDLING FOR INVALID INPUT
{
public:
    const char *what() const throw()
    {
        return "\n******* Invalid input *******\n";
    }
};

class UnavlbException : public exception                               ///EXCEPTION HANDLING FOR UNAVAILABLE EVENTS;
{
public:
    const char *what() const throw()
    {
        return "\n****** Event you are looking for does not exist ******\n";
    }
};

class Basic
{
    public:
        static float cost;
        int choice;
        int vench;
       int width,height,ch,yn,backGroundarea,decks;
        string lighting,soundSyst,color;
        string pattern;

     void catering()
    {
        cout<<"****     Catering Services      ****"<<endl;
        ifstream fin;
        fin.open("Control.txt");                                                                                    ///USING FILES
        string ch;
        cout<<"\nThe Available cuisines for BASIC Package with us are NORTH INDIAN and SOUTH INDIAN"<<endl;
        cout<<"Enter\n 1-> To select NORTH INDIAN Cuisine 2->To select SOUTH INDIAN Cuisine"<<endl;
        cin>>choice;
        if(choice == 1)
        {

                ifstream fin;
                fin.open("Control.txt");
                string ch;
                while( fin>>ch ){
               cout<<ch<<endl;
            }
        }
        else if(choice==2)
        {
                ifstream fin;
                fin.open("Control1.txt");
                string cho;
                while( fin>>cho ){
               cout<<cho<<endl;
            }
        }
        string NameOfEvent, CustomerName;	// Name of Event + Customer Name
    double NumberOfGuests;	// Number of Guests in attendance
int NumberOfMinutes;	// Number of Minutes in the event

// Information input (Events name and amounts)


cout << "\nEnter the number of guests " << endl;
cin >> NumberOfGuests;
cout << "\nEnter the duration in minutes of the event " << endl;
cin >> NumberOfMinutes;

cout << "Fall Dinner     " << endl;


int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 18.50;
const double CostPerMinute = .40;
const double CostOfDinner = 20.70;

// Get Number Of Servers
Test = NumberOfGuests / 20;
NumberOfServers = ceil(Test);

// Get Cost Of One Server
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;

// Get Cost For Food
TotalFoodCost = NumberOfGuests * CostOfDinner;

AverageCost = TotalFoodCost / NumberOfGuests;

TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

DepositAmount = TotalCost * .25;
cout << "Number Of Server: " << NumberOfServers << fixed << setprecision(2) << endl;
cout << "The Cost for Servers: " << setw(5) << CostForOneServer << endl;
cout << "The Cost for Food is: " << setw(5) << TotalFoodCost << endl;
cout << "Avergae Cost Per Person: " << setw(5) << AverageCost << endl;
cout << "\nTotal cost is: " << setw(5) << TotalCost << endl;
    cost=cost+TotalCost;
    }
     void venue()
    {
        int ch,dd,mm,yy,place,Timing;
        cout<<"\n*****  VENUE SELECTION  ****"<<endl;
        cout<<"Enter date of the event\n";
        cin>>dd>>mm>>yy;
        cout<<"\n\nThe Available Places are\n";
        cout<<"Gokul Garden"<<endl<<"Shubhodaya A/C Convention Hall"<<endl<<"Travel Inn"<<endl;
        cout<<"\nEnter  \n" <<"1 to book Gokul Garden"<<endl<< "2 for Shubhodaya A/C Convention Hall"<<endl<<"3 for Travel Inn"<<endl;
        cin>>place;
        if(place==1)
        {
            cout<<"Available Timings : "<<endl;
            cout<<endl<<"1.3pm - 6pm"<<endl<<"2.6pm - 9pm"<<endl;
            cin>>Timing;
            cost = cost + 7000;
            if(Timing==1)
                cout<<"\n\n     VENUE : Gokul Garden is selected \n   TIMINGS : 3pm - 6pm \n"<<endl;
            else
                cout<<"\n\n     VENUE : Gokul Garden is selected \n   TIMINGS : 6pm - 9pm \n"<<endl;
        }
        else if(place==2)
        {

            cout<<"\nAvailable Timings"<<endl;
            cout<<"1.1pm - 4pm"<<endl<<"2.8pm - 10pm"<<endl;
            cin>>Timing;
            cost = cost +10000;
            if(Timing==1)
                cout<<"\n\n     VENUE : Shubhodaya A/C Convention Hall is selected \n     TIMINGS : 1pm - 4pm \n"<<endl;
            else
                cout<<"\n\n     VENUE : Shubhodaya A/C Convention Hall is selected \n     TIMINGS : 2.8pm - 10pm \n"<<endl;
        }
        else if(place==3)
        {
            cout<<"\nAvailable Timings"<<endl;
            cout<<endl<<"1.10am - 3pm"<<endl<<"2.1pm - 6pm"<<endl;
            cin>>Timing;
            cost=cost +8000;
            if(Timing==1)
                cout<<"\n\n     VENUE : Travel Inn is selected \n     TIMINGS : 10am - 3pm \n"<<endl;
            else
                cout<<"\n\n     VENUE : Travel Inn is selected \n     TIMINGS : 1pm - 6pm \n"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }

    }
    void decoration()
    {
        cout<<"\n\n****  DECORATION SERVICES  ****"<<endl;
        cout<<"\nLightings : "<<endl;
        cout<<"Enter type. 1->Not required   2->Normal   3->Deluxe   4->Royal"<<endl;

      int  backGroundarea = 50;
        cost = cost + backGroundarea * 50;
        cin>>ch;
        if(ch==1)
        {
            cost=cost +0;
        }
        else if(ch==2)
        {
            cout<<"Normal lightings is selected"<<endl;
            cost =cost+ 900;
        }
        else if(ch=3)
        {
            cout<<"LED string lights is selected"<<endl;
            cost =cost+ 1000;
        }
        else if(ch=4)
        {
            cout<<"Pin spot lightning is selected "<<endl;
            cost =cost+ 1500;
        }

        cout<<"\nDecoration Pattern : "<<endl;
        cout<<"Enter type. 1->Not required   2->Normal   3->Deluxe   4->Royal"<<endl;
        cin>>ch;
        if(ch==1)
        {
            cost=cost+0;
        }
        else if(ch==2)
        {
            cout<<"Flower decor with sparkle cloths is selected\n";
            cost=cost+800;
        }
        else if(ch=3)
        {
             cout<<"Color paper decor is selected\n";
             cost=cost+1000;
        }
        else if(ch=4)
        {
            cout<<"Posture containing design is selected\n";
            cost=cost+1500;
        }
        cout<<"\n\nSeating Arrangements : "<<endl;
        int tables, no_of_guests,chairs;
        cout<<"Enter no.of guests"<<endl;
        cin>>no_of_guests;
        chairs = no_of_guests;

        cout<<"Enter type. 1->Not required   2->Normal   3->Deluxe  "<<endl;
        cin>>ch;
        float cost1,cost2;
        if(ch==1)
        {
            cost=cost+0;
        }
        else if(ch==2)
        {
            tables = chairs;
            cost1 = (tables+chairs)*20;
            cost=cost+cost1;

        }
        else if(ch==3)
        {
            tables = no_of_guests / 5;
            cost2 = (tables+chairs) * 20;
            cost=cost+cost2;
        }

    }
    void bill()
    {

        int ch;
        //float cost;
          string cname,cno,cvv;
            int mm,yy;
        cout<<"Enter Payment method you prefer "<<endl;
        cout<<"1.COD   2.Card Payment   3.Online Payment"<<endl;
        cin>>ch;
        if(ch==1)
        {
            cout<<endl<<"\n     TOTAL ESTIMATED COST IS :    "<<cost<<endl;
        }
        else if(ch==2)
        {

            char c;
            cout<<"Enter card no.: "<<endl;
            cin>>cno;
            cout<<"Enter Name on card : "<<endl;
            cin>>cname;
            cout<<"Enter cvv no. : "<<endl;
            cin>>cvv;
            cout<<"Enter expiry date in pattern MM/YY : ";
            cin>>mm>>c>>yy;

            cout<<endl<<"\n     TOTAL ESTIMATED COST IS :    "<<cost<<endl;
        }
        else if(ch==3)
        {
            int no;
                cout<<"Enter Google pay or Phone pay no."<<endl;
                cin>>no;
                cout<<endl<<"\n     TOTAL ESTIMATED COST IS :    "<<cost<<endl;
        }




    }



};
class Golden
{
    public:
/*    string images[30],songs[50];
    char styles[30];
    int n,n1,yn1,yn2;*/
    Basic bs;
    int ch;
    float cost;
    void theme()
    {

        cout<<"\nTHEME : ";
        cout<<"Enter type. 1->Not required   2->Normal   3->Deluxe   4->Royal"<<endl;
        cin>>ch;
        if(ch==1)
        {
            cost=cost+0;
        }
        else if(ch==2)
        {
            cout<<"Forest and Gardenia is selected\n";
            cost=cost+800;
        }
        else if(ch=3)
        {
             cout<<"Shimmer and Bling is selected\n";
             cost=cost+1000;
        }
        else if(ch=4)
        {
            cout<<"Glamorous Affair is selected\n";
            cost=cost+1500;
        }
    }
    void equipment()
    {
        cout<<"\nEnter equipments for Music Nights :"<<endl;
        cout<<"Choose 1-> DJ     2-> Stage system     3-> Mike and Speaker"<<endl;
        cin>>ch;
        if(ch==1)
        {
            cost=cost+1500;
        }
        else if(ch==2)
        {
            cost=cost+3000;
        }
         else if(ch==2)
        {
            cost=cost+2000;
        }
    }
    void gbill()
    {
        bs.bill();
    }

};

class event                                                                                        ///SINGLETON CLASS: one object
{
    public:

    string mname,addr;
    int contcno;
    event(string mname,int contcno,string addr)
    {
        this->mname=mname;
        this->contcno=contcno;
        this->addr=addr;
    }
    void pf()
    {
        cout<<endl<<"Event Management Name :    "<<mname <<endl;
              cout<<"Contact no.           :     "<<contcno<<endl;
              cout<<"Address               :   "<<addr<<endl;
    }
};

class Bday : public event
{
    public:
        string bteam;
        int bteamId;
        string mname,addr;
    int contcno;
        Bday(string mname,int contcno,string addr,string bteam,int bteamId):event(mname,contcno,addr)
        {
        this->mname=mname;
        this->contcno=contcno;
        this->addr=addr;
        this->bteam=bteam;
        this->bteamId=bteamId;
        }
        void printb()
        {
            cout<<endl<<"Event Management Name :    "<<mname <<endl;
                  cout<<"Contact no.           :    "<<contcno<<endl;
                  cout<<"Address               :    "<<addr<<endl;
                  cout<<"Team Organizers Name  :    "<<bteam<<endl;
                  cout<<"Team Id               :    "<<bteamId<<endl;
        }
};


class Wedding : public event
{
    public:
        string mname,addr;
    int contcno;
        string wteam;
        int wteamId;
        Wedding(string mname,int contcno,string addr,string wteam,int wteamId):event(mname,contcno,addr)
        {
        this->mname=mname;
        this->contcno=contcno;
        this->addr=addr;
        this->wteam=wteam;
        this->wteamId=wteamId;
        }
        void printw()
        {
            cout<<endl<<"Event Management Name :    "<<mname <<endl;
                  cout<<"Contact no.           :    "<<contcno<<endl;
                  cout<<"Address               :    "<<addr<<endl;
                  cout<<"Team Organizers Name  :    "<<wteam<<endl;
                  cout<<"Team Id               :    "<<wteamId<<endl;
        }
};



class Prize_Distrubution
{
    public:

    void cricket()
    {
        float maxx = 0,minn1;
        int o;
        int i,p,minn,j,q,k,r;
        int rns[3],ballfaced[3],Btid[3];
        float Battingstkrate[3];
        cout<<"Enter records of TOP 3 batsman"<<endl;
        for(int i=1;i<4;i++)
        {
        cout<<"\nEnter Batsman id of batsman "<<i<<" :  ";
        cin>>Btid[i];
        cout<<"Enter no. of runs he has scored : ";
        cin>>rns[i];
        cout<<"Enter no. of balls he has taken : ";
        cin>>ballfaced[i];
        Battingstkrate[i]= static_cast<float>(rns[i])/static_cast<float>(ballfaced[i]) *100;

        }
        for(int i=1;i<4;i++)
        {

         if(maxx<Battingstkrate[i])
             {maxx=Battingstkrate[i];
              o=i;
             }
        }
         cout<<"\nBatsman of the year is Batsman with "<<"Id no :"<<Btid[o]<<" with Strike Rate : ";
         cout<<maxx;

        float oversbowled[3];
        int runsconceded[3],Bwid[3];
        float Economy[3];
        cout<<"\nEnter records of TOP 3 Bowlers"<<endl;
        for(int j=1;j<4;j++)
        {
        cout<<"\nEnter Bowler id of bowler "<<j<<"  :  ";
        cin>>Bwid[j];
        cout<<"Enter no. of Runs conceded : ";
        cin>>runsconceded[j];
        cout<<"Enter no. of overs bowled :  ";
        cin>>oversbowled[j];
        Economy[j]= ((static_cast<float>(runsconceded[j]))/(static_cast<float>(oversbowled[j]))) ;
            minn1=Economy[j];
        }
        for(int j=1;j<4;j++)
        {
            //minn1=Economy[j];
         if(minn1>Economy[j])
             {minn1=Economy[j];
              q=j;
             }
        }
         cout<<"\nBowler of the year is Bowler with "<<"Id no :"<<Bwid[q]<<" with Economy Rate : ";///////*////
         cout<<minn1;
    }

        float maxx3 = 0,avg[3];
        int rollno[3];
    void cal_per()
    {
        int k,r,rollno[3];
        float maxx3=0,avg[3];
        cout<<"\n\nEnter Records of top 3 students "<<endl;
        for(k=1;k<4;k++)
        {
            cout<<"\nEnter roll no : ";
            cin>>rollno[k];
            cout<<"Enter Percentage : ";
            cin>>avg[k];
        }
        for(int k=1;k<4;k++)
        {
         if(maxx3<avg[k])
            {maxx3=avg[k];
             r=k;
            }
        }

         cout<<"\nTopper of the year is Student with "<<"Roll no : "<<rollno[r]<<" with percentage : ";
         cout<<maxx3<<"%";
    }
};


class school_gathering:public event
{
    Prize_Distrubution pd;
     public:
        string steam;
        int steamId;
        school_gathering(string mname,int contcno,string addr,string steam,int steamId):event(mname,contcno,addr)
        {
        this->mname=mname;
        this->contcno=contcno;
        this->addr=addr;
        this->steam=steam;
        this->steamId=steamId;
        }
        void prints()
        {
            cout<<endl<<"Event Management Name :    "<<mname <<endl;
                  cout<<"Contact no.           :    "<<contcno<<endl;
                  cout<<"Address               :    "<<addr<<endl;
                  cout<<"Team Organizers Name  :    "<<steam<<endl;
                  cout<<"Team Id               :    "<<steamId<<endl;
        }

};
class Person                                                                         /// ABSTRACT CLASS(Run time Polymorphism)
{
public:
    string name,contcno;
    virtual void read()=0;                                                             ///PURE VIRTUAL VOID FUNCTIONS
    virtual void display()=0;
    virtual void gfeedback()=0;
    virtual void dfeedback()=0;

};
class Customer:public Person
{public:
    static int stdcount;
    string name,contcno,email,addr;
    string cname,cno,cvv;
    int ratings;
            int mm,yy;
    void read()
    {
        cout<<"\nEnter name of Customer : ";
        cin>>name;
        cout<<"Enter address of Customer : ";
        cin>>addr;
        cout<<"Enter contcno of Customer : ";
        cin>>contcno;
        cout<<"Enter email of Customer : ";
        cin>>email;

        cout<<"\n\n******You have Registered Successfully ********** \n\n"<<"Your Registration Id is  :  "<<stdcount++<<endl<<endl;
    }
    void display()
    {
        cout<<"\nDetails of Customer who have registered for Event :"<<endl;
        cout<<"\nName of Customer : ";
        cout<<name;
        cout<<"\nAddress of Customer : ";
        cout<<addr;
        cout<<"\nContcno of Customer : ";
        cout<<contcno;
        cout<<"\nEmail of Customer : ";
        cout<<email;
    }
    void gfeedback()
    {
        cout<<"\nFeedback     : "<<endl;

        cout<<"Give Ratings :  ";
        cin>>ratings;

    }
    void dfeedback()
    {
        int regid;
        cout<<"\n\nRatings Given by Customer : ";

       cout<<"\nRatings : "<<endl;
        cout<<ratings;

    }


};
class Admin:public Person
{public:
    string aname,aemail,aaddr,name,addr,contcno;
    int aId;

    void read()
    {
        cout<<"\nEnter details of Admin to log in "<<endl;
        cout<<"\nEnter name of Admin : ";
        cin>>aname;
        cout<<"Enter Id no of Admin : ";
        cin>>aId;
       cout<<"Enter email of Admin : ";
        cin>>aemail;
        cout<<"\n\n*** Admin logged in Successfully ***"<<endl;
    }
    void display()
    {
        cout<<"Details of Customer who registered for event "<<endl;
       cout<<"\nName of Admin : ";
        cout<<aname;
        cout<<"\nAddress of Admin : ";
        cout<<aaddr;
        cout<<"\nEmail of Admin : ";
        cout<<aemail;
    }
    void gfeedback()
    {


    }
    void dfeedback(){}
};

float Basic :: cost=0;                                                                   ///STATIC VARIABLES
int Customer :: stdcount=100;

int main()
{

    int package;
    int ch;

    Basic bs;
    Golden g;


      while(1)

    {
        cout<<"\n\n*********      About Us        ***********"<<endl;
    event e("EVENTS by us",4836,"Apartment #20,Shirur park,Vidyanagar");
    e.pf();
     cout<<"\n****** Customer Section ******\n";

    Person *p1,*p2;                                                                          ///CREATING POINTER FOR CHILD CLASS(Run time Polymorphism)
     p1=new Customer;
     p2=new Admin;
     p1->read();

        cout<<"Events offered by our Management : \n"<<"1.BIRTHDAY PARTY\n"<<"2.WEDDING EVENT\n"<<"3.SCHOOL GATHERING\n";
        cout<<"Enter which event you want to us to organize by choosing no. from 1 to 3\n";
        cin>>ch;

      if(ch==1)
      {
          Bday  b("EVENTS by us",36,"Apartment #20,Shirur park,Vidyanagar","Team Birthday Party",1);
          b.printb();
                    cout<<"\n\nSelect package: \n1->Basic\n2->Golden"<<endl;
                    cin>>package;
                    if(package==1)
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            bs.bill();

                        }
                    else
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            g.theme();
                            g.equipment();
                            g.gbill();
                        }
                        p1->gfeedback();

        cout<<"\n\n********ADMIN SECTION*******\n";
        p2->read();
        int cc;


        cout<<"\nEnter \n1->To display details of Customer who have registered for Event\n\n2->To display Feedback given by Customer\n\n3->To display both"<<endl;
        cin>>cc;
        if(cc==1)
        {
            p1->display();
            printf("\n***************************************");

        }
        else if(cc==2)
        {
            p1->dfeedback();
            printf("\n***************************************");
        }
        else
            {
                p1->display();
                p1->dfeedback();
                printf("\n***************************************");
            }



     int n;

      cout<<"\n\n\nWant to book one more event?"<<endl;
      cout<<"\nEnter 1 to continue and 0 to exit"<<endl;
      cin>>n;
      if(n==1)
        continue;
      else{
            printf("\n********* THANK YOU *********\n");
        break;
      }

      }


        else if(ch==2)
        {
                   Wedding w("EVENTS by us",4836,"Apartment #20,Shirur park,Vidyanagar","Team Wedding",2);
                   w.printw();
                        cout<<"\n\nEnter package 1->Basic,2->Golden"<<endl;


                    cin>>package;
                    if(package==1)
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            bs.bill();

                        }
                    else
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            g.theme();
                            g.equipment();
                            g.gbill();
                        }
                        p1->gfeedback();

        cout<<"\n\n******** ADMIN SECTION *******\n";
        p2->read();
        int cc;
        cout<<"\nEnter \n1->To display details of Customer who have registered for Event\n\n2->To display Feedback given by Customer\n\n3->To display both"<<endl;
        cin>>cc;
        if(cc==1)
        {
            p1->display();
            printf("\n***************************************");

        }
        else if(cc==2)
        {
            p1->dfeedback();
            printf("\n***************************************");
        }
        else
            {
                p1->display();
                p1->dfeedback();
                printf("\n***************************************");
            }
     int n;

      cout<<"\n\n\nWant to book one more event?"<<endl;
      cout<<"\nEnter 1 to continue and 0 to exit"<<endl;
      cin>>n;
      if(n==1)
        continue;
      else
        break;
    }


            else if(ch==3)
                {
                    school_gathering s("EVENTS by us",4836,"Apartment #20,Shirur park,Vidyanagar","Team School Gathering",3);
                    s.prints();
                    cout<<"\n\nEnter package 1->Basic,2->Golden"<<endl;


                    cin>>package;
                    if(package==1)
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            Prize_Distrubution pd;
                            cout<<"\n\nPrize Distribution : "<<endl;
                            pd.cricket();
                            pd.cal_per();
                            bs.bill();

                        }
                    else
                        {
                            bs.venue();
                            bs.catering();
                            bs.decoration();
                            g.theme();
                            g.equipment();
                            Prize_Distrubution pd;
                            cout<<"\n\nPrize Distribution : "<<endl;
                            pd.cricket();
                            pd.cal_per();
                            g.gbill();

                        }
                        p1->gfeedback();

        cout<<"\n\n******** ADMIN SECTION *******\n";
        p2->read();
        int cc;
       cout<<"\nEnter \n1->To display details of Customer who have registered for Event\n\n2->To display Feedback given by Customer\n\n3->To display both"<<endl;
        cin>>cc;
        if(cc==1)
        {
            p1->display();
            printf("\n***************************************");

        }
        else if(cc==2)
        {
            p1->dfeedback();
            printf("\n***************************************");
        }
        else
            {
                p1->display();
                p1->dfeedback();
                printf("\n***************************************");
            }
     int n;

      cout<<"\n\n\nWant to book one more event?"<<endl;
      cout<<"\nEnter 1 to continue and 0 to exit"<<endl;
      cin>>n;
      if(n==1)
        continue;
      else{
            printf("\n********* THANK YOU *********\n");
        break;
      }


                }

         else
         {
             try{                                       ///EXCEPTION HANDLING
                 if(ch<0)
                 {
                     NevException nb;
                     throw nb;
                 }
                 else
                 {
                     UnavlbException u;
                     throw u;
                 }
                }
             catch(exception &n)
             {
                cerr<<n.what();
             }
             int n;

      cout<<"\n\n\nWant to book one more event?"<<endl;
      cout<<"\nEnter 1 to continue and 0 to exit"<<endl;
      cin>>n;
      if(n==1)
        continue;
      else{
             printf("\n********* THANK YOU *********\n");
        break;
      }
         }

    }
}


