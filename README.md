# Clinic Management System

## Overview
The Clinic Management System is a C program designed to efficiently manage patient records, appointments, and reservations in a clinic setting. The system provides both admin and user modes to cater to the needs of different users, ensuring secure access and streamlined functionality.

## Features

### Admin Mode

1. *Password Protection*: The admin mode requires a password for access, enhancing security. The default password is '1234', with three attempts allowed before system closure.

2. *Add New Patient Record*: Admins can easily add new patient records by providing essential details such as name, age, gender, and a unique ID. Duplicate ID entries are rejected by the system.

3. *Edit Patient Record*: Admins have the ability to edit patient information by entering the patient's ID. The system allows for seamless updates to patient details, ensuring data accuracy.

4. *Reserve a Slot with the Doctor*: Admins can reserve appointment slots with the doctor for patients. Available slots are provided, and once reserved, they become unavailable for subsequent bookings to avoid scheduling conflicts.

5. *Cancel Reservation*: Admins can cancel existing reservations by entering the patient's ID, making the reserved slot available for future bookings.

### User Mode

1. *View Patient Record*: User mode allows users to view patient records by entering the patient's ID. Basic patient information is displayed, providing easy access to relevant data.

2. *View Today’s Reservations*: Users can conveniently view today's reservations, including patient IDs attached to each reserved slot, facilitating efficient appointment management.

## Usage Instructions
1. *Admin Mode*: Upon launch, enter the password ('1234' by default) to access admin functionalities. Follow on-screen prompts to add, edit, reserve, or cancel patient reservations.

2. *User Mode*: No password is required for user mode. Enter the patient's ID to view their record or check today's reservations.

## Video Demo
[![Click to Watch the Video](https://img.icons8.com/color/48/000000/youtube-play.png)](https://www.youtube.com/watch?v=tGc1CG4IDHg)

## License
This project is licensed under the [MIT License](LICENSE), allowing for free distribution and modification of the Clinic Management System while providing attribution to the original authors.

---

The Clinic Management System provides a comprehensive solution for managing clinic operations efficiently. For any inquiries or support, please contact the project maintainers.
