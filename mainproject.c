#include<stdio.h>
#include<stdlib.h>
#include"clinic.h"
#include"linked.h"

void main()
{
	int red = 0 ;
	int flag = 0 ;
	do
	{
     system("cls");
	 int mode = 0 ; 
	 int feature = 0 ; 
	 int pass = 0 ; 
	 
	 int password = 1234 ;
	 printf(" Enter mode please \n 1.Admin mode \n 2.user mode\n\n Enter your choice :");
	 scanf("%d",&mode);
	 if(mode == 1 )
	 { 
       printf(" Enter the password please:");
	   do 
	   {
	   scanf("%d",&pass);
	   if(pass == password)
	   {
 
		do
		{
		system("cls");
		printf("       [Admin mode]\n\nselect the feature you want\n  1. Add new patient record\n  2. Edit patient record\n  3. Reserve a slot with the doctor\n  4. Cancel reservation\n\n  Enter your choice :");
        scanf("%d",&feature);
		if(feature == 1 )
		{
		add_patient();	
		}
		else if (feature == 2)
		{
			edit_patientinfo();
		}
		else if (feature == 3)
		{
			reserve_slotpatient();
		}
		else if (feature == 4)
		{
			cancel_slotpatient();
		}
		printf("press  any number to stay at Admin mode \npress 0 if you want to leave \n\n Enter your choice:");
		scanf("%d",&feature);
        }while(feature != 0);		
		}
		else 
		{    
	        flag++ ;
			if(flag<3)
			{
				printf("incorrect password try agian:");
			}
			
		}
	 }while(flag<3 && pass != password);
	 }
	 else if (mode == 2 )
	 {
		 do
		 {
		 system("cls");
		 printf("    [User mode]\n\nselect the feature you want\n  1. View patient record\n  2. View today's reservations\n\n  Enter your choice :");
		 scanf("%d",&feature);
		 if(feature == 1 )
		 {
		 viewpatientinfo(); 
		 }
		 else if (feature == 2)
		 {
            view_reserv();
		 }
		printf("press  any number to stay at User mode \npress 0 if you want to leave \n\n Enter your choice:");
		scanf("%d",&feature);
        }while(feature != 0);
	 }
	 else
	 {
		printf("not valide option \ntry agina");
	 }	
       if (flag < 3 )
	   {	
         system("cls");   
        printf("press  any number to Back to main menu \npress 0 if you want to close program \n\n Enter your choice:");
		scanf("%d",&red);
       }
	}while(red != 0);
}
	
