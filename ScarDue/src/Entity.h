#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <vector>
#include <memory>
#include "Component.h"

class Entity {
public:
    std::string name;
    std::vector<std::unique_ptr<Component>> components;

    void AddComponent(std::unique_ptr<Component> component) {
        components.push_back(std::move(component));
    }

    template <typename T>
    T* GetComponent() {
        for (auto& component : components) {
            if (T* casted = dynamic_cast<T*>(component.get())) {
                return casted;
            }
        }
        return nullptr;
    }
};

#endif // ENTITY_H
