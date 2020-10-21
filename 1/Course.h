/**
 * Project Untitled
 */


#ifndef _COURSE_H
#define _COURSE_H

class Course {
public: 
    string name;
    int courseID;
    int enrollNum;
    bool isOpen;
    bool isSelected;
    
void selectCourse();
    
void modifyCourse();
    
void deleteCourse();
};

#endif //_COURSE_H