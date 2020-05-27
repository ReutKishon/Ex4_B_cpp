
#ifndef SNIPERCOMMANDER_H_
#define SNIPERCOMMANDER_H_
#pragma once

#include <vector>
#include "Soldier.hpp"

class SniperCommander : public Sniper
{

public:
    SniperCommander(uint player_id, uint health = 120, uint damage = 100) : Sniper{player_id, health, damage} {}
    void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);

    // ~SniperCommander();
};



#endif