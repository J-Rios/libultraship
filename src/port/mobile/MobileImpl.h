#pragma once

#include <cstdint>
#include <string>

#include <imgui.h>

namespace Ship {

class Mobile {
  public:
    static void Init();
    static void Init(const char* appName, const uint16_t vx, const uint16_t vy, const uint16_t vz);
    static void Exit();
    static void ToastShow(const char* message);
    static void ImGuiProcessEvent(bool wantsTextInput);
    static bool IsUsingTouchscreenControls();
    static void EnableTouchArea();
    static void DisableTouchArea();
    static float GetCameraYaw();
    static float GetCameraPitch();
    static bool IsInvalidGamepad(const char* gamepad_name);
};

}; // namespace Ship
