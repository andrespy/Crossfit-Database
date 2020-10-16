//
// Created by Andrés on 16/10/2020.
//

#include "Workout.h"

const string &Workout::getName() const {
    return _name;
}

void Workout::setName(const string &name) {
    _name = name;
}

int Workout::getRounds() const {
    return _rounds;
}

void Workout::setRounds(int rounds) {
    _rounds = rounds;
}

const string &Workout::getDescription() const {
    return _description;
}

void Workout::setDescription(const string &description) {
    _description = description;
}
