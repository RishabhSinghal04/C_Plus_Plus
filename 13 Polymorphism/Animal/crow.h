#pragma once

#include "bird.h"

class Crow : public Bird
{
public:
    Crow() = default;
    Crow(std::string_view wing_color, std::string_view description);
    virtual ~Crow();

    virtual void cow() const
    {
        std::cout << "Crow::cow called fro crow : " << m_description << '\n';
    }

    virtual void breathe() const
    {
        std::cout << "Crow::breathe called for : " << m_description << '\n';
    }

    virtual void fly() const override
    {
        std::cout << "Crow::fly() called for bird : " << m_description << '\n';
    }
};
