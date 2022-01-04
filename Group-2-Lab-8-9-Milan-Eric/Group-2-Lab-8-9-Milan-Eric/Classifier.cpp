#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Position.h"
#include "Classifier.h"
/// @file Classifier.cpp
/// @brief This is the Classifier.cpp file. 
/// 
/// This file houses the implementation of a the classifier constructor 
/// @author Milan & Eric 
/// @date 4/18/2021


using namespace std;

/// This is the classifier contructor, which reads from a file and takes a known point and puts it into a positon vector. This is how the training is done
/// @author Milan & Eric 
/// 
/// Input: a textfile name in the form of a string, in this implementaiton it has to be known, so it is the trainingData.txt
/// Return parameter: n/a
/// @date 4/18/2021
Classifier::Classifier(string textFile) : positionArr(vector<Position>())
{
	ifstream fin;

	fin.open(textFile);


	if (fin.is_open())
	{
		string line;

		while (getline(fin, line))
		{
			string delimiter = ",";

			double data[4];


			for (int k = 0; k < 4; k++)
			{
				string token = line.substr(0, line.find(delimiter));

				data[k] = stod(token);

				line.erase(0, line.find(delimiter) + 1);

			}

			Position currentLineData{ data[0], data[1], data[2], data[3] };

			positionArr.push_back(currentLineData);


		}
	}
	else
	{
		exit;
	}
}