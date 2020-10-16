//
// Created by Andrés on 16/10/2020.
//

#ifndef SRC_WORKOUT_H
#define SRC_WORKOUT_H

#include "System.h"
#include "Set.h"

class Workout {
public:

private:
    string _name;
    int _rounds;
public:
    const string &getName() const;

    void setName(const string &name);

    int getRounds() const;

    void setRounds(int rounds);

    const string &getDescription() const;

    void setDescription(const string &description);

private:
    string _description;

};


#endif //SRC_WORKOUT_H
