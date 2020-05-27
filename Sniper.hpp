
#ifndef SNIPER_H_
#define SNIPER_H_
#pragma once

#include <vector>
#include "Soldier.hpp"

class Sniper : public Soldier
{

public:
    Sniper(uint player_id, uint health_points = 100, uint damage = 50) : Soldier{player_id, health_points, damage} {}
    Sniper();
     void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);
    // ~Sniper();
};



#endif