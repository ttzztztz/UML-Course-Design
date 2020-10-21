/**
 * Project Untitled
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"


class Student: public Person {
public: 
    
void SelectCourse();
    
void DeleteCourse();
    
void isOverSelected();
    
void getCourseList();
};

#endif //_STUDENT_H