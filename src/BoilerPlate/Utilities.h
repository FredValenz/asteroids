#pragma once
#ifndef _UTILITIES_H_
#define _UTILITIES_H_

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include "LoadModels.h"

namespace Engine
{
	namespace FileSystem
	{
		class Utilities
		{
		public:

			/*============================
			*			CTOR
			============================*/
			Utilities();
			~Utilities();

			/*============================
			*		PUBLIC FUNCTION
			============================*/
			std::vector<std::string> ListFile(std::string);
			void printUtil(std::vector<std::string>);
			std::string buildPath(std::string, std::string);
			bool deleteDirectory(std::string) { return false; };

		protected:

			/*============================
			*	  PROTECTED FUNCTIONS
			============================*/
			std::string getPath(std::string) const;
			void printFileContent(std::string);

			/*============================
			*	  PROTECTED MEMBERS
			============================*/
			std::vector<std::string> list_of_files;
		};
	}
}
#endif