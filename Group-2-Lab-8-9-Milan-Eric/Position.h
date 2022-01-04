#pragma once
/// @file Position.h
/// @brief This is the Position.h file. 
/// 
/// This file houses the declaration of the Position class
/// @author Milan & Eric 
/// @date 4/18/2021

/// @brief The decloration of Position class
/// 
/// The members of this class are the x, y, z points and the classification, all being doubles.There are 2 postion parameterized constuctors, one with a classification and one without. there is a distance function and a getClassification in this class as well. 
/// @author Milan & Eric 
/// @date 4/18/2021
class Position
{
public:

	Position(double x, double y, double z);

	Position(double x, double y, double z, double classification);

	double distance(Position other);

	double getClassification();

private:

	double x;
	double y;
	double z;

	double classification;

};

