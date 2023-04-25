
#include <iostream>

using namespace std;

int main()

{


string uname;
string pass;
string uname1;
string pass1;
double abal;
string ubal;
double bal1;
string ans;
double bal;

//creating username password

   cout<<"__________HELLO WELCOME TO cofforderer___________"<<endl;
   cout<<endl;
   cout<<"Please Create a new Account"<<endl;
   cout<<endl;

cout<<"Choose a Username: ";
cin>>uname;
cout<<endl;
cout<<"Choose a Password: ";
cin>>pass;
cout<<endl;

//verifying username password

cout<<"                ## Please Enter your Information ##      "<<endl;
cout<<endl;
cout<<"Enter Username: ";
cin>>uname1;
cout<<endl;
cout<<"Enter Password: ";
cin>>pass1;
cout<<endl;

while(uname1!=uname||pass1!=pass)
{
  cout<<"Invalid Username or Password Please Try Again !!" <<endl;

 cout<<"Enter Username: ";
 cin>>uname1;
 cout<<endl;

 cout<<"Enter Password: ";
 cin>>pass1;
 cout<<endl;

}

cout<<"..WELCOME.."<<endl;
cout<<endl;
abal=150.00;
cout<<"Your Previous Balance is: "<<abal<<" Rs";
cout<<endl;
cout<<"Would you like to add more balance ?(Y/N)"<<endl;
cin>>ubal;

if(ubal=="Y"||ubal=="y")
{
    cout<<"Enter the Amount: ";
    cin>>bal1;
    cout<<endl;

    cout<<"Your Updated Balance Is: "<<abal+bal1<<" Rs";
    bal=abal+bal1;

    cout<<endl;
}
else
{   cout<<endl;
    cout<<"Alright"<<endl;
    cout<<endl;
    cout<<"Balance Is "<<abal<<"Rs"<<endl;
    bal=abal;
}
cout<<endl;
cout<<"Would you Like a Coffee?(Y/N): ";
cin>>ans;
cout<<endl;

if(ans=="Y"||ans=="y")
{
    cout<<"Please Select Which Coffee You want "<<endl;
    cout<<endl;

    string coarray[]={"Espresso","Classic Filter Coffee","Toffee Latte","Macchiato","Ethiopian Coffee"};
    double cocost[]={116,126,183,142,186};

    cout<<"1."<<coarray[0]<<" --> "<<cocost[0]<<"Rs"<<endl;
    cout<<"2."<<coarray[1]<<" --> "<<cocost[1]<<"Rs"<<endl;
    cout<<"3."<<coarray[2]<<" --> "<<cocost[2]<<"Rs"<<endl;
    cout<<"4."<<coarray[3]<<" --> "<<cocost[3]<<"Rs"<<endl;
    cout<<"5."<<coarray[4]<<" --> "<<cocost[4]<<"Rs"<<endl;
    cout<<endl;

    cout<<"Your Choice:- ";
    int ch;
    cin>>ch;

while(ch>5||ch<1)
{
    cout<<"Please Enter Valid Input!"<<endl;
    cout<<"Your Choice:- ";
    cin>>ch;
}

  if(ch==1)
  {
      cout<<"You Have Ordered a "<<coarray[0]<<" Amounting "<<cocost[0]<<" Rs "<<endl;
      cout<<endl;
      cout<<"You Have "<<bal-cocost[0]<<" Rs "<<" left"<<endl;
      cout<<endl;
      cout<<"!!THANKYOU FOR ORDERING!!! "<<endl;
  }
  else if(ch==2)
  {
     cout<<"You Have Ordered a "<<coarray[1]<<" Amounting "<<cocost[1]<<" Rs "<<endl;
      cout<<endl;
      cout<<"You Have "<<bal-cocost[1]<<" Rs "<<" left"<<endl;
      cout<<endl;
      cout<<"!!THANKYOU FOR ORDERING!!! "<<endl;
  }
 else if(ch==3)
  {
      cout<<"You Have Ordered a "<<coarray[2]<<" Amounting "<<cocost[2]<<" Rs "<<endl;
      cout<<endl;
      cout<<"You Have "<<bal-cocost[2]<<" Rs "<<" left"<<endl;
      cout<<endl;
      cout<<"!!THANKYOU FOR ORDERING!!! "<<endl;
  }
  else if(ch==4)
  {
     cout<<"You Have Ordered a "<<coarray[3]<<" Amounting "<<cocost[3]<<" Rs "<<endl;
      cout<<endl;
      cout<<"You Have "<<bal-cocost[3]<<" Rs "<<" left"<<endl;
      cout<<endl;
      cout<<"!!THANKYOU FOR ORDERING!!! "<<endl;
  }
  else if(ch==5)
  {
     cout<<"You Have Ordered a "<<coarray[4]<<" Amounting "<<cocost[4]<<" Rs "<<endl;
      cout<<endl;
      cout<<"You Have "<<bal-cocost[4]<<" Rs "<<" left"<<endl;
      cout<<endl;
      cout<<"!!THANKYOU FOR ORDERING!!! "<<endl;;
  }


else
{
    cout<<"Alright Have a Good Day";
}
cout<<"Have a Good Day";
}
return 0;
}






