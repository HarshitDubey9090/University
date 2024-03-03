#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


struct student
{
 string name;
 string Registration;
 string branch;
 string year;
 string phone_no;
 string addrs;
}studentData;


struct teacher
{
 string name;
 string qualification;
 string branch;
 string subj;
 string cel_no;
 string lec;
 string serves;

}tech[50];


int main()
{
	int login();
	login();

int i=0,j;
char choice;
string find;
string srch;

while(1)
{
 system("cls");


 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t  MAHARAJA RANJIT SINGH PUNJAB TECHNICAL UNIVERSITY\n\n";
 cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t:MAIN SCREEN:\n\n";
 cout<<"\t\t\t1. Student Section"<<endl;
 cout<<"\t\t\t2. Teacher Section"<<endl;
 cout<<"\t\t\t3. Exit Program"<<endl;
  cout<<"\n\n\t\tEnter your choice: ";
 cin>>choice;

system("cls");

switch(choice)
{

case '1':
 {
while(1)
{
system("cls");

cout<<"\t\tSTUDENT INFORMATION DATA SECTION\n\n\n";
cout<<"\t\t\t1. Register new student\n";
cout<<"\t\t\t2. Search and display student\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\t\t\tNEW ENTRY\n\n";
 cout<<"\t\t\tEnter name: ";
 cin>>studentData.name;
 cout<<"\n\t\t\tEnter Registration number: ";
 cin>>studentData.Registration;
 cout<<"\n\t\t\tEnter Branch: ";
 cin>>studentData.branch;
 cout<<"\n\t\t\tEnter Year: ";
 cin>>studentData.year;
 cout<<"\n\t\t\tEnter Phone_No: ";
 cin>>studentData.phone_no;
cout<<"\n\t\t\tEnter Address: ";
 cin>>studentData.addrs;
 f1<<studentData.name
 <<endl<<studentData.Registration<<endl<<studentData.branch<<endl<<studentData.year<<endl<<studentData.phone_no<<endl<<studentData.addrs<<endl;
 cout<<"\n\n\t\t\tDo you want to enter data: ";
 cout<<"\n\t\t\tPress Y for Continue and N to Finish:  ";
 cin>>choice;
}
}
f1.close();
}
continue;

case '2':
{  ifstream f2("student.txt");
system("CLS");
cout<<"\n\t\tDISPLAY STUDENT'S DATA\n";
cout<<"\n\t\t\tEnter name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

getline(f2,studentData.name);

if(studentData.name==find)
{
 notFound = 1;
 cout<<"\n\t\t\tName: "<<studentData.name<<endl;
 
 cout<<"\n\t\t\tRegistration Number: "<<studentData.Registration<<endl;

 cout<<"\n\t\t\tBranch: "<<studentData.branch<<endl<<endl;
 
  cout<<"\n\t\t\tYear: "<<studentData.year<<endl<<endl;
  
   cout<<"\n\t\t\tPhone_No: "<<studentData.phone_no<<endl<<endl;
   
    cout<<"\n\t\t\tAddress: "<<studentData.addrs<<endl<<endl;
}

}


if(notFound == 0){

cout<<"\n\t\tNO STUDENT OF SUCH NAME IS INROLLED WITH THE ABOVE DETAILS...."<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();
getch();

}
continue;

case '3':
{
break;
}
}

break;
}
continue;
}

case '2':
{
while(1)
{
system("cls");

cout<<"\t\tTEACHER INFORMATION DATA SECTION\n\n\n";
cout<<"\t\t\t1. Register new teacher\n";
cout<<"\t\t\t2. Search and display teacher\n";
cout<<"\t\t\t3. Back to main menu\n";
cout<<"\n\n\t\tEnter your choice: ";
cin>>choice;

switch (choice)
{
case '1':
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\t\t\tEnter Name: ";
  cin>>tech[i].name;
  cout<<"\n\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\tEnter Branch: ";
  cin>>tech[i].branch;
  cout<<"\n\t\t\tEnter Subject:";
  cin>>tech[i].subj;
  cout<<"\n\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;
  cout<<"\n\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\tEnter Year of teaching in this college: ";
  cin>>tech[i].serves;
 
 
  t1<<tech[i].name
   <<tech[i].qualification<<endl<<tech[i].branch<<endl
   <<tech[i].subj<<endl<<tech[i].cel_no<<endl<<tech[i].lec
   <<endl<<tech[i].serves<<endl;
  cout<<"\n\n\t\t\tDo you want to enter data: ";
  cin>>choice;
 }
}

system("cls");

t1.close();
}

continue;

case '2':
{
ifstream t2("teacher.txt");
system("CLS");
cout<<"\n\t\tDISPLAY TEACHER'S DATA\n";
cout<<"\n\t\t\tEnter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech[j].name);

 if(tech[j].name==find)
 {
  notFound = 1;
  cout<<"\n\t\t\tName: "<<tech[j].name<<endl;
  getline(t2,tech[j].name);
  
  getline(t2,tech[j].qualification);
  cout<<"\n\t\t\tQualification: "<<tech[j].qualification<<endl;
  
  getline(t2,tech[j].branch);
  cout<<"\n\t\t\tBranch: "<<tech[j].branch<<endl;

  getline(t2,tech[j].subj);
  cout<<"\n\t\t\tSubject: "<<tech[j].subj<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"\n\t\t\tPhone_No: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].lec);
  cout<<"\n\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].serves);
  cout<<"\n\t\t\tYear of taching in this college: "<<tech[j].serves<<endl;

 }//if

}
t2.close();
if(notFound == 0){

 cout<<"\n\t\tNo Teacher of such name with above details i"<<endl;
}
cout<<"Press any key two times to proceed";
getch();
getch();
}

continue;

case '3':
{
break;
}

}

break;
}

continue;
}

case '3':
{
	
break;
}
}
break;
}
}


int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t   MAHARAJA RANJIT SINGH PUNJAB TECHNICAL UNIVERSITY \n\n";
   cout<<"\t\t\t------------------------------";
   cout<<"\n\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t------------------------------\n\n";
   cout << "\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "mrsptu"){
      cout << "\n\n\n\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\tAccess Aborted...\n\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
