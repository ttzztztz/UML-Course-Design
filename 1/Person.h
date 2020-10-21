/**
 * Project Untitled
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    string name;
    int uid;
    bool isProfessor;
    string password;
    vector<Course> courseList;
    
void getCourseList();
};

#endif //_PERSON_H