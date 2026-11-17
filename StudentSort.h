/*
 * Write the last name and first name of
 * each member of your group as they appear on eLC
 * below sorted by last name then first name
 * in ascending order.
 *
 * Group member #1: Almada Leonardo 
 * Group member #2: Antonakaskis Konstantinos
 * Group member #3: Muilenburg Alston 
 * Group member #4: Nguyen Danny
 * Group member #5: Ostrowski Tyler
 * Group member #6: Zhou Jason
 *
 */

#ifndef STUDENTSORT_H
#define STUDENTSORT_H

#include <iostream>
#include <list>
#include <string>
#include "Student.h"

/*
 * Return true if x's id is less than y's id. 
 * Otherwise, return false.
 */
bool compareId(Student * x, Student * y){

}

/*
 * Return true if (x's last name and x's first name) 
 * is less than (y's last name and y's first name)
 * Otherwise, return false.
 * The comparison should be done in a case sensitive manner.
 */
bool compareName(Student * x, Student * y){

}

/*
 * Return true if x's gpa is less than y's gpa. 
 * Otherwise, return false.
 */
bool compareGpa(Student * x, Student * y){

}

/*
 * This function should sort a list of Student pointers 
 * based on the typeOfSort in ascending order, where
 *  typeOfSort == 1 means to sort by id,
 *  typeOfSort == 2 means to sort by last name then by first name (case sensitive),
 *  typeOfSort == 3 means to sort by gpa, and
 *  any other values for typeOfSort should be ignored making this function do nothing. 
 * This function should call list::sort in the C++ STL. 
 */
void studentSort(list<Student *> & classRoll, int typeOfSort){
    if ( typeOfSort == 1 ) {
        // Sort by ID
        classRoll.sort( compareId );

    } else if ( typeOfSort == 2 ) {
        // Sort by last name then first name
        classRoll.sort( compareName );

    } else if ( typeOfSort == 3 ) {
        // Sort by GPA
        classRoll.sort( compareGpa );

    } else {
        std::cout << "Invalid typeOfSort value: " << typeOfSort << std::endl;
    }
}

#endif
