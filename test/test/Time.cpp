#include <iostream>
#include "Time.h"

void Time::update()
{
    time_t now;
    struct tm local_time;
    errno_t err;

    time(&now);

    err = localtime_s(&local_time, &now);

    if (err != 0)
 {
        printf("Error: localtime_s() failed with error code %d\n", err);
    }
    else
    {
        printf("Local time: %02d:%02d:%02d\n", local_time.tm_hour, local_time.tm_min, local_time.tm_sec);
    }
}

void Time::display() const
{
    std::cout << "Date: " << year << "-" << month << "-" << day << std::endl;
    std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
}

Time::Time()
{
    update();
}