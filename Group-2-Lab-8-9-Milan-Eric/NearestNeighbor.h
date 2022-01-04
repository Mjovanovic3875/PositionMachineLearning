#pragma once
#include "Classifier.h"
/// @file NearestNeighbor.h
/// @brief This is the NearestNeighbor.h file. 
/// 
/// This file houses the declaration of the NearestNeighbor class
/// @author Milan & Eric 
/// @date 4/18/2021

/// @brief The decloration of NearestNeighbor class
/// 
/// This is where the classify function is overidden, and it has a nearest NearestNeighbor parametrized constructor.
/// @author Milan & Eric 
/// @date 4/18/2021
class NearestNeighbor :  public Classifier
{
public:

	virtual double Classify(Position unknown) override;
	NearestNeighbor(std::string textFile);

private:

};

