#include "Speedometer.h"
#include "GameObject.h"
#include "SpriteRenderer.h"
#include "Vehicle.h"
#include <algorithm>
#include <cmath>

namespace {
// recursos/img/velocimetro.png é uma spritesheet 5x5 (25 quadros), mas só os
// 21 primeiros têm um ponteiro desenhado — o resto da última linha é vazio.
constexpr int kFrameCount = 21;
}  // namespace

Speedometer::Speedometer(GameObject& associated, Vehicle* vehicle)
    : Component(associated), vehicle(vehicle) {}

void Speedometer::Update(float dt) {
    (void)dt;

    if (!vehicle) return;

    float ratio = std::abs(vehicle->GetSpeed()) / vehicle->GetMaxSpeed();
    ratio = std::clamp(ratio, 0.0f, 1.0f);

    int frame = static_cast<int>(std::round(ratio * (kFrameCount - 1)));

    SpriteRenderer* sr = associated.GetComponent<SpriteRenderer>();
    if (sr) sr->SetFrame(frame);
}

void Speedometer::Render() {}
