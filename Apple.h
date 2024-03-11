#pragma once
#include <iostream>
#include "sstream"
#include <cmath>

class Apple
{
private:
    double _width;
    double _height;
    std::string _color;
    double _v;
public:
    Apple(){
        _width = 0;
        _height = 0;
        _color = "";
    };
    Apple(double width, double height, std::string color){
        _width = width;
        _height = height;
        _color = color;
    };

    void setWidth(double x){};

    friend std::istream& operator>>(std::istream &in, Apple &apple){
        double width, height;
        std::string color;
        in >> width >> height >> color;

    }
    ~Apple(){};
};

