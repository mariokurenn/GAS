#include "Aktivnost.h"

namespace VUV_Projekti
{

	std::vector<ClanProjekta*> Aktivnost::getClanoviProjekta() const
	{
		return ClanoviProjekta;
	}

	void Aktivnost::setClanoviProjekta(const std::vector<ClanProjekta*> &value)
	{
		ClanoviProjekta = value;
	}

	std::wstring Aktivnost::getId() const
	{
		return _id_aktivnosti;
	}

	void Aktivnost::setId(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("ID nije dobro postavljen");
			}

			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
				}
			}
			for (auto slovo : slova)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("ID ne smije sadrzavati slovo");
				}
			}
			int stringint;

			bool uspjesno = int::TryParse(value, stringint);
			if (stringint < 0)
			{
				throw std::runtime_error("ID ne moze biti manji od 0");
			}
			_id_aktivnosti = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Aktivnost::getNaziv() const
	{
		return _naziv;
	}

	void Aktivnost::setNaziv(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Naziv nije dobro postavljen");

			}

			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Naziv ne moze sadrzavati specijalna slova");
				}
			}
			_naziv = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Aktivnost::getOpis() const
	{
		return _opis;
	}

	void Aktivnost::setOpis(const std::wstring &value)
	{
		_opis = value;
	}

	std::wstring Aktivnost::getVrijeme() const
	{
		return _vrijeme;
	}

	void Aktivnost::setVrijeme(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Vrijeme nije dobro postavljeno");

			}
			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Vrijeme ne moze sadrzavati specijalna slova");
				}
			}
			_vrijeme = value;
		}
		catch (const std::runtime_error &e)
		{

			std::wcout << e.what() << std::endl;
		}
	}
}
