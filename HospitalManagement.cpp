/*
##################################################################################
##################################################################################
##################################################################################
# This  Software is opensource and free to use for every one out there, also     #
# Every one can Modify it , Just Never Ever Change The Name of Real Author.      #
#                                                                                #
# As This is Written as My second Semester Project at CBA College Jhang.         #
#                                                                                #
# Author: Muhammad Adeel | Founder UrduSecurity (c) 2014                         #
# Mail :  Chaudhary1337@gmail.com                                                #
# Blog :  http://UrduSecurity..blogspot.com                                      #
#                                                                                #
# Under 'MIT' License (c) 2014 >> Muhammad Adeel                                 #
##################################################################################
##################################################################################
##################################################################################
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

//    Author: Muhammad Adeel
//    Mail - Chaudary1337@gmail.com
//    Blog - http://urdusecurity.blogspot.com



int main()
{
    
    cout << "\n\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t# This  Software is opensource and free to use for every one out there, also     #\n";
    cout << "\t\t\t\t# Every one can Modify it , Just Never Ever Change The Name of Real Author.      #\n";
    cout << "\t\t\t\t#                                                                                #\n";
    cout << "\t\t\t\t# As This is Written as My second Semester Project at CBA College Jhang.         #\n";
    cout << "\t\t\t\t#                                                                                #\n";
    cout << "\t\t\t\t# Author: Muhammad Adeel | Founder UrduSecurity (c) 2014                         #\n";
    cout << "\t\t\t\t# Mail :  Chaudhary1337@gmail.com                                                #\n";
    cout << "\t\t\t\t# Blog :  http://UrduSecurity..blogspot.com                                      #\n";
    cout << "\t\t\t\t#                                                                                #\n";
    cout << "\t\t\t\t# Under 'MIT' License (c) 2014 >> Muhammad Adeel                                 #\n";
    cout << "\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t##################################################################################\n";
    cout << "\t\t\t\t##################################################################################\n";
    char cnfrm[5];
    cout << "\n\n\t\t\t\tWelcome to 'Automated Hospital Database Managment System', Enter Your Name Please >>  ";
    cin >> cnfrm;

    FILE *fp, *ft;
    char another, choice;

    struct student
    {
        char Patient_name[50], Disease_name[50];
        char Blood_Group[10];
        double Cont_No;
        int Patient_ID;
    };

    struct student e;
    char xPatient_name[50];
    char xPatient_name1[50];
    long int recsize;

    fp=fopen("Database.txt","rb+");

    if (fp == NULL)
    {
        fp = fopen("Database.txt","wb+");

        if (fp==NULL)
        {
            puts("Cannot open file");
            return 0;
        }
    }


    recsize = sizeof(e);

    while(1)
    {
        system("clear");
        cout << "\n\t\t================================================\n";
				cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
				cout << "\t\t======       Author: Muhammad Adeel       ======\n";
				cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
				cout << "\t\t================================================\n";
				cout <<"\n\n                                          ";
        cout << "\n\n";
        cout << "\n \t\t\t==============================\n";
        cout << "\n \t\t\t 1. Add Patient Data";
        cout << "\n \t\t\t==============================\n";
        cout << "\n \t\t\t 2. View Patient Database";
        cout << "\n \t\t\t==============================\n";
        cout << "\n \t\t\t 3. Modify Patient Database";
        cout << "\n \t\t\t==============================\n";
        cout << "\n \t\t\t 4. Delete Database";
        cout << "\n \t\t\t==============================\n";
        cout << "\n \t\t\t 5. Exit Programme";
        cout << "\n \t\t\t==============================\n";
        cout << "\n\n";
        cout << "\t\t\t (Select Your Choice)>  ";        
        fflush(stdin);
        choice = getchar();
        switch(choice)
        {
        case '1' :
            fseek(fp,0,SEEK_END);
            another ='Y';
            while(another == 'Y' || another == 'y')
            {
                system("clear");
                cout << "\t\t================================================\n";
                cout << "\t\t+                Control Panel                 +\n";
                cout << "\t\t================================================\n";
    			    	cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
          			cout << "\t\t======       Author: Muhammad Adeel       ======\n";
    				    cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
    				    cout << "\t\t================================================\n";
                cout << "Enter the Patient ID   : ";
                cin >> e.Patient_ID;
                cout << "Enter the Patient Name : ";
                cin >> e.Patient_name;
                cout << "Enter the Disease Name : ";
                cin >> e.Disease_name;
                cout << "Enter the Blood Group  : ";
                cin >> e.Blood_Group;
                cout << "Enter Contact Number   : ";
                cin >> e.Cont_No;
                cout << "\n Add Another Record (Y/N) ";
                fflush(stdin);
                fwrite(&e,recsize,1,fp);
                another = getchar();
            }
            break;
        case '2':
            system("clear");
            rewind(fp);
            cout << "\t\t================================================\n";
            cout << "\t\t+                Control Panel                 +\n";
            cout << "\t\t================================================\n";
			    	cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
      			cout << "\t\t======       Author: Muhammad Adeel       ======\n";
				    cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
				    cout << "\t\t================================================\n";
            cout << "\t\t=== View the Records in the Database ===";
            cout << "\n";
            while (fread(&e,recsize,1,fp) == 1)
            {
                cout << "\n+++++++++++++++++++++++++++\n";
                cout << "Patient ID: " << e.Patient_ID << endl;
                cout << "Patient Name: " << e.Patient_name << endl;
                cout << "Disease Name: " << e.Disease_name << endl;
                cout << "Patient Blood Group: " << e.Blood_Group << endl;
                cout << "Patient Contact Number: " <<e.Cont_No << endl;
                cout << "+++++++++++++++++++++++++++\n";
            }
            char x;
            cout << "\n\nType 'back' to Go Back >> ";
            cin >> x;
            //system("pause");
            break;

        case '3' :
            system("clear");
            another = 'Y';
            while (another == 'Y'|| another == 'y')
            {
                cout << "\t\t================================================\n";
                cout << "\t\t+                Control Panel                 +\n";
                cout << "\t\t================================================\n";
				        cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
		    	     	cout << "\t\t======       Author: Muhammad Adeel       ======\n";
    				    cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
			        	cout << "\t\t================================================\n";
                cout << "\n Enter Name of the Patient : ";
                cin >> xPatient_name;

                rewind(fp);
                while (fread(&e,recsize,1,fp) == 1)
                {
                    if (strcmp(e.Patient_name,xPatient_name) == 0)
                    {
                        cout << "Enter the Patient ID   : ";
                        cin >> e.Patient_ID;
                        cout << "Enter the Patient Name : ";
                        cin >> e.Patient_name;
                        cout << "Enter the Disease Name : ";
                        cin >> e.Disease_name;
                        cout << "Enter the Blood Group  : ";
                        cin >> e.Blood_Group;
                        cout << "Enter Contact Number   : ";
                        cin >> e.Cont_No;
                        fseek(fp, - recsize, SEEK_CUR);
                        fwrite(&e,recsize,1,fp);
                        break;
                    }
                    else
                        cout<<"record not found";
                }
                cout << "\n Modify Another Record (Y/N) ";
                fflush(stdin);
                another = getchar();
            }
            break;


        case '4':
            system("clear");
            another = 'Y';
            while (another == 'Y'|| another == 'y')
            {
                cout << "\t\t================================================\n";
                cout << "\t\t+                Control Panel                 +\n";                
                cout << "\t\t================================================\n";
	         			cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
	  		   	    cout << "\t\t======       Author: Muhammad Adeel       ======\n";
		    		    cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
    				    cout << "\t\t================================================\n";
                cout << "\n Enter the Name of Patient to delete : ";
                cin >> xPatient_name1;

                ft = fopen("temp.dat", "wb");

                rewind(fp);
                while (fread (&e, recsize,1,fp) == 1)

                    if (strcmp(e.Patient_name,xPatient_name1) != 0)
                    {
                        fwrite(&e,recsize,1,ft);
                    }
                fclose(fp);
                fclose(ft);
                remove("Database.txt");
                rename("temp.dat","Database.txt");

                fp=fopen("Database.txt","rb+");

                cout << "\n Delete Another Record (Y/N) ";
                fflush(stdin);
                another = getchar();
            }

            break;

        case '5':
            fclose(fp);
            cout << "\n\n";
            cout << "\t\t================================================\n";
            cout << "\t\t+                   Good Bye                   +\n";
            cout << "\t\t================================================\n";
	    			cout << "\t\t====== HOSPTAL DATABASE MANAGEMENT SYSTEM ======\n";
			    	cout << "\t\t======       Author: Muhammad Adeel       ======\n";
     				cout << "\t\t======   Mail - Chaudhary1337@gmail.com   ======\n";
	    			cout << "\t\t================================================\n";
            cout << "\n\n";
            exit(0);
        }
    }


    system("pause");
    return 0;
}
