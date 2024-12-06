#ifndef CAMERA_H
#define CAMERA_H

#include "Component.h"
#include <iostream>

class CameraComponent : public Component {
public:
    float fov{ 45.0f };
    float nearPlane{ 0.1f };
    float farPlane{ 100.0f };

    CameraComponent() = default;

    void Deserialize(const std::string& data) override {
        // Parse data to initialize camera parameters
        std::cout << "Deserializing CameraComponent from: " << data << std::endl;
    }
};

#endif // CAMERA_H
