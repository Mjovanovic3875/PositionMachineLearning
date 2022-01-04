#include <iostream>
#include <math.h>
#include <cmath>
#include "Position.h"
/// @file Position.cpp
/// @brief This is the Position.cpp file. 
/// 
/// This file houses the implementation of the distance function, aswell as the get classification function. it hold the position default and paramaterized constructors too.
/// @author Milan & Eric 
/// @date 4/18/2021



using namespace std;

/// This is Position parameterized constructor, that does not have a classification
/// @author Milan & Eric 
/// 
/// Input: double x, double y, double z
/// Return parameter: n/a
/// @date 4/18/2021
Position::Position(double x, double y, double z) : x(x), y(y), z(z), classification(-1) {};

/// This is Position parameterized constructor, that does have a classification
/// @author Milan & Eric 
///
/// Input: double x, double y, double z,double classification
/// Return parameter: n/a
/// @date 4/18/2021
Position::Position(double x, double y, double z, double classification) : x(x), y(y), z(z), classification(classification) {};

/// This is the function that gets the distance between two points
/// @author Milan & Eric 
/// 
/// Input: a Poisition object
/// Return parameter: double (distance)
/// @date 4/18/2021
double Position::distance(Position other)
{
	double distance = sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2) + pow(this->z - other.z, 2));

	return distance;
}

/// This is the function that gets the classification of any position
/// @author Milan & Eric 
/// 
/// Input: n/a
/// Return parameter: double (classification)
/// @date 4/18/2021
double Position::getClassification()
{
	return this->classification;
}