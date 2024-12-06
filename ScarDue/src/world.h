#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include <vector>
#include <memory>

class World {
public:
    std::vector<std::unique_ptr<Entity>> entities;

    Entity* CreateEntity(const std::string& name) {
        auto entity = std::make_unique<Entity>();
        entity->name = name;
        entities.push_back(std::move(entity));
        return entities.back().get();
    }
};

#endif // WORLD_H
