# CS-303-A2Q2
Class Heirarchies

README FILE - Employee Class Heirarchy Program

This program consists of an Employee base class with two derived classes, Professional and NonProfessional. 

Employee contains shared attributes among professional and non-professional employees (name, employee id, type of employee) and has accessors for each of those attributes. Employee also declares 3 virtual functions which are redifined for specificity in the derived classes. 

The derived classes Professional and NonProfessional are more specific. Each have their own attributes to aid the redefinition of the virtual functions declared in the base class and the differences can be seen by looking at the redifinitions in Professional.cpp and NonProfessional.cpp

As the assignment stated, arbitrary rules had to be put in place for the health care contribution and vacation days calculations. For this, it was decided that for Professionals, they would have 10% taken out of their weekly earnings while Nonprofessionals would have .05%. Also, Professionals would have an allotted 25 vacation days allotted annually and Nonprofessionals would earn a day for every 100 hours they worked. 

When the program is run, the user is first presented with a menu where they can choose to add an employee to the system or access an employee

If they choose to access an employee, the program will search the correct vector (one with Professional class objects or NonProfessional class objects). If the employee is found, the user will be presented with another menu asking what they would like to know about the employee.

If they choose to add an employee, they will be asked to input some information about the employee. Once completed, the a new Professional or NonProfessional class object will be created and then pushed back to the correct vector.

The user will be taken back the main menu and can continue to run it until they choose to quit.

![Screenshot (38)](https://user-images.githubusercontent.com/98354701/223326455-9d632905-1e33-4189-b8fb-1530c7398bb9.png)

![Screenshot (39)](https://user-images.githubusercontent.com/98354701/223326473-eac5f2a6-0e2f-4a5d-8b02-5cddbf3c1bf6.png)

![Screenshot (40)](https://user-images.githubusercontent.com/98354701/223326491-46d74102-ed6f-46df-9c9b-61400140141f.png)

![Screenshot (41)](https://user-images.githubusercontent.com/98354701/223326508-07368cf7-b599-4a22-9579-be09491a6e4d.png)
