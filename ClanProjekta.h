#pragma once

#include "Osoba.h"
#include "Projekt.h"
#include <iostream>

namespace VUV_Projekti
{
	class ClanProjekta : public Osoba, public IValidate
	{
	public:
		Projekt *Projekt;


		virtual ~ClanProjekta()
		{
			delete Projekt;
		}

		bool getVoditelj() const;


		void setVoditelj(bool value);


	private:
		bool _voditelj = false;

	public:
	  bool getDeleted() const;
	  void setDeleted(bool value);



	private:
		bool _deleted = false;
	public:
		bool Validate();
	};
}
