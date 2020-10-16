//
// Created by Andrés on 16/10/2020.
//

#ifndef SRC_ATHLETE_H
#define SRC_ATHLETE_H

#include <iostream>
using namespace std;

#include "Result.h"

class Athlete {
public:
    void printResults();
    void printPR();
private:
    string _id;
    string _name;
    float _weight;
    Result * _results;

};


#endif //SRC_ATHLETE_H
