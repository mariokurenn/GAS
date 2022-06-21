#include "ClanProjekta.h"

namespace VUV_Projekti
{

	bool ClanProjekta::getVoditelj() const
	{
		return _voditelj;
	}

	void ClanProjekta::setVoditelj(bool value)
	{


			_voditelj = value;

	}

	bool ClanProjekta::getDeleted() const
	{
		return _deleted;
	}

	void ClanProjekta::setDeleted(bool value)
	{

		  _deleted = value;
	}

	bool ClanProjekta::Validate()
	{
		if (this->getID().length() == 0)
		{
			std::wcout << L"ID ne smije biti prazan" << std::endl;
			return false;
		}
		if (this->getIme().length() == 0)
		{
			std::wcout << L"Ime ne smije biti prazno" << std::endl;
			return false;
		}
		return true;
	}
}
