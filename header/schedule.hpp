//
//  schedule.h
//  Exam Helper
//
//  Created by Arlene Phimmasone on 11/21/20.
//

#ifndef schedule_hpp
#define schedule_hpp
#include <string>
#include <iostream>

using namespace std;

class Schedule
{
protected:
    string name;

public:
    Schedule(string name) : name(name) {}
  // Schedule() {};

    string getName()
    {
        return this->name;
    }
};

#endif /* schedule_hpp */
