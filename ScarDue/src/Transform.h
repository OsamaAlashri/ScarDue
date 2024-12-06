#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Component.h"
#include <glm/glm.hpp>
#include <iostream>

class Transform : public Component {
public:
    glm::vec3 position{ 0.0f };
    glm::vec3 rotation{ 0.0f };
    glm::vec3 scale{ 1.0f };

    Transform() = default;

    void Deserialize(const std::string& data) override {
        // Parse data string into position, rotation, and scale
        std::cout << "Deserializing TransformComponent from: " << data << std::endl;
    }
};

#endif // TRANSFORM_H
