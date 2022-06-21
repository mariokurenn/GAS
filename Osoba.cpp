#include "Osoba.h"

namespace VUV_Projekti
{

	std::wstring Osoba::getID() const
	{
		return _id;
	}

	void Osoba::setID(const std::wstring &value)
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
			try
			{
				bool uspjesno = int::TryParse(value, stringint);
				if (stringint < 0)
				{
					throw std::runtime_error("ID ne moze biti manji od 0");
				}
			}
			catch (const std::runtime_error &e)
			{

				std::wcout << e.what() << std::endl;
			}

			_id = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Osoba::getIme() const
	{
		return _ime;
	}

	void Osoba::setIme(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Ime nije dobro postavljeno");
			}
			for (auto slovo : value)
			{
				int broj;
				bool uspjesno;
				if (uspjesno = int::TryParse(StringHelper::toString(slovo), broj))
				{
					throw std::runtime_error("Ime ne moze sadrzavati broj");
				}
			}
			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Ime ne moze sadrzavati specijalna slova");
				}
			}
			_ime = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Osoba::getPrezime() const
	{
		return _prezime;
	}

	void Osoba::setPrezime(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Prezime nije dobro postavljeno");

			}
			for (auto slovo : value)
			{
				int broj;
				bool uspjesno;
				if (uspjesno = int::TryParse(StringHelper::toString(slovo), broj))
				{
					throw std::runtime_error("Prezime ne moze sadrzavati broj");
				}
			}
			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Prezime ne moze sadrzavati specijalna slova");
				}
			}
			_prezime = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Osoba::getOIB() const
	{
		return _oib;
	}

	void Osoba::setOIB(const std::wstring &value)
	{
		try
		{
			if (value.length() != 11)
			{
				throw std::runtime_error("OIB nije dobro postavljen");
			}
			for (auto slovo : slova)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("OIB ne smije sadrzavati slovo");
				}
			}
			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("OIB ne moze sadrzavati specijalna slova");
				}
			}
			_oib = value;
		}
		catch (const std::runtime_error &e)
		{

			std::wcout << e.what() << std::endl;
		}
	}
}
