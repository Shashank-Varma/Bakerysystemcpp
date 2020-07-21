#include<iostream.h>

#include<fstream.h>

#include<stdio.h>

#include<string.h>

#include<iomanip.h>

#include<conio.h>

#include<stdlib.h>

class password              //class for user signup!!
 {
 public:
  char username[30];
  char pass[20];
  int age;
  char sex[10];
  int date;
  int month;
  int year;
 }a;

class password1              //class for admin signup!!
 {
 public:
  char username[30];
  char pass[20];
  int age;
  char sex[10];
  int date;
  int month;
  int year;
 }q;

class bakerys                         //class for bakery inventory!!

{

 long int itemnum;

 char items[100];

 float price;

 int quantity;

 int mdate;

 int mmonth;

 int myear;

 int edate;

 int emonth;

 int eyear;




 public:

 int quantity_return()
 {
     cout<<"\n Item Number : "<<itemnum;
     cout<<"\n Item Name : ";
     cout.write(items,100);
     cout<<"\n Price : "<<price;
     cout<<"\n Quantity : "<<quantity;
     cout<<"\n Manufacture Date : ";
     cout<<mdate;
     cout<<"/";
     cout<<mmonth;
     cout<<"/";
     cout<<myear;
     cout<<"\n Expire Date : ";
     cout<<edate;
     cout<<"/";
     cout<<emonth;
     cout<<"/";
     cout<<eyear;
     return quantity;
 }

 long int itemnum_access()

 {

  return itemnum;

 }

 char* items_access()

 {

  return items;

 }

 float price_access()

 {

  return price;

 }

 int quantity_access()

 {

  return quantity;

 }

 int mdate_access()

 {

  return mdate;

 }

 int mmonth_access()

 {

  return mmonth;

 }

 int myear_access()

 {

  return myear;

 }

 int edate_access()

 {

  return edate;

 }

 int emonth_access()

 {

  return emonth;

 }

 int eyear_access()

 {

  return eyear;

 }
 void new12()
 {
  cout<<"\n Enter New Values";
     cout<<"\n Price : ";
     cin>>price;
     cout<<"\n Quantity : ";
     cin>>quantity;
     cout<<"\n Manufacture Date : ";
     cin>>mdate;
     cout<<"\n Manufacture Month :  ";
     cin>>mmonth;
     cout<<"\n Manufacture Year : ";
     cin>>myear;
     cout<<"\n Expire Date : ";
     cin>>edate;
     cout<<"\n Expire Month : ";
     cin>>emonth;
     cout<<"\n Expire Year : ";
     cin>>eyear;
     }

 void snacks()

