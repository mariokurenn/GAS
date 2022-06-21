#include "Izbornik.h"

using namespace VUV_Projekti;

namespace VUV_Projekti
{

	Izbornik::Izbornik(const std::wstring &prompt, std::vector<std::wstring> &opcije)
	{
		this->Prompt = prompt;
		this->Opcije = opcije;
		OdabraniIndex = 0;
	}

	void Izbornik::DodajProjekt()
	{
		std::wstring xml = L"";
		StreamReader *sr = new StreamReader(LR"(C:\Users\Korisnik\Desktop\VUV_Projekti\ClanProjekta.xml)");

		{
			xml = sr->ReadToEnd();
		}

		XmlDocument *xmlObject = new XmlDocument();
		xmlObject->LoadXml(xml);
		XmlNodeList *projekti = xmlObject->SelectNodes(L"//vuv/projekti/projekt");

		delete xmlObject;
		delete sr;
	}

	void Izbornik::PokaziIzbornik()
	{

		Console::ForegroundColor = ConsoleColor::Red;

		std::wstring a = LR"(
                 __     ___   ___     __  ____  ____   ___      _ _____ _  _______ ___ 
                 \ \   / / | | \ \   / / |  _ \|  _ \ / _ \    | | ____| |/ /_   _|_ _|
                  \ \ / /| | | |\ \ / /  | |_) | |_) | | | |_  | |  _| | ' /  | |  | | 
                   \ V / | |_| | \ V /   |  __/|  _ <| |_| | |_| | |___| . \  | |  | | 
                    \_/   \___/   \_/    |_|   |_| \_\\___/ \___/|_____|_|\_\ |_| |___|
                                                                       
)";
		std::wcout << std::endl;
		std::wcout << L"" << std::endl;
		std::wcout << std::endl;
		std::wcout << L"" << std::endl;
		for (int i = 0; i < Opcije.size(); i++)
		{
			std::wstring trenutnaOpcija = Opcije[i];
			std::wstring prefix;
			if (i == OdabraniIndex)
			{
				prefix = L"*";
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::Red;
			}
			else
			{
				prefix = L" ";
				Console::ForegroundColor = ConsoleColor::White;
				Console::BackgroundColor = ConsoleColor::Black;
			}
			std::wcout << StringHelper::formatSimple(L"{0}|{1}|", prefix, trenutnaOpcija) << std::endl;
		}
		Console::ResetColor();
	}

	int Izbornik::Pokreni()
	{
		ConsoleKey odabranigumb;
		do
		{
			Console::Clear();
			PokaziIzbornik();
			ConsoleKeyInfo info = Console::ReadKey(true);
			odabranigumb = info.Key;

			if (odabranigumb == ConsoleKey::UpArrow)
			{
				OdabraniIndex--;
				if (OdabraniIndex == -1)
				{
					OdabraniIndex = Opcije.size() - 1;
				}
			}
			else if (odabranigumb == ConsoleKey::DownArrow)
			{
				OdabraniIndex++;
				if (OdabraniIndex == Opcije.size())
				{
					OdabraniIndex = 0;
				}
			}

			if (odabranigumb != ConsoleKey::Enter && odabranigumb != ConsoleKey::UpArrow && odabranigumb != ConsoleKey::DownArrow)
			{
				Console::Beep();
			}
		} while (odabranigumb != ConsoleKey::Enter);
		return OdabraniIndex;
	}
}
