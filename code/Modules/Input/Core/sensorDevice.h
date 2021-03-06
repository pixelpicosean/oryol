#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::Sensors
    @ingroup Input
    @brief returns device sensory data
*/
#include "glm/vec3.hpp"
#include "glm/mat4x4.hpp"

namespace Oryol {
namespace _priv {

class sensorDevice {
public:
    /// does the host platform provide sensory data?
    bool attached = false;
    /// acceleration vector including gravity in m/sec^2
    glm::vec3 acceleration{0.0f, -9.80665f, 0.0f};
    /// device orientation: yaw, pitch, roll angles
    glm::vec3 yawPitchRoll;
};

} // namespace _priv
} // namespace Oryol
