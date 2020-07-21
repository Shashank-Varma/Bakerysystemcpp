#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
class bakerys
{
 public:
 long int itemnum;
 char items[100];
 float price;
 int quantity;
 char mdate[10];
 char edate[10];
}b;
class sales
{
public:
char Date[10];
long int Item_Number;
char Food_Name[50];
int Quantity;
float Price;
double Total_Cost;
}s;
int flag_loggedin=0;
char user_name[50];
char time_excess[2];
void homepage();
void options();
void title();
void loading();
void search_item();
void search_foodnum();
void search_foodname();
void signin();
void add_sfooditem();
void remove_sfooditem();
void modify_sfooditem();
void admin_login();
void admin();
void add_fooditem();
void remove_fooditem();
void modify_fooditem();
void view();
void user();
void last_page();
void report();

void main()
{
  homepage();

}
void homepage()
{
fflush(stdin);
int i,j;
 for(i=0;i<4;i++)
 { cout<<'\n';
    for(j=0;j<80;j++)
    cout<<"*";
 }
cout<<"\n                           _____           _____     ______      ";
cout<<"\n            |      |      |     |  |   |  |     |   |         ";
cout<<"\n            |      |      |     |   | |   |      |  |______   ";
cout<<"\n            |      |      |     |    |    |      |         |  ";
cout<<"\n            |_____ |_____ |_____|    |    |_____|    ______|  ";
cout<<"\n                                                              ";
 for(i=0;i<4;i++)
 { cout<<'\n';
    for(j=0;j<80;j++)
    cout<<"*";
 }
cout<<"\nPRESS ENTER TO CONTINUE";
 gets(time_excess);
 clrscr();
 options();
 fflush(stdin);

}
void title()
{
 int i,j;
 for(i=0;i<2;i++)
{  cout<<'\n';
    for(j=0;j<80;j++)
    cout<<"*";
}
cout<<"                                \" LLOYDS BAKERY \"\n ";
for(i=0;i<2;i++)
{  cout<<'\n';
    for(j=0;j<80;j++)
    cout<<"*";
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
{ fflush(stdin);
  title();

int choice;
cout<<"\n                                  \"OPTION MENU\"            \n ";
cout<<"\n SELECT YOUR OPTION";
cout<<"\n 1. ADMIN LOGIN    2.USER LOGIN  3.REPORT[SALES MADE]  ";
cin>>choice;
  switch(choice)
  { case 1:clrscr();
              admin_login();
              break;
     case 2:clrscr();
              signin();
              break;
     case 3:clrscr();
              report();
              break;
     default:last_page();
  }
fflush(stdout);
 loading();
cout<<" PRESS ENTER TO  CONTINUE ";
 gets(time_excess);
 clrscr();
}


void admin_login()
{
fflush(stdin);
fstream f;
int i, flag=0;
title();
for(i=0;i<33;i++)
cout<<" ";
cout<<" ADMIN LOGIN \n";
for(i=0;i<80;i++)
cout<<"*";

char userid[10],password[8];
for(i=0;i<8;i++)
{

 password[i]= '\0';
 }
for(i=0;i<10;i++)
{

userid[i] = '\0';
 }
cout<<"Enter your admin user id: ";
cin>>userid;
cout<<"Enter password: max 8 char ";
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
}while(password[i]!='\n'&&i<8);

 if(strcmp(password,"12345678")==0)
 {cout<<"\n You have signed in sucessfully";
  clrscr();
  admin();
  flag=1;
 }
 else
 flag=0;
  int y=0;
  if(flag==0)
  {  y++;
      cout<<"\n Wrong Username or password (MAX 4 ATTEMPTS)";
      if(y<4)
      {  cout<<"\n(Press enter to login again)";
          gets(time_excess);
          admin_login();
      }
      else
      {
        cout<<"\n More than 4 attempts";
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
  int k,j;
  for(k=0;k<80;k++)
  cout<<"*";
  cout<<"                                  ADMIN FUNCTIONS                     \n ";
  for(j=0;j<80;j++)
  cout<<"*";
  cout<<"\n What do you want to access";
  cout<<"\n 1.INVENTORY MODULE";
  cout<<"\n 2.SALES MODULE";
  cout<<"\n Enter Your Choice:";
  cin>>choice1;
  switch(choice1)
  {
  case 1:
  cout<<"\n What do u want to do? ";
  cout<<"\n 1.Create Food Item";
  cout<<"\n 2.Modify Food Item";
  cout<<"\n 3.Delete Food Item";
  cout<<"\n 4.Search On Food Number";
  cout<<"\n 5.Search on Food Name";
  cout<<"\n 6.View All Transactions";
  cout<<"\n Choose Your Option";
  cin>>choice;
  switch(choice)
  { case 1:clrscr();
             loading();
             add_fooditem();
             break;
     case 2:clrscr();
             loading();
             modify_fooditem();
             break;
     case 3:clrscr();
             loading();
             remove_fooditem();
             break;
     case 4:clrscr();
             loading();
             search_foodnum();
             break;
     case 5: clrscr();
                loading();
                search_foodname();
             break;
     case 6:clrscr();
              loading();
              view();
              break;
     default: last_page();
  }
  break;
  case 2:
  cout<<"\n What do u want to do? ";
  cout<<"\n 1.Create A Sales";
  cout<<"\n 2.Modify A Sales";
  cout<<"\n 3.Delete A Sales";
  cin>>choice2;
  switch(choice2)
  {
     case 1:clrscr();
             loading();
             add_sfooditem();
             break;
     case 2:clrscr();
             loading();
             modify_sfooditem();
             break;
     case 3:clrscr();
             loading();
             remove_sfooditem();
             break;
     default: last_page();
  }
  break;
 }

}
void add_fooditem()
{ int i;
  char choice;
  title();
  fstream f;
  for(i=0;i<80;i++)
  cout<<"*";
  cout<<"\n                                ADD A FOODITEM                    \n ";
  for(i=0;i<80;i++)
  cout<<"*";
  cout<<"\n Enter the details of item";
  cout<<"\n 1.Item number";
  cin>>b.itemnum;
  cout<<"\n 2.Items [Snacks/Pastry/Chocolates& Dessert/Cheese & Dairy]";
  gets(b.items);
  cout<<"\n 3.Price of Item";
  cin>>b.price;
  cout<<"\n 4.Quantity";
  cin>>b.quantity;
  cout<<"\n 5.Manufacture Date";
  gets(b.mdate);
  cout<<"\n 6.Expire Date";
  gets(b.edate);
  f.open("bakery",ios::out|ios::app|ios::binary);
  f.write((char*)&b,sizeof(b));
  f.close();
  cout<<"\n Do You Want To Add More (Y\N)or(y\n)";
  cin>>choice;
  if(choice=='y'||choice=='Y')
  add_fooditem();
  else
 { cout<<"\n You Are Directed To Admin Page";
  loading();
  cout<<"\n PRESS ENTER TO CONTINUE";
  gets(time_excess);
  admin();
 }
}


void modify_fooditem()
{
 int choice;
 title();
 cout<<"\n                                 MODIFY MENU                       \n ";
 for(int i=0;i<80;i++)
 cout<<"*";
 int item__num;
 cout<<"\n Enter Item Number Of The Item You Wish To Modify";
 cin>>item__num;
 cout<<"\n What Do You Want To Change? ";
 cout<<"\n 1.Items";
 cout<<"\n 2.Price";
 cout<<"\n 3.Quantity";
 cout<<"\n 4.Manufacture Date";
 cout<<"\n 5.Expire Date ";
 cout<<"\n Enter Your Choice";
 cin>>choice;
 fstream f,r;
 switch(choice)
 {   case 1:
                 char ite[100];
                 f.open("bakery",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&b,sizeof(b)))
                 {
                  if(b.itemnum==item__num)
                  {cout<<"\n Enter the Item Name You Wanted To Change To ";
                    gets(ite);
                    strcpy(b.items,ite);
                    r.write((char*)&b,sizeof(b));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&b,sizeof(b));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakery");
                 rename("temp","bakery");
                 break;
      case 2:
                float pri;
                f.open("bakery",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&b,sizeof(b)))
                 {
                  if(b.itemnum==item__num)
                  {cout<<"\n Enter the Price You Wanted To Change To ";
                    cin>>pri;
                    b.price=pri;
                    r.write((char*)&b,sizeof(b));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&b,sizeof(b));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakery");
                 rename("temp","bakery");
                 break;
      case 3:
              int Qua;
              f.open("bakery",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&b,sizeof(b)))
                 {
                  if(b.itemnum==item__num)
                  {cout<<"\n Enter the Quantity You Wanted To Change To ";
                    cin>>Qua;
                    b.quantity=Qua;
                    r.write((char*)&b,sizeof(b));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&b,sizeof(b));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakery");
                 rename("temp","bakery");
                 break;
      case 4:
                 char datee[10];
                 f.open("bakery",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&b,sizeof(b)))
                 {
                  if(b.itemnum==item__num)
                  {cout<<"\n Enter the Manufactue Date You Wanted To Change To ";
                    gets(datee);
                    strcpy(b.mdate,datee);
                    r.write((char*)&b,sizeof(b));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&b,sizeof(b));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakery");
                 rename("temp","bakery");
                 break;
      case 5:
                 char datem[10];
                 f.open("bakery",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&b,sizeof(b)))
                 {
                  if(b.itemnum==item__num)
                  {cout<<"\n Enter the Expire Date You Wanted To Change To ";
                    gets(datem);
                    strcpy(b.edate,datem);
                    r.write((char*)&b,sizeof(b));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&b,sizeof(b));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakery");
                 rename("temp","bakery");
                 break;
 }
char x;
cout<<"\n Do You Want To Continue? (Y\N)or(y\n) ";
cin>>x;
if(x=='y'||x=='Y')
modify_fooditem();
}

void remove_fooditem()
{
 clrscr();
 int i;
 long int id;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                                 DELETE MENU                       \n ";
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n Enter the Item_Number Of The Item You Want To Delete ";
 cin>>id;
 fstream f,r;
 f.open("bakery",ios::in|ios::binary);
 r.open("temp",ios::out|ios::binary);
    while(f.read((char*)&b,sizeof(b)))
      {
        if(b.itemnum==id)
        r.write((char*)&b,sizeof(b));
        else
        cout<<"\n Entered Item_Number Doesnot Match With Any Item";
      }
  f.close();
  r.close();
  remove("bakery");
  rename("temp","bakery");
char x;
cout<<"\n Do You Want To Continue? (Y\N)or(y\n) ";
cin>>x;
if(x=='y'||x=='Y')
remove_fooditem();
}


void view()
{
 fstream f;
 int i;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                                 VIEW MENU                       \n ";
 for(i=0;i<80;i++)
 cout<<"*";
 cout<< "\n                        ALL ITEMS AVAILABLE ARE                  \n";
 int j=0;
 f.open("bakery",ios::in|ios::binary);
 while(f.read((char*)&b,sizeof(b)))
{
 cout<<"\nITEM"<<++j<<":";
 cout<<"\nItem Number ::::>>>"<<b.itemnum;
 cout<<"\nItem Name   ::::>>>"<<b.items;
 cout<<"\nItem's Price  ::::>>>"<<b.price;
 cout<<"\nItems's Manufacture Date ::::>>>"<<b.mdate;
 cout<<"\nItem's Expire Date ::::>>>"<<b.edate;
}
f.close();
cout<<"PRESS ENTER";
gets(time_excess);
}


void search_foodnum()
{
 fstream f;
 long int food_num;
 int i;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                             SEARCH BY FOODNUMBER MENU                      \n  ";
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n Enter The FoodNumber To Be Searched For!! ";
 cin>>food_num;
 f.open("bakery",ios::in|ios::binary);
 while(!f.eof())
{ f.read((char*)&b,sizeof(b));
  if(b.itemnum==food_num)
  {cout<<"\n ITEM FOUND!!!! ";
    cout<<"\n ITEM DETAILS ARE";
    cout<<"\nItem Number ::::>>>"<<b.itemnum;
    cout<<"\nItem Name   ::::>>>"<<b.items;
    cout<<"\nItem's Price  ::::>>>"<<b.price;
    cout<<"\nItems's Manufacture Date ::::>>>"<<b.mdate;
    cout<<"\nItem's Expire Date ::::>>>"<<b.edate;
    break;
  }
  else
  cout<<"\n ITEM NOT FOUND";
}
f.close();
char choice;
cout<<"\n Do You Want To Search More Items By Number?? (Y\N)or(y\n)";
cin>>choice;
if(choice=='y'||choice=='Y')
{cout<<"PRESS ENTER";
 gets(time_excess);
 search_foodnum();
}
}

void search_foodname()
{
 fstream f;
 char food_name[50];
 int i;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                             SEARCH BY FOODNAME MENU                       \n ";
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n Enter The FoodName To Be Searched For!! ";
 gets(food_name);
 f.open("bakery",ios::in|ios::binary);
 while(!f.eof())
{ f.read((char*)&b,sizeof(b));
  if(strcmpi(food_name,b.items)==0)
  {cout<<"\n ITEM FOUND!!!! ";
    cout<<"\n ITEM DETAILS ARE";
    cout<<"\nItem Number ::::>>>"<<b.itemnum;
    cout<<"\nItem Name   ::::>>>"<<b.items;
    cout<<"\nItem's Price  ::::>>>"<<b.price;
    cout<<"\nItems's Manufacture Date ::::>>>"<<b.mdate;
    cout<<"\nItem's Expire Date ::::>>>"<<b.edate;
    break;
  }
  else
  cout<<"\n ITEM NOT FOUND";
}
f.close();
char choice;
cout<<"\n Do You Want To Search More Items By Name?? (Y\N)or(y\n)";
cin>>choice;
if(choice=='y'||choice=='Y')
{cout<<"PRESS ENTER";
 gets(time_excess);
 search_foodname();
}
}

void add_sfooditem()
{ int i;
  char choice;
  title();
  fstream f;
  for(i=0;i<80;i++)
  cout<<"*";
  cout<<"\n                                ADD A SALES TO SALESMODULE                  \n  ";
  for(i=0;i<80;i++)
  cout<<"*";
  cout<<"\n Enter the details of item";
  cout<<"\n 5.Date";
  gets(s.Date);
  cout<<"\n 1.Item number";
  cin>>s.Item_Number;
  cout<<"\n 2.Items [Snacks/Pastry/Chocolates& Dessert/Cheese & Dairy]";
  gets(s.Food_Name);
  cout<<"\n 3.Price of Item";
  cin>>s.Price;
  cout<<"\n 4.Quantity";
  cin>>s.Quantity;
  cout<<"\n 6.Total_Cost Calculated";
  s.Total_Cost=s.Price*s.Quantity;
  f.open("bakerysales",ios::out|ios::app|ios::binary);
  f.write((char*)&s,sizeof(s));
  f.close();
  cout<<"\n Do You Want To Add More (Y\N)or(y\n)";
  cin>>choice;
  if(choice=='y'||choice=='Y')
  add_sfooditem();
  else
 { cout<<"\n You Are Directed To Admin Page";
  loading();
  cout<<"\n PRESS ENTER TO CONTINUE";
  gets(time_excess);
  admin();
 }
}

void modify_sfooditem()
{
 int choice;
 title();
 cout<<"\n                               MODIFY MENU FOR SALES MODULE                     \n  ";

 int item__num;
 cout<<"\n Enter Item Number Of The Item You Wish To Modify";
 cin>>item__num;
 cout<<"\n What Do You Want To Change? ";
 cout<<"\n 1.Food Name";
 cout<<"\n 2.Price";
 cout<<"\n 3.Quantity";
 cout<<"\n 4.Date";
 cout<<"\n 5.Total Cost ";
 cout<<"\n Enter Your Choice";
 cin>>choice;
 fstream f,r;
 switch(choice)
 {   case 1:
                 char ite[100];
                 f.open("bakerysales",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&s,sizeof(s)))
                 {
                  if(s.Item_Number==item__num)
                  {cout<<"\n Enter the Food Name You Wanted To Change To ";
                    gets(ite);
                    strcpy(s.Food_Name,ite);
                    r.write((char*)&s,sizeof(s));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&s,sizeof(s));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakerysales");
                 rename("temp","bakerysales");
                 break;
      case 2:
                float pri;
                f.open("bakerysales",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&s,sizeof(s)))
                 {
                  if(s.Item_Number==item__num)
                  {cout<<"\n Enter the Price You Wanted To Change To ";
                    cin>>pri;
                    s.Price=pri;
                    r.write((char*)&s,sizeof(s));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&s,sizeof(s));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakerysales");
                 rename("temp","bakerysales");
                 break;
      case 3:
              int Qua;
              f.open("bakerysales",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&s,sizeof(s)))
                 {
                  if(s.Item_Number==item__num)
                  {cout<<"\n Enter the Quantity You Wanted To Change To ";
                    cin>>Qua;
                    s.Quantity=Qua;
                    r.write((char*)&s,sizeof(s));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&s,sizeof(s));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakerysales");
                 rename("temp","bakerysales");
                 break;
      case 4:
                 char datee[10];
                 f.open("bakerysales",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&s,sizeof(s)))
                 {
                  if(s.Item_Number==item__num)
                  {cout<<"\n Enter the Manufactue Date You Wanted To Change To ";
                    gets(datee);
                    strcpy(s.Date,datee);
                    r.write((char*)&s,sizeof(s));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&s,sizeof(s));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakerysales");
                 rename("temp","bakerysales");
                 break;
      case 5:
                 double tp;
                 f.open("bakerysales",ios::in|ios::binary);
                 r.open("temp",ios::out|ios::binary);
                 while(f.read((char*)&s,sizeof(s)))
                 {
                  if(s.Item_Number==item__num)
                  {cout<<"\n Enter the Total Price You Wanted To Change To ";
                    cin>>tp;
                    s.Total_Cost=tp;
                    r.write((char*)&s,sizeof(s));
                    cout<<"\n Modification Done";
                  }
                  else
                  { cout<<"\n No Item With Entered Item Number Found";
                    r.write((char*)&s,sizeof(s));
                  }
                 }
                 f.close();
                 r.close();
                 remove("bakerysales");
                 rename("temp","bakerysales");
                 break;

 }
char x;
cout<<"\n Do You Want To Continue? (Y\N)or(y\n) ";
cin>>x;
if(x=='y'||x=='Y')
modify_sfooditem();
}

void remove_sfooditem()
{ clrscr();
 int i;
 long int id;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                                 DELETE MENU FOR SALES MODULE                      \n ";
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n Enter the Item_Number Of The Item You Want To Delete ";
 cin>>id;
 fstream f,r;
 f.open("bakerysales",ios::in|ios::binary);
 r.open("temp",ios::out|ios::binary);
    while(f.read((char*)&s,sizeof(s)))
      {
        if(s.Item_Number==id)
        r.write((char*)&s,sizeof(s));
        else
        cout<<"\n Entered Item_Number Doesnot Match With Any Item";
      }
  f.close();
  r.close();
  remove("bakerysales");
  rename("temp","bakerysales");
char x;
cout<<"\n Do You Want To Continue? (Y\N)or(y\n) ";
cin>>x;
if(x=='y'||x=='Y')
remove_sfooditem();
}

void signin()
{
fflush(stdin);
fstream f;
int i, flag=0;
title();
for(i=0;i<33;i++)
cout<<" ";
cout<<"                                                USER LOGIN                              \n";
for(i=0;i<80;i++)
cout<<"*";
char userid[10],password[7];
for(i=0;i<7;i++)
{

 password[i]= '\0';
 }
for(i=0;i<10;i++)
{

userid[i] = '\0';
}

cout<<"Enter your username: ";
gets(userid);
strcpy(user_name,userid);
cout<<"Enter password: [max 7 char] ";
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
     if(password[i]==13)
         password[i]='\0';
     }while(password[i]!='\n'&&i<10);
  if(strcmp(password,"1234567")==0)
 {user();
  flag=1;
 }
  else
  flag=0;
    int y=0;
    if(flag==0)
  {  y++;
      cout<<"\n Wrong Username or password (MAX 4 ATTEMPTS)";
      if(y<4)
      {  cout<<"\n(Press enter to login again)";
          gets(time_excess);
          signin();
      }
      else
      {
        cout<<"\n More than 4 attempts";
        cout<<"\n You are being directed to the last page";
        last_page();
      }
  }

}

void user()
{ int choice;
  clrscr();
  title();
  int k,j;
  for(k=0;k<80;k++)
  cout<<"*";
  cout<<"                                  USER FUNCTIONS FOR SALES MODULES                   \n ";
  for(j=0;j<80;j++)
  cout<<"*";
  cout<<"\n What do u want to do? ";
  cout<<"\n 1.Create A Sales";
  cout<<"\n 2.Modify A Sales";
  cin>>choice;
  switch(choice)
  {
    case 1:
            cout<<"\n You are being directed to Create A Sales Menu";
            loading();
            add_sfooditem();
             break;
    case 2:
            cout<<"\n You are being directed to Modify A Sales Menu ";
            loading();
            modify_sfooditem();
            break;
    default: last_page();
  }
}


void report()
{

 clrscr();
 int i;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n                                            REPORT MENU             \n";
 for(i=0;i<80;i++)
 cout<<"*";
 ifstream f,r;
 double total=0;
 int Qua=0;
 f.open("bakerysales",ios::binary);
 while( f.read((char*)&s,sizeof(s)))
 {
  cout<<"\n The Details Below Are:";
  cout<<"\n Date Of Sales";
  cout<<s.Date;
  cout<<"\n Item Number";
  cout<<s.Item_Number;
  cout<<"\n Food Number";
  cout<<s.Food_Name;
  cout<<"\n Quantity";
  cout<<s.Quantity;
  cout<<"\n Price";
  cout<<s.Price;
  cout<<"\n Total Cost";
  cout<<s.Total_Cost;
  total+=s.Total_Cost;
  r.open("bakery",ios::binary);
  while( f.read((char*)&b,sizeof(b)))
  {
  Qua=b.quantity-s.Quantity;
  }
}
f.close();
r.close();
cout<<"\n TOTAL SALES MADE=====>";
cout<<total;
cout<<"\n TOTAL QUANTITY LEFT====>";
cout<<Qua;
clrscr();
}

void last_page()
{
int i;
 for(i=0;i<80;i++)
 cout<<"*";
 cout<<"\n****                         THANKS FOR VIEWING OUR PROJECT             *******";
 cout<<"\n****                                                                    *******";
 cout<<"\n****   DONE BY:                                                         *******";
 cout<<"\n**** 1.SHASHANK VARMA  *******";
 cout<<"\a ";
 cout<<"\a ";
 cout<<"\a ";
 cout<<"\a ";
 cout<<"\a ";
 cout<<"\n THANK YOU";
}
