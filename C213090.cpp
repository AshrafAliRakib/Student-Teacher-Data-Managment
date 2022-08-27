/*******************************************************************************

                   * 2BM SECOND PROJECT
                   * PROJECT NAME :- TEACHER INFORMACTION & STUDENT INFORMACTION
                   * ASSALAMU ALAIKUM WA RAHMATULLAH
                   * MY ID IS-----C213090-------

********************************************************************************/

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <iomanip>
//#define M 100
//#define MAX 100
using namespace std;

class teacher
{
private:

   char t_name[20];
   char t_depart[20];
   char t_des[20];
   int t_id;

public:
     char *getTdepart()
    {
        return t_depart;
    }
    char *getTname()
    {
        return t_name;
    }
    int getTeacherId()
    {
        return t_id;
    }
    teacher()
    {

    }
    teacher(char teacherName[20],char TeacherDepartment[20], char TeacheDesignation[20], int TeacherID )
    {

        strcpy(t_name,teacherName);
        strcpy(t_depart,TeacherDepartment);
        strcpy(t_des,TeacheDesignation);
        t_id=TeacherID;
    }
    void getDetailsTeacher()
    {
       cout<<"Enter Teacher Name : ";
       cin>>t_name;
       cout<<"Enter Teacher Department : ";
       cin>>t_depart;
       cout<<"Enter Teacher  Designation : ";
       cin>>t_des;
       cout<<"Enter Teacher ID : (1X) ";
       cin>>t_id;
    }
    void showDetailsTeacher()
    {
       cout<<"Teacher Name : "<<t_name<<endl;

       cout<<"Teacher Department : "<<t_depart<<endl;

       cout<<"Teacher Designation : "<<t_des<<endl;

       cout<<"Teacher ID : "<<t_id<<endl;
    }


};

class student
{

private:

   int  s_id;
   char s_name[20];
   char s_depart[20];
   char s_section[20];
   char teacher_name[20];

public:


    int getStudentId()
    {
        return s_id;
    }
    student()
    {

    }
    student(int StudentID, char StudentName[20], char studentDepartment[20],char Section[20],char TName[20] )
    {
         s_id=StudentID;
         strcpy(s_name,StudentName);
         strcpy(s_depart,studentDepartment);
         strcpy(s_section,Section);
         strcpy(teacher_name,TName);
         //s_name=StudentName;
         //s_depart=studentDepartment;
       //  s_section=Section;
       //  teacher_name=TName;

    }
    void getDataStudent()
    {
       cout<<"Enter Student ID : ";

       cin>>s_id;

       cout<<"Enter Student Name : ";

       cin>>s_name;

       cout<<"Enter Student Department : ";

       cin>>s_depart;

       cout<<"Enter Student Section : ";

       cin>>s_section;

       cout<<"Enter Teacher Name :  ";

       cin>>teacher_name;
    }

    void showDataStudent()
    {
       cout<<"Student Id : "<<s_id<<endl;

       cout<<"Student Name : "<<s_name<<endl;

       cout<<"Student Department : "<<s_depart<<endl;

       cout<<"Student Section : "<<s_section<<endl;

       cout<<"Teacher Name :  "<<teacher_name<<endl;
    }



};




void menu()
{
        cout<<"------------------------- Wellcome To IIUC ------------------------"<<endl;

        cout<<"------------ Wellcome Student & Teacher Managment System  ------- "<<endl;

        cout<<"---------------- Press   1     Register New Teacher  -------------------- "<<endl;

        cout<<"---------------- Press   2     Register New Student ----------------------"<<endl;

        cout<<"---------------- Press   3     Show Teacher All Data  ------------------- "<<endl;

        cout<<"---------------- Press   4     Show Student All Data  -------------------- "<<endl;

        cout<<"---------------- Press   5     Search Enter Teachers ID  ---------------- "<<endl;

        cout<<"---------------  Press   6     Search Enter Student ID  ------------------"<<endl;

        cout<<"---------------  Press   7     Search Enter Teachers Name ----------------"<<endl;

        cout<<"---------------  Press   8     Search Enter Teachers Deaprtment --------"<<endl;

        cout<<"---------------  Press   0     -----------------EXIT---------"<<endl;

        cout<<endl;

       //cout<<" "<<s_depart<<endl;

      // cout<<"Enter Section : "<<s_section<<endl;

       //cout<<"Teacher Name :  "<<teacher_name<<endl;
}
int main()
{
    //cout << "Hello World";
    int v,w,flag=0,fl=0;
    teacher s[80];
    student p[80];

    int n=0,ch;
    do
    {
        system("cls");
        menu();
        cin>>ch;
        switch(ch)
        {
            case 1: s[n].getDetailsTeacher();n++;
            cout<<"---------- Record Saved ----------"<<endl;
            break;

            case 2: p[n].getDataStudent();n++;
            cout<<"---------- Record Saved ---------"<<endl;
            break;

            case 3:
            if(n>0)
            {
                for(int i=1;i<=n;i++)
                {
                    s[i].showDetailsTeacher();

                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            break;
            case 4:
            if(n>0)
            {
                for(int i=1;i<=n;i++)
                {
                    p[i].showDataStudent();
                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            break;

            case 5:

            cout<<"Enter Teacher ID : "<<endl;
            cin>>v;
            if(n>0)
            {
                for(int i=1;i<=n;i++)
                {
                   if(v==s[i].getTeacherId())
                   {
                       s[i].showDetailsTeacher();
                       flag++;
                   }

                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            if(flag==0)
            {
                cout<<"No Surch ID Found In Record"<<endl;
            }
            break;

            case 6 :
            cout<<"Enter Student ID : "<<endl;
            cin>>w;
            if(n>0)
            {
                for(int i=1;i<=n;i++)
                {
                   if(w==p[i].getStudentId())
                   {
                       p[i].showDataStudent();
                       fl++;
                   }

                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            if(fl==0)
            {
                cout<<"No Surch ID Found In Record"<<endl;
            }
            break;

            case 7:
            //int nmt;
            char nmt[20];
            cout<<"Enter Teacher Name "<<endl;
            cin>>nmt;
            if(n>0)
            {

               for(int i=1;i<=n;i++)
                {
                    //note strcmpi i means ignore case (case ignore hoba)
                   if(strcmpi(nmt,s[i].getTname())==0)
                   {
                       s[i].showDetailsTeacher();
                   }

                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            if(fl==0)
            {
                cout<<"No Surch ID Found In Record"<<endl;
            }
            break;

            case 8 :
                {

            char Tdepart[20];
            cout<<"Enter Teacher Department  "<<endl;
            cin>>Tdepart;
            if(n>0)
            {

               for(int i=1;i<=n;i++)
                {
                    //note strcmpi i means ignore case (case ignore hoba)
                   if(strcmpi(Tdepart,s[i].getTdepart())==0)
                   {
                       s[i].showDetailsTeacher();
                       flag++;
                   }

                }
            }
            else
            {
                cout<<"No data Found In Record"<<endl;
            }
            if(flag==0)
            {
                cout<<"No Surch ID Found In Record"<<endl;
            }



            }
            break;

        }
        system("pause");

    }while(ch);



  return 0;
}


