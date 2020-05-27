
#ifndef FOOTSOLDIER_H_
#define FOOTSOLDIER_H_
#pragma once

#include <vector>
#include "Soldier.hpp"

class FootSoldier : public Soldier
{

public:
    FootSoldier(uint player_id, uint health = 100, uint damage = 10) : Soldier{player_id, health, damage} {}
    FootSoldier();
     void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    // ~FootSoldier();
};



#endif