#include "Projekt.h"

namespace VUV_Projekti
{

	std::wstring Projekt::getID() const
	{
		return _id;
	}

	void Projekt::setID(const std::wstring &value)
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

	std::wstring Projekt::getNaziv() const
	{
		return _naziv;
	}

	void Projekt::setNaziv(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Naziv nije dobro postavljen");
			}
			_naziv = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Projekt::getNositelj() const
	{
		return _nositelj;
	}

	void Projekt::setNositelj(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Nositelj nije dobro postavljen");
			}
			_nositelj = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Projekt::getVrijednost() const
	{
		return _vrijednost;
	}

	void Projekt::setVrijednost(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Vrijednost nije dobro postavljena");
			}
			_vrijednost = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::wstring Projekt::getStatus() const
	{
		return _status;
	}

	void Projekt::setStatus(const std::wstring &value)
	{
		try
		{
			if (value.length() <= 0)
			{
				throw std::runtime_error("Status nije dobro postavljen");
			}
			_status = value;
		}
		catch (const std::runtime_error &e)
		{
			std::wcout << e.what() << std::endl;
		}
	}

	std::vector<VUV_Projekti::ClanProjekta*> Projekt::getClanProjekta() const
	{
		return ClanProjekta;
	}

	void Projekt::setClanProjekta(const std::vector<VUV_Projekti::ClanProjekta*> &value)
	{
		ClanProjekta = value;
	}

	std::vector<VUV_Projekti::ClanProjekta*> Projekt::getListaVoditelja() const
	{
		return ListaVoditelja;
	}

	void Projekt::setListaVoditelja(const std::vector<VUV_Projekti::ClanProjekta*> &value)
	{
		ListaVoditelja = value;
	}

	std::vector<Aktivnost*> Projekt::getAktivnosti() const
	{
		return Aktivnosti;
	}

	void Projekt::setAktivnosti(const std::vector<Aktivnost*> &value)
	{
		Aktivnosti = value;
	}

	VUV_Projekti::Lokacija *Projekt::getLokacija() const
	{
		return Lokacija;
	}

	void Projekt::setLokacija(VUV_Projekti::Lokacija *value)
	{
		Lokacija = value;
	}

	int Projekt::getRedniBroj() const
	{
		return RedniBroj;
	}

	void Projekt::setRedniBroj(int value)
	{
		RedniBroj = value;
	}
}
