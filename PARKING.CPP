#include<iostream.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void rickshaw();
void showdata();
void Delete();
int nob=0, nor=0, noc=0, amount=0, count=0;
void main()
{
int b;
do
{
clrscr();
switch(menu())
{
case 1:
bus();
break;
case 2:
cycle();
break;
case 3:
rickshaw();
break;
case 4:
showdata();
break;
case 5:
Delete();
break;
default:
cout<<"Dear Sir, You have selected a wrong keyword"<<endl;
}
cout<<"TO ADD MORE VEHICLE DETAILS PLEASE PRESS 0 ELSE ANY NUMBER FOR EXIT"<<endl;
cout<<"ENTER YOUR CHOICE=";
cin>>b;
}
while(b==0);
cout<<"THANK YOU PLEASE VISIT AGAIN"<<endl;

getch();
}
int menu()
{
int ch;
cout<<"--------------------------" <<endl;
cout<<"PRESS 1 FOR BUS CHARGES IS 100 INR"<<endl;
cout<<"PRESS 2 FOR CYCLE CHARGES IS 70 INR"<<endl;
cout<<"PRESS 3 FOR RICKSHAW CHARGES IS 50 INR"<<endl;
cout<<"PRESS 4 TO SEE THE RECORD"<<endl;
cout<<"PRESS 5 TO DELETE THE RECORD"<<endl;
cout<<"PRESS 6 FOR EXIT"<<endl;

cout<<"--------------------------"<<endl;
cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
cin>>ch;
return ch;
}
void bus()
{
nob++;
amount=amount+100;
count++;

}
void cycle()
{
noc++;
amount=amount+70;
count++;

}
void rickshaw()
{
nor++;
amount=amount+50;
count++;
}
void showdata()
{
cout<<"-------------------------"<<endl;
cout<<"TOTAL NO OF BUSES IN PARKING="<<nob<<endl;
cout<<"TOTAL NO OF CYCLE IN PARKING="<<noc<<endl;
cout<<"TOTAL NO OF RICKSHAW IN PARKING="<<nor<<endl;
cout<<"TOTAL NO OF VEHICLES IN PARKING="<<count<<endl;
cout<<"TOTAL AMOUNT COLLECTED="<<amount<<endl;
cout<<"__________________________________________________"<<endl;

}
void Delete()
{
nob=0;
noc=0;
nor=0;
amount=0;
count=0;
}