#ifndef COMPONENTS_HPP
#define COMPONENTS_HPP

#include <cstdint>

using entity = std::uint32_t

struct component {
    entity eID;
    uint8_t id = 0;
};

struct transform : component {
    id = 1;
    float x = 0.0;
    float y = 0.0;
};

struct components {
    transform* t = NULL;
}

#endif

