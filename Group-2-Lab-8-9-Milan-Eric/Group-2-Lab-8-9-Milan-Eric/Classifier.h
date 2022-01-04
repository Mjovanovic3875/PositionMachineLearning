#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Position.h"
/// @file Classifier.h
/// @brief This is the Classifier.h file. 
/// 
/// This file houses the declaration of the Classifier class
/// @author Milan & Eric 
/// @date 4/18/2021

/// @brief The decloration of Classifier class
/// 
/// This function is the base funtion for everything. it is an abtract class, it has a pure virtual classify function called classify, it has a contructor because this constructor is called when the child classes are called. it also has a vector that holds positions.
/// @author Milan & Eric 
/// @date 4/18/2021
class Classifier
{
public:

	virtual double Classify(Position unknown) = 0;

protected:

	Classifier(std::string textFile);
	std::vector<Position> positionArr;

private:
	
};

