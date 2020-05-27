#ifndef PARAMEDICCOMMANDER_H_
#define PARAMEDICCOMMANDER_H_
#pragma once

#include <vector>
#include "Soldier.hpp"

class ParamedicCommander : public Paramedic
{

public:
    ParamedicCommander(uint player_id, uint health_points = 200, uint damage = 0) : Paramedic{player_id, health_points, damage} {}
    void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    // ~ParamedicCommander();
};



#endif