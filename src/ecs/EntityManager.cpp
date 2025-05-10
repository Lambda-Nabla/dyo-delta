#include "EntityManager.hpp"

entity EntityManager::createEntity() {
    if(IDback.size() == 0) 
        entityMap.insert(std::pair(entities++, NULL)); 
    else {
	entity e = IDback.pop();
	entityMap.insert(std::pair(e, NULL));
	return e;
    }

    return entities; 
}

void EntityManager::deleteEntity(entity e) {
    // delete all components
    
    int numErased = entityMap.erase(e);
    // push back if it erased an entity
    if (numErased == 1)
        IDback.push(e);
}










