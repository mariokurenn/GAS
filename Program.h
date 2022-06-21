#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace BetterConsoleTables;
namespace VUV_Projekti
{


	class Program
	{
	public:
		static void IzlazIzPrograma();
		static void Administracija();
		static void Pokreni();
		static void Exit();
		static void PokreniIzbornik();

			static void Main(std::vector<std::wstring> &args);
	};
}

