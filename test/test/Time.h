#pragma once
#include <iostream>
#include <chrono>
#include <ctime>

class Time
{
public:
    Time();

    void update();

    void display() const;
  

private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
};