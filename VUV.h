#pragma once

#include "Projekt.h"
#include "ClanProjekta.h"
#include "Lokacija.h"
#include <string>
#include <vector>
#include <stdexcept>
#include <any>
#include "stringhelper.h"

using namespace BetterConsoleTables;
namespace VUV_Projekti
{

	class VUV
	{
	private:
		std::vector<Projekt*> Projekti = std::vector<Projekt*>();
		std::vector<ClanProjekta*> Clanovi = std::vector<ClanProjekta*>();
		std::vector<Lokacija*> Lokacije = std::vector<Lokacija*>();
		std::vector<ClanProjekta*> ListaVoditelja = std::vector<ClanProjekta*>();

	public:
		std::vector<Projekt*> getProjekti() const;
		void setProjekti(const std::vector<Projekt*> &value);
		std::vector<ClanProjekta*> getClanovi() const;
		void setClanovi(const std::vector<ClanProjekta*> &value);
		std::vector<Lokacija*> getLokacije() const;
		void setLokacije(const std::vector<Lokacija*> &value);
		std::vector<ClanProjekta*> getListaVoditelja() const;
		void setListaVoditelja(const std::vector<ClanProjekta*> &value);

		// Funkcija za resetiranje Podataka
		static void ResetirajPodatke();
		// Funkcija koja objekte stavlja u XML
		static void Serijalizacija(VUV *vuv);

		// Funkcija koja iz XMLa kreira objekte
		static VUV *Deserilizacija();
		// Funkcija za kreiranje rednog broja
		static void RedniBroj(std::vector<Projekt*> &projekti);

		// Funkcija za ispis svih Lokacija
		static VUV *IspisLokacija();
		static VUV *IspisLokacijazaProjekt();
		// Funkcija za dohvacanje Voditelja i daljnje baratanje njima
		static std::wstring GetVoditeljiString(std::vector<ClanProjekta*> &voditelji);
		// Funkcija za meni
		static void Meni();
		// Funkcija za ispis svih Projekata
		static VUV *IspisListeProjekata();
		// Funkcija za ispis svih Aktivnosti
		static VUV *IspisSvihAktivnosti();

		// Funckija za kreiranje Lokacije
		static void KreirajLokaciju();

		// Funkcija za kreiranje Projekta 
		static void KreirajProjekt();

		// Funckija za dodavnja aktivnosti sa svim atributima u dokument
		static void DodajAktivnost();

		// Ispis aktivnosti iz projekta
		static VUV *IspisAktivnostiProjekta();
		// Funckija za azuriranje Projekta
		static void AzurirajProjekt2();

		// Funkcija sa ispisom liste clanova
		static VUV *ListaClanova2();

		// Backup Funkcije
		static VUV *ListaClanova();

		// Funkcija za brisanje clana iz dokumenta
		static VUV *BrisanjeClana();

		// Funkcija za dodavanje Člana
		static void DodavanjeClana2();
	};
}

