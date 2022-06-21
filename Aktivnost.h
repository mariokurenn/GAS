#pragma once

#include "ClanProjekta.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>

namespace VUV_Projekti
{

	 class Aktivnost
	 {
	private:
		std::vector<ClanProjekta*> ClanoviProjekta = std::vector<ClanProjekta*>();

	public:
		std::vector<ClanProjekta*> getClanoviProjekta() const;
		void setClanoviProjekta(const std::vector<ClanProjekta*> &value);

		std::wstring getId() const;
		void setId(const std::wstring &value);

	private:
		std::wstring znakovi = LR"(\|!#$%&/=?»«@£§€{};'<>_)";
		std::wstring slova = LR"(ABCDĐEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqđrstuvwxyz)";
		std::wstring _id_aktivnosti;

	public:
		std::wstring getNaziv() const;
		void setNaziv(const std::wstring &value);
	private:
		std::wstring _naziv;

	public:

		std::wstring getOpis() const;
		void setOpis(const std::wstring &value);

	private:
		std::wstring _opis;

	public:

		std::wstring getVrijeme() const;
		void setVrijeme(const std::wstring &value);


	private:
		std::wstring _vrijeme;

	 };
}
