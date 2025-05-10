#include "ComponentManager.hpp"

void ComponentManager::addComponent(entity e, component* c) {
    if (!entityMap.contains(e))
        return;
        
    components* cList = entityMap[e];
    if (cList == NULL)
        cList = new components;
    
    switch c->id {
        case 1:
	    transform* newtransform = new transform;
	    transforms.push_back(newtransform);
	    cList->t = newtransform;
    	    break;
    }
}


