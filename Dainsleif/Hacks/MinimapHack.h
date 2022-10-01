#pragma once
#include "../pch.h"
#include "../Player.h"

namespace Minimap
{
    void Run(std::vector<Player*> playerList);
    void Stop(std::vector<Player*> playerList);
}