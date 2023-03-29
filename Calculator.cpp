#include<iostream>
#include<string>
#include"bitmap.h"
using namespace std;

Student::Student()
{
	// code here
	int rn,a1[5],a2[5],a3[5],a4[5],a5[5],s,tot;
	float avg;
	char name[20];
		
}

Student::Student(int r, const char *nm, int m1, int m2, int m3, int m4, int m5) // here m1,m2,m3,m4 and m5 are marks in each subject
{
	// code here
	rn = r;
	strcpy(name,nm);
	a1 = m1;
	a2 = m2;
	a3 = m3;
	a4 = m4;
	a5 = m5;



}

void Student::Accept()
{
	// code here
    cout<<"\n\n enter the marks of a1";
	cin>>a1;
	cout<<"\n\n enter the marks of a2";
	cin>>a2;
	cout<<"\n\n enter the marks of a3";
	cin>>a3;
	cout<<"\n\n enter the marks of a4";
	cin>>a4;
	cout<<"\n\n enter the marks of a5";
	cin>>a5;

}


void Student::Display()
{
	// code here

}

float Student::calcAverage()
{
	float avg;
	// code here
	tot=a1+a2+a3+a4+a5;
	avg=tot/2;
	cout<<"\n average :"<<avg;

	return avg;
}

char Student::calcGrade()
{
	char grade;
	// code here
	marks=a1=a2=a3=a4=a5;
	if(marks>=60)
	cout<<"\n grade A";
	elif(marks>=50&&marks<60)
	cout<<"\n grade b";
	elif(marks>=40&&marks<50)
	cout<<"\n grade c";
	else
	cout<<"\n grade d";


	return grade;
}

int Student::highestMarks()
{
	int highest;
	// code here
	float mark[5] = {m1,m2,m3,m4,m5}; 
         int i; 
         float sum = 0, highest = 0; 
        //  clrscr(); 
         for (i = 0; i < 10; i++) 
              { 
                 sum += mark[i]; 
                 if (mark[i] > highest) 
                         highest = mark[i]; 
              } 
         average = sum / 10.0;
	return highest;
}

int Student::lowestMarks()
{
	int lowest;
	// code here
	int highest;
	// code here
	float mark[10] = {45.6, 78.4, 65.9, 58.3, 82.1, 44.5, 61.8, 53.6, 49.2, 37.7}; 
         int i; 
         float sum = 0, average, highest = 0; 
        //  clrscr(); 
         for (i = 0; i < 10; i++) 
              { 
                 sum += mark[i]; 
                 if (mark[i] > highest) 
                         highest = mark[i]; 
              } 

	return lowest;
}



void main()
{
	int r,a1,a2,a3,a4,a5;
	char nm[20];

	cout<<"\n enter the name: ";
	cin>>nm;
	cout<<"\n enter roll no: ";
	cin>>r;
	cout<<"\n enter the marks of m1 :";
	cin>>m1;
    cout<<"\n enter the marks of m2 :";
	cin>>m2;
	cout<<"\n enter the marks of m3 :";
	cin>>m3;
	cout<<"\n enter the marks of m4 :";
	cin>>m4;
	cout<<"\n enter the marks of m5 :";
	cin>>m5;
	student st(r,nm,m1,m2,m3,m4,m5);
	st.get();
	st.disp();

	return 0;
}


















