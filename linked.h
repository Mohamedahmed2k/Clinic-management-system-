#ifndef _LINKED_H_
#define _LINKED_H_
#define ID_type  1
#define Timeslot_type  2
typedef struct node
{
	char Gender ;
	unsigned char Age ;
	unsigned short int ID ;
	unsigned short int time_slot ;
	struct node * next ; 
	char Name[20] ;   
}patient;

patient* creat_element();
patient* add_element();
patient* search_element(char Type,unsigned short int value);
patient* getstart();

#endif