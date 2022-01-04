#include "NearestNeighbor.h"
#define INITALMIN 1000
/// @file NearestNeighbor.cpp
/// @brief This is the NearestNeighbor.cpp file. 
/// 
/// This file houses the implementation of the classify overridden function, aswell as the NearestNeighbor constructor
/// @author Milan & Eric 
/// @date 4/18/2021


using namespace std;

/// This is the NearestNeighbor classify implementation, it goes unknownData text file and compares the distance in the items of the through the position vector and if the distance is smaller then the current distance saves the classification, and the smallest classification will be returned.
/// @author Milan & Eric 
/// 
/// Input: a unknown position
/// Return parameter: double (the classification)
/// @date 4/18/2021
double NearestNeighbor::Classify(Position unknown)
{
	double currentMinDistance = INITALMIN;

	double classificationOfMin = -1;

	for (int i = 0; i < positionArr.size(); i++)
	{
		if (positionArr[i].distance(unknown) < currentMinDistance)
		{
			classificationOfMin = positionArr[i].getClassification();

			currentMinDistance = positionArr[i].distance(unknown);
		}
	}
	return classificationOfMin;
};

NearestNeighbor::NearestNeighbor(string textFile) : Classifier(textFile) {};