#pragma once

#include "Component.h"

class Vehicle;

class Speedometer : public Component {
public:
    Speedometer(GameObject& associated, Vehicle* vehicle);

    void Update(float dt) override;
    void Render() override;

private:
    Vehicle* vehicle;
};
