#include<stdio.h>
#include<stdlib.h>
#include "linked.h"
#include "clinic.h"

// ADMIN
void add_patient(void)
{
	unsigned short int scanid = 0 ;
	patient* res = NULL ;
	printf("Add new patien\n");
	    printf("enetr patient ID     :");
	scanf("%d",&scanid);
	res = search_element(ID_type,scanid);
	if(res == NULL)
	{
		patient* user = add_element();
		printf("Enter patient Name   :");
		scanf(" %[^\n]", user->Name);
		printf("Enter patient age    :");
		scanf("%d",&(user->Age));
		printf("Enter patient gender :");
		scanf(" %c",&(user->Gender));
		user->ID = scanid ;
	}
	else
	{
		printf("reject ID (not allowed used ID)\n");
	}
}
void edit_patientinfo(void)
{
	patient* res = NULL ;
	unsigned short int scanid = 0 ; 
	printf("Edit patien info\n");
	printf("Enter patient ID :");
	scanf("%d",&scanid);
	res = search_element(ID_type,scanid);
	if(res != NULL)
	{

        int edittype = 0 ; 
		printf(" Name      : %s \n",res->Name);
		printf(" Age       : %d \n",res->Age);
		printf(" Gender    : %c \n",res->Gender);
		printf(" Time Slot : %d \n",res->time_slot);
		printf("select the element that you want to edit \n");
        printf(" 1. Name \n");
		printf(" 2. Age \n");
		printf(" 3. Gender \n");
		printf("enter your choice :");
		scanf("%d",&edittype);
		switch(edittype)
		{
			case 1 :
			    printf ("Enter new name :");
				scanf(" %[^\n]",&(res->Name));
				break ;
				case 2 :
			    printf ("Enter new age :");
				scanf("%d",&(res->Age));
				break ;
				case 3 :
			    printf ("Enter new Gender :");
				scanf(" %c",&(res->Gender));
				break ;
				default:
				printf("not option");
				break;
		}
		
	}
	else
	{
		printf("invailde ID");
	}
}
void reserve_slotpatient(void)
{
	patient* res = NULL ;  
	unsigned short int chooseslot = 0 ; 
	unsigned short int scanid = 0 ; 
	int count = 0 ;
	for (count = 1 ; count <= 5 ; count ++ )
	{
		res = search_element(Timeslot_type,count);
		if(res == NULL)
		{

			switch(count)
			{
				case 1 :printf("slot from 2 to 2:30 available press 1 \n"); break ;
				case 2 :printf("slot from 2:30 to 3 available press 2 \n"); break ;
				case 3 :printf("slot from 3 to 3:30 available press 3 \n"); break ;
				case 4 :printf("slot from 4 to 4:30 available press 4 \n"); break ;
				case 5 :printf("slot from 4:30 to 5 available press 5 \n"); break ;
			}
		}
	}
    printf("\n\nEnter the ID :");
	scanf("%d",&scanid);
	res = search_element(ID_type,scanid);
	if(res != NULL)
	{
		printf("\nEnter the slot you want :");
		scanf("%d",&(res->time_slot));  
		printf("DONE\n");
	}
	else
	{
		printf("ID is not found \n");
	}
}

void cancel_slotpatient(void)
{
	patient* res = NULL ;
		unsigned short int scanid = 0 ;
	printf("Enter the ID :");
	scanf("%d",&scanid);
	res = search_element(ID_type , scanid);
	if(res != NULL)
	{
		res->time_slot = 0 ; 
		printf("DONE\n");
	}
	else
	{
		printf("ID is not found \n ");
	}

}


//USER
void viewpatientinfo()
{
     patient* res = NULL ; 
     unsigned short int scanid = 0 ; 
	 printf("Enter your ID :");
	 scanf("%d",&scanid);
	 res = search_element(ID_type,scanid);
	 if ( res != NULL )
	 {
		 printf(" Name      : %s \n",res->Name);
		 printf(" Age       : %d \n",res->Age);
		 printf(" Gender    : %c \n",res->Gender);
		 printf(" ID        : %d \n",res->ID);
				switch(res->time_slot)
			{
				case 1 :printf(" Time slot : from 2 to 2:30 \n"); break ;
				case 2 :printf(" Time slot : from 2:30 to 3 \n"); break ;
				case 3 :printf(" Time slot : from 3 to 3:30 \n"); break ;
				case 4 :printf(" Time slot : from 4 to 4:30 \n"); break ;
				case 5 :printf(" Time slot : from 4:30 to 5 \n"); break ;
			}
		 
	 }
	 else
	 {
		 printf("ID not found \n");
	 }
}
void view_reserv()
{
	patient* temp =  NULL ;
    temp =  getstart() ;
	while(temp != NULL)
	{
		if (temp->time_slot != 0)
		{
			switch(temp->time_slot)
			{
				case 1 :printf("slot from 2 to 2:30 selected\n"); break ;
				case 2 :printf("slot from 2:30 to 3 selected\n"); break ;
				case 3 :printf("slot from 3 to 3:30 selected\n"); break ;
				case 4 :printf("slot from 4 to 4:30 selected\n"); break ;
				case 5 :printf("slot from 4:30 to 5 selected\n"); break ;
			}
		}
			temp = temp->next ;
		
	}
}
