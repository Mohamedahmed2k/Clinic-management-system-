#ifndef _CLINIC_H_
#define _CLINIC_H_

typedef enum
{
	notreg,
	slot2=1,
	slot2_30,
	slot3,
	slot4,
	slot4_30
}timeslot ;

void add_patient(void);
void edit_patientinfo(void);
void reserve_slotpatient(void);
void cancel_slotpatient(void);

void viewpatientinfo();
void view_reserv();



#endif