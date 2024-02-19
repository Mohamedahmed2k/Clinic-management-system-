#include<stdio.h>
#include<stdlib.h>
#include"linked.h"


static patient* start = NULL ;

patient* creat_element()
{
	return (patient*)malloc(sizeof(patient));
}
patient* add_element()
{
	patient* E = creat_element();
	E->next = NULL ;
	if(start == NULL)
	{
		start  = E ;
		return E ;
	}
	else
	{
		patient* temp = start ;
		while(temp->next != NULL)
		{
			temp = temp->next ;
		}
		temp->next = E ;
		return E ;
	}
}
patient* search_element(char Type,unsigned short int value)
{
	patient* temp = NULL;
   if(start != NULL)
   {
	   temp = start ;
	   if(Type == ID_type)
	   {
		   while(temp != NULL)
		   {
			   if(temp->ID == value)
			   {
				   return temp ;
			   }
			   else
			   {
				   temp = temp->next ;
			   }
		   }
	   }
	   else if (Type == Timeslot_type )
	   {
		   while(temp != NULL)
		   {
			   if(temp->time_slot == value)
			   {
				   return temp ;
			   }
			   else
			   {
				   temp = temp->next ;
			   }
		   }
	   }		   
   }	
    return NULL ;   
}

patient* getstart()
{
	return start ;
}