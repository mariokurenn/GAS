#pragma once

#include "ClanProjekta.h"
#include "Aktivnost.h"
#include "Lokacija.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>

namespace VUV_Projekti
{
	class Projekt
	{
	private:
		std::vector<VUV_Projekti::ClanProjekta*> ClanProjekta = std::vector<VUV_Projekti::ClanProjekta*>();
		std::vector<VUV_Projekti::ClanProjekta*> ListaVoditelja = std::vector<VUV_Projekti::ClanProjekta*>();
		std::vector<Aktivnost*> Aktivnosti = std::vector<Aktivnost*>();
		VUV_Projekti::Lokacija *Lokacija;
		int RedniBroj = 0;


	public:

		std::wstring getID() const;
		void setID(const std::wstring &value);
	private:
		std::wstring _id;
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCDĐEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqđrstuvwxyz)";
	public:

		std::wstring getNaziv() const;
		void setNaziv(const std::wstring &value);
	private:
		std::wstring _naziv;
	public:

		std::wstring getNositelj() const;
		void setNositelj(const std::wstring &value);
	private:
		std::wstring _nositelj;
	public:

		std::wstring getVrijednost() const;
		void setVrijednost(const std::wstring &value);
	private:
		std::wstring _vrijednost;
	public:
		std::wstring getStatus() const;
		void setStatus(const std::wstring &value);
	private:
		std::wstring _status;

	public:
		std::vector<VUV_Projekti::ClanProjekta*> getClanProjekta() const;
		void setClanProjekta(const std::vector<VUV_Projekti::ClanProjekta*> &value);


		std::vector<VUV_Projekti::ClanProjekta*> getListaVoditelja() const;
		void setListaVoditelja(const std::vector<VUV_Projekti::ClanProjekta*> &value);

		std::vector<Aktivnost*> getAktivnosti() const;
		void setAktivnosti(const std::vector<Aktivnost*> &value);
		VUV_Projekti::Lokacija *getLokacija() const;
		void setLokacija(VUV_Projekti::Lokacija *value);

		int getRedniBroj() const;
		void setRedniBroj(int value);
	};
}
