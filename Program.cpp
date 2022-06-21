#include "Program.h"
#include "Izbornik.h"
#include "VUV.h"

using namespace BetterConsoleTables;

namespace VUV_Projekti
{

	void Program::IzlazIzPrograma()
	{
		std::wstring prompt = L"Jeste li sigurni da zelite napustiti program?";
		std::vector<std::wstring> opcije = {L"Da", L"Ne"};
		Izbornik *izlaz = new Izbornik(prompt, opcije);
		int OdabraniIndex = izlaz->Pokreni();

		switch (OdabraniIndex)
		{
			case 0:
				exit(0);

				break;
			case 1:
			{
				std::wstring ispis = L"Vracanje u glavni izbornik.......";
				Console::Clear();
				std::wcout << std::endl;
				delay(500);
				Console::Clear();
				PokreniIzbornik();
				break;
			}
		}
		Console::ReadKey(true);
		exit(0);

		delete izlaz;
	}

	void Program::Administracija()
	{
		std::wstring prompt = L"Odaberite neke od stvari sa menija";
		std::vector<std::wstring> opcije = {L"1. Ispisi listu projekata", L"2. Kreiranje projekta", L"3. Azuriranje projekata", L"4. Lista aktivnosti", L"4.1. Ispis aktivnosti iz projekta", L"5. Dodavanje aktivnosti", L"6. Lista clanova projekta", L"7. Dodavnaje clana", L"8. Brisanje clana", L"9. Dodaj Lokaciju", L"10. Ispis svih Lokacija", L"11. Resetiraj podatke"};
		Izbornik *izlaz = new Izbornik(prompt, opcije);
		int OdabraniIndex = izlaz->Pokreni();
		switch (OdabraniIndex)
		{
			case 0:
				VUV::IspisListeProjekata();
				break;
			case 1:
				VUV::KreirajProjekt();
				break;
			case 2:
				VUV::AzurirajProjekt2();
				break;
			case 3:
				VUV::IspisSvihAktivnosti();
				break;
			case 4:
				VUV::IspisAktivnostiProjekta();
				break;

			case 5:
				VUV::DodajAktivnost();
				break;
			case 6:
				VUV::ListaClanova2();
				break;
			case 7:
				VUV::DodavanjeClana2();
				break;

			case 8:
				VUV::BrisanjeClana();
				break;

			case 9:
				VUV::KreirajLokaciju();
				break;
			case 10:
				VUV::IspisLokacija();
				break;
			case 11:
				VUV::ResetirajPodatke();
				break;
		}
		Console::ReadKey(true);
		exit(0);

		delete izlaz;
	}

	void Program::Pokreni()
	{

		Administracija();
		PokreniIzbornik();

	}

	void Program::Exit()
	{
		std::wstring prompt = L"";
		std::vector<std::wstring> opcije = {L"Nazad"};
		Izbornik *izlaz = new Izbornik(prompt, opcije);
		int OdabraniIndex = izlaz->Pokreni();
		switch (OdabraniIndex)
		{
			case 0:
				Administracija();
				break;
		}

		delete izlaz;
	}

	void Program::PokreniIzbornik()
	{

		std::wstring prompt = L"Za kretanje kroz izbornik koristite strijelice gore ili dolje ovisno o odabiru, a za odabir opcije korisite Enter";
		std::vector<std::wstring> opcije = {L"Pokreni", L"Izlaz"};
		Izbornik *i1 = new Izbornik(prompt, opcije);
		int OdabraniIndex = i1->Pokreni();
		switch (OdabraniIndex)
		{
			case 0:
				Pokreni();

				break;
			case 1:

				break;
			case 2:
				IzlazIzPrograma();
				break;
		}

		delete i1;
	}

	void Program::Main(std::vector<std::wstring> &args)
	{
		Console::Title = L"VUV Projekti";
		Console::SetCursorPosition(0, 0);
	for (int i = 0; i < 5; i++)
	{
		Console::ForegroundColor = ConsoleColor::Red;
		std::wcout << LR"(




                                                    ╔════╤╤╤╤════╗    
                                                    ║    │││ \   ║    
                                                    ║    │││  O  ║    
                                                    ║    OOO     ║

                                                  Ucitavnaje programa...)" << std::endl;
		delay(100);
		Console::Clear();
		std::wcout << LR"(




                                                    ╔════╤╤╤╤════╗    
                                                    ║    ││││    ║    
                                                    ║    ││││    ║ 
                                                    ║    OOOO    ║

                                                  Ucitavnaje programa...)" << std::endl;
		delay(100);
		Console::Clear();
		std::wcout << LR"(




                                                    ╔════╤╤╤╤════╗    
                                                    ║   / │││    ║    
                                                    ║  O  │││    ║  
                                                    ║     OOO    ║

                                                  Ucitavnaje programa...)" << std::endl;
		delay(100);
		Console::Clear();
		std::wcout << LR"(




                                                    ╔════╤╤╤╤════╗
                                                    ║    ││││    ║ 
                                                    ║    ││││    ║
                                                    ║    OOOO    ║
                
                                                  Ucitavnaje programa...)" << std::endl;
		delay(100);
		Console::Clear();
		Console::ResetColor();
	}
	PokreniIzbornik();
	}
}
