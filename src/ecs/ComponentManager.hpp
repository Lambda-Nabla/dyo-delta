#ifndef COMPONENT_MANAGER_HPP
#define COMPONENT_MANAGER_HPP

#include <cstdint>
#include <map>
#include <queue>
#include <vector>

#include "Components.hpp"
#include "EntityManager.hpp"

using entity = std::uint32_t

class ComponentManager {
public:
    void addComponent(entity e, component* c)

private:
    // just for now i can do fun memory later
    std::vector<transform*> transforms;
}

#endif
