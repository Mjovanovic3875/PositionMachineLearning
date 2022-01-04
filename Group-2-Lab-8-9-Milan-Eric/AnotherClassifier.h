#pragma once
#include "Classifier.h"
/// @file AnotherClassifier.h
/// @brief This is the AnotherClassifier.h file. 
/// 
/// This file houses the declaration of the AnotherClassifier class
/// @author Milan & Eric 
/// @date 4/18/2021

/// @brief The decloration of AnotherClassifier class
/// 
/// This is a dummy class that only overrides the classify function, and it also inherits from the classifier class
/// @author Milan & Eric 
/// @date 4/18/2021
class AnotherClassifier :
    public Classifier
{
    virtual double Classify(Position unknown) override;
};

