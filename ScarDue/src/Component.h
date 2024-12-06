#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() = default;
    virtual void Deserialize(const std::string& data) = 0; // Deserialize data to initialize component
};

#endif // COMPONENT_H
