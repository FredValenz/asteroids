#include "LoadModels.h"

// stdlib
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

// Engine
#include "Utilities.h"
#include "Vector2.h"


namespace Utilities
{
	Utilities::LoadModels::LoadModels()
	{}

	Utilities::LoadModels::~LoadModels()
	{}

	std::string const folder_name = "models";

	//Load player models (ships)
	std::vector<Asteroids::Entities::Ship*> Utilities::LoadModels::Load(const int width, const int height)
	{
		Engine::FileSystem::Utilities util;
		auto modelsList = util.ListFile(folder_name);

		std::vector<Asteroids::Entities::Ship*> ships;


		for (int i = 2; i < static_cast<int>(modelsList.size()); i++)
		{
			std::string model = modelsList[i];
			std::ifstream inFile(util.buildPath(folder_name, model));
			std::string current("");
			std::vector<Engine::Math::Vector2> points;

			if (inFile.good())
			{
				std::string getFloat;
				while (inFile >> current)
				{
					std::vector<float> pointsRead;
					getFloat = current.substr(0, current.find_last_of(","));
					pointsRead.push_back(std::stof(getFloat));
					getFloat = current.substr(current.find_last_of(",") + 1, current.length());
					pointsRead.push_back(std::stof(getFloat));

					//Adding to points vector
					points.push_back(Engine::Math::Vector2(pointsRead[0], pointsRead[1]));
				}
			}


			//Adding points to temp
			Asteroids::Entities::Ship* temp = new Asteroids::Entities::Ship(points, width, height);

			//Adding temp to ships vector, who storages the ships in a vector
			ships.push_back(temp);
		}
		
		return ships;
	}
}