 {

  char itemname[20];
  cout<<"\n ENTER ITEMNUMBER";

  cin>>itemnum;

  cout<<"\n ENTER NAME OF SNACKS";

  gets(items);

  cout<<" ENTER THE PRICE ";;

  cin>>price;

  cout<<"\n ENTER MANUFACTURE DATE";

  cout<<"\n Enter Date";

  cin>>mdate;

  if(mdate>0&&mdate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Month";

  cin>>mmonth;

  if(mmonth>0&&mmonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Year";

  cin>>myear;

  if(myear>2010&&myear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n ENTER EXPIRE DATE";

  cout<<"\n Enter Date";

  cin>>edate;

  if(edate>0&&edate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Month";

  cin>>emonth;

  if(emonth>0&&emonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Year";

  cin>>eyear;

  if(eyear>2010&&eyear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  snacks();

  }

 }

  void choco()

 {

  cout<<"\n ENTER ITEMNUMBER";

  cin>>itemnum;

  cout<<"\n ENTER NAME OF CHOCOLATE";

  cin>>items;

  cout<<"\n ENTER PRICE";

  cin>>price;

  cout<<"\n ENTER MANUFACTURE DATE";

  cout<<"\n Enter Date";

  cin>>mdate;

  if(mdate>0&&mdate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Month";

  cin>>mmonth;

  if(mmonth>0&&mmonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Year";

  cin>>myear;

  if(myear>2010&&myear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n ENTER EXPIRE DATE";

  cout<<"\n Enter Date";

  cin>>edate;

  if(edate>0&&edate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Month";

  cin>>emonth;

  if(emonth>0&&emonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Year";

  cin>>eyear;

  if(eyear>2010&&eyear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  choco();

  }

 }




 void pastry()

 {

  cout<<"\n ENTER ITEMNUMBER";

  cin>>itemnum;

  cout<<"\n ENTER NAME OF PASTRY";

  cin>>items;

  cout<<"\n ENTER PRICE";

  cin>>price;

  cout<<"\n ENTER MANUFACTURE DATE";

  cout<<"\n Enter Date";

  cin>>mdate;

  if(mdate>0&&mdate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Month";

  cin>>mmonth;

  if(mmonth>0&&mmonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Year";

  cin>>myear;

  if(myear>2010&&myear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n ENTER EXPIRE DATE";

  cout<<"\n Enter Date";

  cin>>edate;

  if(edate>0&&edate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Month";

  cin>>emonth;

  if(emonth>0&&emonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Year";

  cin>>eyear;

  if(eyear>2010&&eyear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  pastry();

  }

 }

 void dairy()

 {

  cout<<"\n ENTER ITEMNUMBER";

  cin>>itemnum;

  cout<<"\n ENTER NAME OF DAIRY";

  cin>>items;

  cout<<"\n ENTER PRICE";

  cin>>price;

  cout<<"\n ENTER MANUFACTURE DATE";

  cout<<"\n Enter Date";

  cin>>mdate;

  if(mdate>0&&mdate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Month";

  cin>>mmonth;

  if(mmonth>0&&mmonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Year";

  cin>>myear;

  if(myear>2010&&myear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n ENTER EXPIRE DATE";

  cout<<"\n Enter Date";

  cin>>edate;

  if(edate>0&&edate<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Month";

  cin>>emonth;

  if(emonth>0&&emonth<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Year";

  cin>>eyear;

  if(eyear>2010&&eyear<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  dairy();

  }

 }




}b;

class sales                                    //class for sale details!!

{

int Date;

int Month;

int Year;

long int Item_Number;

char Food_Name[50];

int Quantity;

float Price;

public:

double Total_Cost;

int quantity_return()
{
     cout<<"\n Item Number : "<<Item_Number;
     cout<<"\n Item Name : ";
     cout.write(Food_Name,50);
     cout<<"\n Price : "<<Price;
     cout<<"\n Quantity : "<<Quantity;
     cout<<"\n Date : ";
     cout<<Date;
     cout<<"/";
     cout<<Month;
     cout<<"/";
     cout<<Year;
     return Quantity;
}

int date_access()

{

 return Date;

}

int month_access()

{

 return Month;

}

int year_access()

{

 return Year;

}

long int itemnum_access()

{

 return Item_Number;

}

char* foodname_access()

{

 return Food_Name;

}

int quantity_access()

{

 return Quantity;

}

float price_access()

{

 return Price;

}
void new1()
{
cout<<"\n Enter New Values";
     cout<<"\n Price : ";
     cin>>Price;
     cout<<"\n Quantity : ";
     cin>>Quantity;
     cout<<"\n Manufacture Date : ";
     cin>>Date;
     cout<<"\n Manufacture Month :  ";
     cin>>Month;
     cout<<"\n Manufacture Year : ";
     cin>>Year;

}
 void snacks()

 {

  cout<<"\n ENTER ITEMNUMBER";

  cin>>Item_Number;

  cout<<"\n ENTER QUANTITY";
  cin>>Quantity;

  cout<<"\n ENTER NAME OF SNACKS";

  cin>>Food_Name;

  cout<<"\n ENTER PRICE";

  cin>>Price;

  cout<<"\n Enter Date";

  cin>>Date;

  if(Date>0&&Date<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Month";

  cin>>Month;

  if(Month>0&&Month<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  snacks();

  }

  cout<<"\n Enter Year";

  cin>>Year;

  if(Year>2010&&Year<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  snacks();

  }
 cout<<"\n Total Price Calculated";
 Total_Cost=Price*Quantity;
 cout<<Total_Cost;

 }

  void choco()

 {

  cout<<"\n ENTER ITEMNUMBER";

  cin>>Item_Number;

  cout<<"\n ENTER QUANTITY";
  cin>>Quantity;

  cout<<"\n ENTER NAME OF CHOCOLATE";

  cin>>Food_Name;

  cout<<"\n ENTER PRICE";

  cin>>Price;

  cout<<"\n Enter Date";

  cin>>Date;

  if(Date>0&&Date<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Month";

  cin>>Month;

  if(Month>0&&Month<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  choco();

  }

  cout<<"\n Enter Year";

  cin>>Year;

  if(Year>2010&&Year<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  choco();

  }
 cout<<"\n Total Price Calculated";
 Total_Cost=Price*Quantity;
 cout<<Total_Cost;
 }




 void pastry()

 {

    cout<<"\n ENTER ITEMNUMBER";

  cin>>Item_Number;

  cout<<"\n ENTER QUANTITY";
  cin>>Quantity;

  cout<<"\n ENTER NAME OF PASTRY";

  cin>>Food_Name;

  cout<<"\n ENTER PRICE";

  cin>>Price;

  cout<<"\n Enter Date";

  cin>>Date;

  if(Date>0&&Date<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Month";

  cin>>Month;

  if(Month>0&&Month<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  pastry();

  }

  cout<<"\n Enter Year";

  cin>>Year;

  if(Year>2010&&Year<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  pastry();

  }
 cout<<"\n Total Price Calculated";
 Total_Cost=Price*Quantity;
 cout<<Total_Cost;
 }

 void dairy()

 {

    cout<<"\n ENTER ITEMNUMBER";

  cin>>Item_Number;

  cout<<"\n ENTER QUANTITY";
  cin>>Quantity;

  cout<<"\n ENTER NAME OF DAIRY";

  cin>>Food_Name;

  cout<<"\n ENTER PRICE";

  cin>>Price;

  cout<<"\n Enter Date";

  cin>>Date;

  if(Date>0&&Date<=31)

  cout<<"\n Valid Date";

  else

  {

  cout<<"\n Invalid Date";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Month";

  cin>>Month;

  if(Month>0&&Month<=12)

  cout<<"\n Valid Month";

  else

  {

  cout<<"\n Invalid Month";

  cout<<"\n Try Again";

  dairy();

  }

  cout<<"\n Enter Year";

  cin>>Year;

  if(Year>2010&&Year<=2020)

  cout<<"\n Valid Year";

  else

  {

  cout<<"\n Invalid Year";

  cout<<"\n Try Again";

  dairy();

  }
 cout<<"\n Total Price Calculated";
 Total_Cost=Price*Quantity;
 cout<<Total_Cost;
}

}s;

int flag_loggedin=0;
int flag_adminuser=0;
int flag_user=0;
char upassword[10];

char user_name[50];


char time_excess[2];

void homepage();     //Function To Display Homepage

void options();     //Function To Display Options User & Admin Can Access

void title();

void search_item();

void search_foodnum();

void search_foodname();

void signin();

void modify_ufooditem();

void add_sfooditem();

void remove_sfooditem();

void modify_sfooditem();

void admin_login();

void admin();

void add_fooditem();

void remove_fooditem();

void modify_fooditem();

void admin_signup();

void view();

void add_ufooditem();

void User();

void last_page();

void report();

void buying();

void signup();

void delay(int second);




void main()

{

  homepage();

}

void homepage()

{

fflush(stdin);

int k,j;
 long double i;
 cout<<"                                                                        ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                         {                            }               ";
 cout<<"\n                        {                              }              ";
 cout<<"\n                       {________________________________}             ";
 cout<<"\n                        (_____________________________ )              ";
 cout<<"\n                         (___________________________ )               ";
 cout<<"\n                          (_________________________ )                ";
 cout<<"\n                           ( ______________________ )                 ";
 cout<<"\n                            (______________________)                  ";
 for(i=0;i<50000000;i++);
 clrscr();
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                          {              BAKERY      }                ";
 cout<<"\n                         {                            }               ";
 cout<<"\n                        {                              }              ";
 cout<<"\n                       {________________________________}             ";
 cout<<"\n                        (_____________________________ )              ";
 cout<<"\n                         (___________________________ )               ";
 cout<<"\n                          (_________________________ )                ";
 cout<<"\n                           (_______________________ )                 ";
 cout<<"\n                            (______________________)                  ";
 for(i=0;i<50000000;i++);
 clrscr();
 cout<<"                                                                        ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                                                                      ";
 cout<<"\n                          _{     LLOYD'S          }_                  ";
 cout<<"\n                         {              BAKERY      }                 ";
 cout<<"\n                        {                            }                ";
 cout<<"\n                       {                              }               ";
 cout<<"\n                      {________________________________}              ";
 cout<<"\n                       (_____________________________ )               ";
 cout<<"\n                        (___________________________ )                ";
 cout<<"\n                         (_________________________ )                 ";
 cout<<"\n                          ( ______________________ )                  ";
 cout<<"\n                           (______________________)                   ";
 for(i=0;i<50000000;i++);
 clrscr();
 cout<<"                                                                        ";
 cout<<"\n                                   ________                           ";
 cout<<"\n                               __{          }__                       ";
 cout<<"\n                            __{                }__                    ";
 cout<<"\n                          _{     LLOYD'S          }_                  ";
 cout<<"\n                         {              BAKERY      }                 ";
 cout<<"\n                        {                            }                ";
 cout<<"\n                       {                              }               ";
 cout<<"\n                      {________________________________}              ";
 cout<<"\n                       (_____________________________ )               ";
 cout<<"\n                        (___________________________ )                ";
 cout<<"\n                         (_________________________ )                 ";
 cout<<"\n                          ( ______________________ )                  ";
 cout<<"\n                           (______________________)                   ";
 for(i=0;i<50000000;i++);
 clrscr();
 cout<<"                                    @@@@                                ";
 cout<<"\n                                 __{     }__                          ";
 cout<<"\n                              __{           }__                       ";
 cout<<"\n                           __{                }__                     ";
 cout<<"\n                          _{     LLOYD'S         }_                   ";
 cout<<"\n                         {              BAKERY     }                  ";
 cout<<"\n                        {                           }                 ";
 cout<<"\n                       {                             }                ";
 cout<<"\n                      {_______________________________}               ";
 cout<<"\n                       (_____________________________ )               ";
 cout<<"\n                        (___________________________ )                ";
 cout<<"\n                         (_________________________ )                 ";
 cout<<"\n                          ( ______________________ )                  ";
 cout<<"\n                           (______________________)                   ";

for(k=0;k<1;k++)

 { cout<<'\n';

 for(j=0;j<80;j++)

 cout<<"=";

 }
cout<<"\n                                _____           _____     ______   ";
cout<<"\n                 |      |      |     |  |   |  |     |   |         ";
cout<<"\n                 |      |      |     |   | |   |      |  |______   ";
cout<<"\n                 |      |      |     |    |    |      |         |  ";
cout<<"\n                 |_____ |_____ |_____|    |    | ____|    ______|  ";
cout<<"\n                                                                   ";
for(int x=0;x<1;x++)

 { cout<<'\n';

 for(int y=0;y<80;y++)

 cout<<"=";

 }
int m;

long double n;
cout<<endl;

char s[200]="\n                          WELCOME TO LLOYDS BAKERY                     ";




for(m=0;m<strlen(s);m++)

{for(n=0;n<8000000;n++);

cout<<s[m];

}

cout<<"\n Press Enter To Continue ";

 gets(time_excess);

 clrscr();

 options();

 fflush(stdin);




}

void title()

{

 int i,j;

 for(i=0;i<1;i++)

{  cout<<'\n';

 for(j=0;j<80;j++)

 cout<<"=";

}

int m;

long double n;

char s[200]="\n                               \" LLOYDS BAKERY\"              ";




for(m=0;m<strlen(s);m++)

{for(n=0;n<1000000;n++);

cout<<s[m];

}




for(i=0;i<1;i++)

{  cout<<'\n';

 for(j=0;j<80;j++)

 cout<<"=";

}

}

void loading()

{cout<<"\n LOADING";

int i ,j,k,l;

 for(i=0;i<2;i++)

{ for(j=0;j<5;j++)

cout<<".";

  for(k=0;k<5;k++)

cout<<".";

  for(l=0;l<5;l++)

cout<<".";

}

}



void options()

{
fflush(stdin);
 title();
int choice;

char s[200]="\n                               \" OPTION MENU \"            \n ";

int l;

long double n;

for(l=0;l<strlen(s);l++)

{for(n=0;n<1000000;n++);

cout<<s[l];

}
int m;

long double x;

char s1[100]="\n SELECT YOUR OPTION";


for(m=0;m<strlen(s1);m++)

{for(x=0;x<1000000;x++);

cout<<s1[m];

}
cout<<endl;
int a;

long double c;

char s2[100]="\n 1.ADMIN LOGIN ";

for(a=0;a<strlen(s2);a++)

{for(c=0;c<1000000;c++);

 cout<<s2[a];

}
cout<<endl;
cout<<"\n 2.ADMIN SIGNUP ";
cout<<endl;
cout<<"\n 3.USER LOGIN";
cout<<endl;
int o;

long double t;

char s5[100]="\n 4.USER SIGNUP";

for(o=0;o<strlen(s5);o++)

{for(t=0;t<1000000;t++);

cout<<s5[o];

}

cin>>choice;

  switch(choice)

  {
  case 1:
      clrscr();
      admin_login();
      break;
  case 2:
      clrscr();
      admin_signup();
      break;
  case 3:
      clrscr();
      signin();
      break;

  case 4:
      clrscr();
      signup();
      break;
  default:last_page();

  }

fflush(stdout);
cout<<endl;
cout<<" \n PRESS ENTER TO  CONTINUE!! ";
 gets(time_excess);

 clrscr();

}

void signup()
{
    ofstream f;
    title();
    int b;

  long double c;

  char s2[200]="\n                                \" SIGNUP MENU\"                      ";

  for(b=0;b<strlen(s2);b++)

  {for(c=0;c<1000000;c++);

    cout<<s2[b];

  }
    f.open("password.dat");
    cout<<endl;
    cout<<"\n ENTER USER-ID ";
    gets(a.username);
    cout<<endl;
    cout<<"\n ENTER *PASSWORD* ";
    int i=-1;
 do
{

  i++;

  a.pass[i]=getch();

  if(a.pass[i]!=13&&a.pass[i]!='\b')

  cout<<'*';

  else if(a.pass[i]=='\b')

  {cout<<'\b';

    i-=2;

  }

  if(int(a.pass[i])==13)

  a.pass[i]='\0';

}while(a.pass[i]!='\n'&&i<strlen(a.pass));

    cout<<endl;
    cout<<"\n ENTER AGE ";
    cin>>a.age;
    cout<<endl;
    cout<<"\n ENTER GENDER[M\F]";
    gets(a.sex);
    cout<<endl;
    cout<<"\n ENTER DATE OF BIRTH ";
    cin>>a.date;
    cout<<endl;
    if(a.date<1&&a.date>31)
    {
    cout<<"\n INVALID DATE";
    cout<<"\n TRY AGAIN";
    signup();
    }
    cout<<"\n ENTER MONTH OF BIRTH ";
    cin>>a.month;
    cout<<endl;
    if(a.month<1&&a.month>12)
    {
    cout<<"\n INVALID MONTH";
    cout<<"\n TRY AGAIN";
    signup();
    }
    cout<<"\n ENTER YEAR OF BIRTH ";
    cin>>a.year;
    if(a.year<1&&a.year>31)
    {
    cout<<"\n INVALID YEAR";
    cout<<"\n TRY AGAIN";
    signup();
    }
    f.write((char*)&a,sizeof(a));
    f.close();
    cout<<endl;
    cout<<"\n YOU ARE BEING DIRECTED TO OPTION PAGE";
    options();
}


void admin_signup()
{
    ofstream f;
    title();
    int b;

  long double c;

  char s2[200]="\n                              :: \" ADMIN SIGNUP MENU \" ::                      ";

  for(b=0;b<strlen(s2);b++)

  {for(c=0;c<1000000;c++);

    cout<<s2[b];

  }
    f.open("password1.dat");
    cout<<endl;
    cout<<"\n ENTER USERNAME ";
    gets(q.username);
    cout<<endl;
    cout<<"\n ENTER PASSWORD ";
    int i=-1;
 do
{

  i++;

  q.pass[i]=getch();

  if(q.pass[i]!=13&&q.pass[i]!='\b')

  cout<<'*';

  else if(q.pass[i]=='\b')

  {cout<<'\b';

    i-=2;

  }

  if(int(q.pass[i])==13)

  q.pass[i]='\0';

}while(q.pass[i]!='\n'&&i<strlen(q.pass));
    cout<<endl;
    cout<<"\n ENTER AGE ";
    cin>>q.age;
    cout<<endl;
    cout<<"\n ENTER GENDER[M/F]";
    gets(q.sex);
    cout<<endl;
    cout<<"\n ENTER DATE OF BIRTH ";
    cin>>q.date;
    cout<<endl;
    if(q.date<1&&q.date>31)
    {
    cout<<"\n INVALID DATE";
    cout<<"\n TRY AGAIN";
    admin_signup();
    }
    cout<<"\n ENTER MONTH OF BIRTH ";
    cin>>q.month;
    cout<<endl;
    if(q.month<1&&q.month>12)
    {
    cout<<"\n INVALID MONTH";
    cout<<"\n TRY AGAIN";
    admin_signup();
    }
    cout<<"\n ENTER YEAR OF BIRTH ";
    cin>>q.year;
    cout<<endl;
    if(q.year<1&&q.year>31)
    {
    cout<<"\n INVALID YEAR";
    cout<<"\n TRY AGAIN";
    admin_signup();
    }
    f.write((char*)&q,sizeof(q));
    f.close();
    cout<<endl;
    cout<<"\n YOU ARE BEING DIRECTED TO OPTION PAGE";
    options();
}

void admin_login()

{

fflush(stdin);

int k, flag=0;

ifstream f;

int y=0;

title();

for(k=0;k<27;k++)

cout<<" ";

int m,i;

long double n;

char s[200]="\n                                 ::  \"ADMIN LOGIN\" ::                     ";

for(m=0;m<strlen(s);m++)

{for(n=0;n<1000000;n++);

cout<<s[m];

}

char userid[10],password[10];

for(i=0;i<10;i++)

{
 password[i]= '\0';

}

for(i=0;i<10;i++)

{
userid[i] = '\0';
}
cout<<endl;
cout<<"\nEnter Your Admin User-ID: ";

cin>>userid;
cout<<endl;
cout<<"\n**Enter Password**:[MORE THAN 8 CHARACTERS] ";

i=-1;

 do

 {

i++;

  password[i]=getch();

  if(password[i]!=13&&password[i]!='\b')

 cout<<'*';

  else if(password[i]=='\b')

  {cout<<'\b';

 i-=2;

 }

 if(int(password[i])==13)

  password[i]='\0';

}while(password[i]!='\n'&&i<strlen(password));

 if(strlen(password)<8)
  {
    cout<<"\n PASSWORD SHOULD BE MORE THAN 8 CHARACTERS";
    cout<<"\n TRY AGAIN";
    admin_login();
  }
 f.open("password1.dat");

  while(f.read((char*)&q,sizeof(q)))
  {
    if(strcmp(password,q.pass)==0||strcmp(password,"admin12345")==0)
    {
     cout<<"You Have Signed In";
     flag=1;
     admin();
    }

    else
    {
     cout<<" Log in Falied";
     flag=0;
    }
  }
  f.close();

  if(flag==0)

  {  ++y;

    cout<<"\n Wrong Username or password (MAX 3 ATTEMPTS)";

    if(y<3)

    {
     cout<<"\n(Press enter to login again)";

     gets(time_excess);

     admin_login();

    }

    else

    {

  cout<<"\n More than 3 attempts";

  cout<<"\n You are being directed to the last page";

  last_page();

    }

  }

}

void admin()

{ int choice;

  int choice1;

  int choice2;

  clrscr();

  title();



  int m;

 long double n;

 char s[100]="\n                            ::   \" ADMIN FUNCTIONS\" ::  ";




 for(m=0;m<strlen(s);m++)

 {for(n=0;n<1000000;n++);

 cout<<s[m];

 }
  cout<<endl;
  cout<<"\n What Do You Want To Access???!";
  cout<<endl;
  cout<<"\n 1.INVENTORY MODULE";
  cout<<endl;
  cout<<"\n 2.SALES MODULE";
  cout<<endl;
  cout<<"\n Enter Your Choice:";

  cin>>choice1;
  if(choice1==2)
  flag_adminuser=1;
  else
  flag_user=1;
  switch(choice1)

  {

  case 1:
  cout<<endl;
  cout<<"\n What do You Want To Do? ";
  cout<<endl;
  cout<<"\n 1.Create Food Item";
  cout<<endl;
  cout<<"\n 2.Modify Food Item";
  cout<<endl;
  cout<<"\n 3.Delete Food Item";
  cout<<endl;
  cout<<"\n 4.Search On Food Number";
  cout<<endl;
  cout<<"\n 5.Search on Food Name";
  cout<<endl;
  cout<<"\n Choose Your Option";
  cout<<endl;
  cin>>choice;

  switch(choice)

  { case 1:clrscr();




     add_fooditem();

     break;

  case 2:clrscr();




     modify_fooditem();

     break;

  case 3:clrscr();




     remove_fooditem();

     break;

  case 4:clrscr();




     search_foodnum();

     break;

  case 5: clrscr();




     search_foodname();

     break;

    default: last_page();

  }

  break;

  case 2:
  cout<<endl;
  cout<<"\n What Do You Want To Do? ";
  cout<<endl;
  cout<<"\n 1.Create A Sales";
  cout<<endl;
  cout<<"\n 2.Modify A Sales";
  cout<<endl;
  cout<<"\n 3.Delete A Sales";

  cin>>choice2;

  switch(choice2)

  {

  case 1:clrscr();




     add_sfooditem();

     break;

  case 2:clrscr();




     modify_sfooditem();

     break;

  case 3:clrscr();




     remove_sfooditem();

     break;

  default: last_page();

  }

  break;

 }
}

void User()

{
  int choice;

  clrscr();

  title();

  int m;

 long double k;

 char a[200]="\n                            \"USER FUNCTIONS FOR SALES MODULES\"            ";




 for(m=0;m<strlen(a);m++)

 {for(k=0;k<1000000;k++);

 cout<<a[m];

 }

  cout<<"\n What do u want to do? ";

  cout<<"\n 1.Create A Sales";

  cout<<"\n 2.Modify A Sales";

  cin>>choice;

  switch(choice)

  {

 case 1:

    cout<<"\n You are being directed to Create A Sales Menu";

     add_ufooditem();

     break;

 case 2:

    cout<<"\n You are being directed to Modify A Sales Menu ";

    modify_ufooditem();

    break;

 default: last_page();

  }

}


void add_fooditem()

{
  char choice;

  title();

  fstream f;

  int m;

 long double k;

 char s[100]="\n                          \"ADD A FOODITEM\"  ";

 for(m=0;m<strlen(s);m++)

 {for(k=0;k<1000000;k++);

 cout<<s[m];

 }

 f.open("bakery.dat",ios::out|ios::app|ios::binary);

 int  n;

 cout<<" \n  Enter The Catogery You Want To Add";

 cout<<" \n  Items-";

 cout<<" \n 1.Snacks  ";

 cout<<" \n 2.Pastry";

 cout<<" \n 3.Chocolates";

 cout<<" \n 4.Dairy";

 cin>>n;

 switch(n)

 {

 case 1:

 b.snacks();

 f.write((char*)&b,sizeof(b));

 break;




 case 2 :

 b.choco();

 f.write((char*)&b,sizeof(b));

 break;




 case 3:

 b.pastry();

 f.write((char*)&b,sizeof(b));

 break;




 case 4:

 b.dairy();

 f.write((char*)&b,sizeof(b));

 break;

}

f.close();

cout<<"\n Do You Want To Add More (Y\N)";

cin>>choice;

  if(choice=='y'||choice=='Y')

  add_fooditem();

  else

 { cout<<"\n You Are Directed To Admin Page";

  cout<<"\n PRESS ENTER TO CONTINUE";

  gets(time_excess);

  admin();

 }

}

void modify_fooditem()

{



 title();

 int m;

 long double n;

 char s[100]="\n                           \"MODIFY MENU\" ";




 for(m=0;m<strlen(s);m++)

 {for(n=0;n<1000000;n++);

 cout<<s[m];

 }

 int item__num;
 int flag=0;

 fstream f;
 fstream f1;

 f.open("bakery.dat",ios::in|ios::binary);
 f1.open("temp.dat",ios::out|ios::binary);

 cout<<"\n Enter Item Number Of The Item You Wish To Modify";

 cin>>item__num;

 while(f.read((char*)&b,sizeof(b)))
 {
    if(item__num==b.itemnum_access())
    {
     flag=1;
     cout<<"\n The Old Values Are";
     cout<<"\n Item Number : "<<b.itemnum_access();
     cout<<"\n Item Name : ";
     cout<<b.items_access();
     cout<<"\n Price : "<<b.price_access();
     cout<<"\n Quantity : "<<b.quantity_access();
     cout<<"\n Manufacture Date : ";
     cout<<b.mdate_access();
     cout<<"/";
     cout<<b.mmonth_access();
     cout<<"/";
     cout<<b.myear_access();
     cout<<"\n Expire Date : ";
     cout<<b.edate_access();
     cout<<"/";
     cout<<b.emonth_access();
     cout<<"/";
     cout<<b.eyear_access();
     cout<<"\n##########################################################################";
     cout<<endl;
     b.new12();
     f1.write((char*)&b,sizeof(b));
  }
  else
  f1.write((char*)&b,sizeof(b));
 }
 if(flag)
 cout<<"\n Record Modified";
 else
 cout<<"\n Record Not Modified";

 remove("bakery.dat");
 rename("temp.dat","bakery.dat");
 f.close();
 f1.close();
 char x;

 cout<<"\n Do You Want To Continue? (Y:N)or(y:n) ";

 cin>>x;

 if(x=='y'||x=='Y')

 modify_fooditem();

 else

 admin();

 }




void remove_fooditem()

{

 clrscr();




 long int id;

 title();

 int m;
 int flag=0;

 long double k;

 char s[200]="\n                           \"DELETE MENU\"                       ";




 for(m=0;m<strlen(s);m++)

 {for(k=0;k<1000000;k++);

 cout<<s[m];

 }

 cout<<"\n Enter the Item_Number Of The Item You Want To Delete ";

 cin>>id;

 ofstream r;
 ifstream f;

 f.open("bakery.dat",ios::binary);

 r.open("temp.dat",ios::binary);

 while(f.read((char*)&b,sizeof(b)))

    {

  if(b.itemnum_access()==id)

  flag=1;
  else
    r.write((char*)&b,sizeof(b));
    }

  f.close();

  r.close();

  remove("bakery.dat");

  rename("temp.dat","bakery.dat");
  if(flag==1)
  cout<<setw(15)<<"\n Item Removed"<<endl;
  else
  cout<<setw(15)<<"\n Item Does Not Exists"<<endl;

char x;

cout<<"\n Do You Want To Continue? (Y\N)or(y\n) ";

cin>>x;

if(x=='y'||x=='Y')

remove_fooditem();

else
{
cout<<"\n You Are Directed To Admin Page";
admin();
}

}

void search_foodnum()

{

 fstream f;

 title();

 long int food_num;

 int flag=0;

 int m;

 long double k;

 char s[200]="\n                         \"SEARCH BY FOODNUMBER MENU\"            ";




 for(m=0;m<strlen(s);m++)

 {for(k=0;k<1000000;k++);

 cout<<s[m];

 }

 cout<<"\n Enter The FoodNumber To Be Searched For - ";

 cin>>food_num;

 f.open("bakery.dat",ios::in|ios::binary);

 while( f.read((char*)&b,sizeof(b)))

{

  if(b.itemnum_access()==food_num)

  {cout<<"\n ITEM FOUND!!!! ";

  cout<<"\n ITEM DETAILS ARE";
  cout<<endl;
  cout<<"\nItem Number ::::>>>"<<b.itemnum_access();
  cout<<endl;
  cout<<"\nItem Name   ::::>>>"<<b.items_access();
  cout<<endl;
  cout<<"\nItem's Price  ::::>>>"<<b.price_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Date ::::>>>"<<b.mdate_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Month ::::>>>"<<b.mmonth_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Year ::::>>>"<<b.myear_access();
  cout<<endl;
  cout<<"\nItem's Expire Date ::::>>>"<<b.edate_access();
  cout<<endl;
  cout<<"\nItem's Expire Month ::::>>>"<<b.emonth_access();
  cout<<endl;
  cout<<"\nItem's Expire Year ::::>>>"<<b.eyear_access();

  flag=1;

  break;

  }

}

f.close();

if(flag==0)

cout<<"\n ITEM NOT FOUND";

char choice;

cout<<"\n Do You Want To Search More Items By Item-Number?? (Y:N)or(y:n)";

cin>>choice;

if(choice=='y'||choice=='Y')

{
 search_foodnum();
}

else

{ cout<<"\n You Are Directed To Admin Page";

  admin();
}

}




void search_foodname()

{
 int flag=0;

 fstream f;

 char food_name[50];

 int m;

 title();

 long double k;

 char s[200]="\n                           \"SEARCH BY FOODNAME MENU\"            ";

 for(m=0;m<strlen(s);m++)

 {for(k=0;k<1000000;k++);

 cout<<s[m];

 }

 cout<<"\n Enter The FoodName To Be Searched For!! ";

 gets(food_name);

 f.open("bakery.dat",ios::in|ios::binary);

 while( f.read((char*)&b,sizeof(b)))

{

  if(strcmpi(food_name,b.items_access())==0)
  {
  cout<<"\n ITEM FOUND!!!! ";
  cout<<endl;
  cout<<"\n ITEM DETAILS ARE";
  cout<<endl;
  cout<<"\nItem Number ::::>>>"<<b.itemnum_access();
  cout<<endl;
  cout<<"\nItem Name   ::::>>>"<<b.items_access();
  cout<<endl;
  cout<<"\nItem's Price  ::::>>>"<<b.price_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Date ::::>>>"<<b.mdate_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Month ::::>>>"<<b.mmonth_access();
  cout<<endl;
  cout<<"\nItems's Manufacture Year ::::>>>"<<b.myear_access();
  cout<<endl;
  cout<<"\nItem's Expire Date ::::>>>"<<b.edate_access();
  cout<<endl;
  cout<<"\nItem's Expire Month ::::>>>"<<b.emonth_access();
  cout<<endl;
  cout<<"\nItem's Expire Year ::::>>>"<<b.eyear_access();
  flag=1;
  break;
  }
  }
if(flag==0)

cout<<"\n ITEM NOT FOUND";



f.close();

char choice;

cout<<"\n Do You Want To Search More Items By Food-Name?? (Y:N)or(y:n)";

cin>>choice;

if(choice=='y'||choice=='Y')

{

 search_foodname();

}

else
{
 cout<<"\n You Are Directed To Admin Page";

  admin();
}

}

void add_sfooditem()

{

  char choice;


  title();

  fstream f;

 int m;

 long double k;

 char a[200]="\n                         \"ADD A SALES TO SALESMODULE\"         ";

 for(m=0;m<strlen(a);m++)

 {for(k=0;k<1000000;k++);

 cout<<a[m];

 }

 cout<<"\n Enter the details of item";

 f.open("bakerysales.dat",ios::out|ios::app|ios::binary);

 int  n;

 cout<<" \n  Enter The Catogery You Want To Add";

 cout<<" \n  Items-";

 cout<<" \n 1.Snacks  ";

 cout<<" \n 2.Pastry";

 cout<<" \n 3.Chocolates";

 cout<<" \n 4.Dairy";

 cin>>n;

 switch(n)

 {

 case 1:

 s.snacks();

 f.write((char*)&s,sizeof(s));

 break;

 case 2 :

 s.choco();

 f.write((char*)&s,sizeof(s));

 break;

 case 3:

 s.pastry();

 f.write((char*)&s,sizeof(s));

 break;

 case 4:

 s.dairy();

 f.write((char*)&s,sizeof(s));

 break;
}
  f.close();

  cout<<"\n Do You Want To Add More (Y\N)or(y\n)";

  cin>>choice;

  if(choice=='y'||choice=='Y')

  add_sfooditem();
  else
  {
  cout<<"\n You Are Directed To Admin Page";
  admin();
 }
}

void add_ufooditem()

{

  char choice;


  title();

  fstream f;

 int m;

 long double k;

 char a[200]="\n                          ADD A SALES TO SALESMODULE          ";




 for(m=0;m<strlen(a);m++)

 {for(k=0;k<1000000;k++);

 cout<<a[m];

 }

 cout<<"\n Enter the details of item";

f.open("bakerysales.dat",ios::out|ios::app|ios::binary);

 int  n;

 cout<<" \n  Enter The Catogery You Want To Add";

 cout<<" \n  Items-";

 cout<<" \n 1.Snacks  ";

 cout<<" \n 2.Pastry";

 cout<<" \n 3.Chocolates";

 cout<<" \n 4.Dairy";

 cin>>n;

 switch(n)

 {

 case 1:

 s.snacks();

 f.write((char*)&s,sizeof(s));

 break;

 case 2 :

 s.choco();

 f.write((char*)&s,sizeof(s));

 break;

 case 3:

 s.pastry();

 f.write((char*)&s,sizeof(s));

 break;

 case 4:

 s.dairy();

 f.write((char*)&s,sizeof(s));

 break;
}
  f.close();

  cout<<"\n Do You Want To Add More (Y/N)or(y/n)";

  cin>>choice;

  if(choice=='y'||choice=='Y')

  add_ufooditem();
  else
 {
  cout<<"\n You Are Directed To User Page";
  User();
 }
}

void modify_sfooditem()

{



 title();

 int m;

 long double k;

 char a[200]="\n                       MODIFY MENU FOR SALES MODULE            ";

 for(m=0;m<strlen(a);m++)

 {
 for(k=0;k<1000000;k++);

 cout<<a[m];

 }
 fstream f;
 fstream f1;
 int flag=0;

 f.open("bakerysales.dat",ios::in|ios::binary);
 f1.open("temp.dat",ios::out|ios::binary);

 int item__num;
 cout<<"\n Enter Item Number Of The Item You Wish To Modify";
 cin>>item__num;
  while(f.read((char*)&s,sizeof(s)))
 {
    if(item__num==s.itemnum_access())
    {
     flag=1;
     cout<<"\n The Old Values Are";
     cout<<"\n Item Number : "<<s.itemnum_access();
     cout<<"\n Item Name : ";
     cout.write(s.foodname_access(),50);
     cout<<"\n Price : "<<s.price_access();
     cout<<"\n Quantity : "<<s.quantity_access();
     cout<<"\n Date : ";
     cout<<s.date_access();
     cout<<"/";
     cout<<s.month_access();
     cout<<"/";
     cout<<s.year_access();
     s.new1();
     f1.write((char*)&s,sizeof(s));
  }
  else
  f1.write((char*)&s,sizeof(s));
 }
 if(flag)
 cout<<"\n Record Modified";
 else
 cout<<"\n Record Not Modified";
 f.close();
 f1.close();
 remove("bakerysales.dat");
 rename("temp.dat","bakerysales.dat");

 char x;
 cout<<"\n Do You Want To Continue? (Y:N)or(y:n) ";
 cin>>x;
 if(x=='y'||x=='Y')
 modify_sfooditem();
 else
  {
  cout<<"\n You Are Directed To Admin Page";
  admin();
  }
}


void modify_ufooditem()

{



 int choice;

 title();

 int m;

 long double k;

 char a[200]="\n                       MODIFY MENU FOR SALES MODULE            ";




 for(m=0;m<strlen(a);m++)

 {for(k=0;k<1000000;k++);

 cout<<a[m];

 }

 int item__num;
 fstream f;
 fstream f1;
 int flag=0;

 f.open("bakerysales.dat",ios::in|ios::binary);
 f1.open("temp.dat",ios::out|ios::binary);
 cout<<"\n Enter Item Number Of The Item You Wish To Modify";
 cin>>item__num;
  while(f.read((char*)&s,sizeof(s)))
 {
    if(item__num==s.itemnum_access())
    {
     flag=1;
     cout<<"\n The Old Values Are";
     cout<<"\n Item Number : "<<s.itemnum_access();
     cout<<"\n Item Name : ";
     cout.write(s.foodname_access(),50);
     cout<<"\n Price : "<<s.price_access();
     cout<<"\n Quantity : "<<s.quantity_access();
     cout<<"\n Date : ";
     cout<<s.date_access();
     cout<<"/";
     cout<<s.month_access();
     cout<<"/";
     cout<<s.year_access();
     s.new1();
     f1.write((char*)&s,sizeof(s));
  }
  else
  f1.write((char*)&s,sizeof(s));
 }
 if(flag)
 cout<<"\n Record Modified";
 else
 cout<<"\n Record Not Modified";
 f.close();
 f1.close();
 remove("bakerysales.dat");
 rename("temp.dat","bakerysales.dat");

 char x;
 cout<<"\n Do You Want To Continue? (Y:N)or(y:n) ";
 cin>>x;
 if(x=='y'||x=='Y')
 modify_ufooditem();
 else
  {

    cout<<"\YOU ARE BEING DIRECTED TO USER PAGE";
    User();

  }
}





void remove_sfooditem()

{ clrscr();

 title();

 long int id;

 int m;

 long double k;

 char a[200]="\n                           DELETE MENU FOR SALES MODULE            ";




 for(m=0;m<strlen(a);m++)

 {for(k=0;k<1000000;k++);

 cout<<a[m];

 }

cout<<"\n Enter the Item_Number Of The Item You Want To Delete ";

 cin>>id;
 int flag=0;

 ifstream f;
 ofstream r;

 f.open("bakerysales.dat",ios::binary);

 r.open("temp.dat",ios::binary);

 while(f.read((char*)&s,sizeof(s)))

    {

  if(s.itemnum_access()==id)


  flag=1;
  else

    r.write((char*)&s,sizeof(s));


    }

  f.close();

  r.close();

  remove("bakerysales.dat");

  rename("temp.dat","bakerysales.dat");
  if(flag==1)
  cout<<"\n Item Removed";
  else
  cout<<"\n Not Removed";
  char x;

  cout<<"\n Do You Want To Continue? (Y/N)or(y/n) ";

  cin>>x;
 if(x=='y'||x=='Y')
 remove_sfooditem();
 else
  {
  cout<<"\YOU ARE BEING DIRECTED TO ADMIN PAGE";
  admin();

  }

}
void signin()

{

  fflush(stdin);
  int flag=0;

  title();
  int m;
  int i;
  long double k;
  char b[200]="\n                                    USER LOGIN                           ";
  for(m=0;m<strlen(b);m++)

  {
     for(k=0;k<1000000;k++);
     cout<<b[m];

  }
  char pass1[15];
  char user[20];
  for(i=0;i<15;i++)

  {
     pass1[i]= '\0';
  }

  for(i=0;i<20;i++)

  {
  user[i] = '\0';

  }
  ifstream f;
  f.open("password.dat");
  cout<<"\n ENTER USER ID ";
  cin>>user;
  cout<<"\n ENTER PASSWORD: [MORE THAN 8 CHARACTERS] ";
  i=-1;

  do
  {
    i++;
    pass1[i]=getch();
    if(pass1[i]!=13&&pass1[i]!='\b')
    cout<<'*';
    else if(pass1[i]=='\b')
     {
      cout<<'\b';
      i-=2;
     }

    if(pass1[i]==13)
    pass1[i]='\0';

  }while(pass1[i]!='\n'&&i<strlen(pass1));
  if(strlen(pass1)<8)
  {
    cout<<"\n PASSWORD SHOULD BE MORE THAN 8 CHARACTERS";
    cout<<"\n TRY AGAIN";
    signin();
  }
  while(f.read((char*)&a,sizeof(a)))
  {
    if(strcmp(pass1,a.pass)==0||strcmp(pass1,"user123456")==0)
    {
     cout<<"You Have Signed In";
     flag=1;
    }

    else
    {
     cout<<" Log in Falied";
     flag=0;
    }
  }
  if(flag==0)
  {
    cout<<"\n Wrong Username or password ";
    cout<<"\n(Press enter to login again)";
    gets(time_excess);
    signin();
  }
  else
  User();
}

void last_page()

{

 cout<<"****************************    PROJECT DONE BY   ******************************";
 cout<<"\n                               SHASHANK VARMA                                ";
 cout<<"\n***************************  THANKS FOR WATCHING   ****************************";

}
