#pragma once

/**
 * @brief Status information about the engine
 */
enum class EngineStatus {
    Ok = 10,
    Exit = 11,
    ExitServerDisconnect = 12,
    ExitServerTimeout = 13,

    GLInitError = 20,
    CouldNotConnect = 21,
};