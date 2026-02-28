#pragma once
struct Point {
    int x, y;
};
class GraphicPrimitive {
public:
    virtual ~GraphicPrimitive() {}
    virtual void draw() const = 0;  
};

