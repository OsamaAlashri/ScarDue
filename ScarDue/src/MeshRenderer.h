#ifndef MESHRENDERER_H
#define MESHRENDERER_H

#include "Component.h"
#include <string>
#include <iostream>

class MeshRenderer : public Component {
public:
    std::string meshPath;
    std::string materialPath;

    void Deserialize(const std::string& data) override {
        // Parse data to initialize meshPath and materialPath
        std::cout << "Deserializing MeshRendererComponent from: " << data << std::endl;
    }
};

#endif // MESHRENDERER_H
