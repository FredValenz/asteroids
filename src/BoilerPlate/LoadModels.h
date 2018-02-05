#pragma once
#ifndef _LOADMODELS_H_
#define _LOADMODELS_H_

#include <vector>
#include "Ship.h"
#include "Vector2.h"

namespace Utilities
{
	class LoadModels
	{
	public:

		/*============================
		*			CTOR
		============================*/
		LoadModels();
		~LoadModels();

		/*============================
		*		PUBLIC FUNCTION
		============================*/
		std::vector<Asteroids::Entities::Ship*> Load(const int, const int);
	};
}
#endif