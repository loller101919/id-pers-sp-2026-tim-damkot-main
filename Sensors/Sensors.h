#ifndef SENSOR
#define SENSOR

#include <ctime>

struct Tracks{
    int TrackID;
    int SensorID;
    time_t TrackTime;
    int Distance;
    double Bearing;
    int Altitude;
    int ReturnSize;
} Tracks;

#endif
