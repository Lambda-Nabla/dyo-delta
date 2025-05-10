#ifndef ENTITY_MANAGER_HPP
#define ENTITY_MANAGER_HPP

#include <cstdint>
#include <map>
#include <queue>

#include "ComponentManager.hpp"

using entity = std::uint32_t
static uint32_t entities = 0;
static const uint32_t maxEntities = 5000;

class EntityManager {
public:
    entity createEntity();
    void deleteEntity(entity);

private:
    std::queue<entity> IDback;
    std::map<entity, components*> entityMap;
}

#endif
