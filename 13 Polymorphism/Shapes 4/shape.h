#pragma once

#include <string>

class Shape
{
protected:
    Shape() = default;
    Shape(std::string_view description);

public:
    virtual ~Shape() = default; // If destructor is not public, you won't be able to delete base_ptrs.

    // Pure virtual functions
    virtual long double perimeter() const = 0;
    virtual long double surface() const = 0;

private:
    std::string m_description;
};
