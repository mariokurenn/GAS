#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "stringhelper.h"

using namespace VUV_Projekti;
namespace VUV_Projekti
{
	class Izbornik
	{


	private:
		int OdabraniIndex = 0;
		std::vector<std::wstring> Opcije;
		std::wstring Prompt;

	public:
		Izbornik(const std::wstring &prompt, std::vector<std::wstring> &opcije);

		static void DodajProjekt();
	private:
		void PokaziIzbornik();
	public:
		int Pokreni();

	};
}
