#include "Lokacija.h"

namespace VUV_Projekti
{

	std::wstring Lokacija::getId() const
	{
		return _id_lokacije;
	}

	void Lokacija::setId(const std::wstring &value)
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

			_id_lokacije = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Lokacija::getAdresa() const
	{
		return _adresa;
	}

	void Lokacija::setAdresa(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Adresa nije dobro postavljena");

			}


			_adresa = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Lokacija::getPostanskibroj() const
	{
		return _postanskibroj;
	}

	void Lokacija::setPostanskibroj(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Postanski broj nije dobro postavljen");

			}

			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Postanski broj ne moze sadrzavati specijalna slova");
				}
			}
			for (auto slovo : slova)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("ID ne smije sadrzavati slovo");
				}
			}

			_postanskibroj = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Lokacija::getGrad() const
	{
		return Grad;
	}

	void Lokacija::setGrad(const std::wstring &value)
	{
		Grad = value;
	}

	std::wstring Lokacija::getLatituda() const
	{
		return _latituda;
	}

	void Lokacija::setLatituda(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Latituda nije dobro postavljena");

			}

			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Latituda ne moze sadrzavati specijalna slova");
				}
			}
			for (auto slovo : slova)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Latituda ne smije sadrzavati slovo");
				}
			}
			_latituda = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Lokacija::getLongituda() const
	{
		return _longituda;
	}

	void Lokacija::setLongituda(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Latituda nije dobro postavljena");

			}

			for (auto slovo : znakovi)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Latituda ne moze sadrzavati specijalna slova");
				}
			}
			for (auto slovo : slova)
			{
				if (value.find(slovo) != std::wstring::npos)
				{
					throw std::runtime_error("Longituda ne smije sadrzavati slovo");
				}
			}
			_longituda = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}
}
