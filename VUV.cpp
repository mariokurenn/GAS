#include "VUV.h"
#include "Aktivnost.h"
#include "Program.h"
#include "Izbornik.h"

using namespace BetterConsoleTables;
using Console = Colorful::Console;

namespace VUV_Projekti
{

	std::vector<Projekt*> VUV::getProjekti() const
	{
		return Projekti;
	}

	void VUV::setProjekti(const std::vector<Projekt*> &value)
	{
		Projekti = value;
	}

	std::vector<ClanProjekta*> VUV::getClanovi() const
	{
		return Clanovi;
	}

	void VUV::setClanovi(const std::vector<ClanProjekta*> &value)
	{
		Clanovi = value;
	}

	std::vector<Lokacija*> VUV::getLokacije() const
	{
		return Lokacije;
	}

	void VUV::setLokacije(const std::vector<Lokacija*> &value)
	{
		Lokacije = value;
	}

	std::vector<ClanProjekta*> VUV::getListaVoditelja() const
	{
		return ListaVoditelja;
	}

	void VUV::setListaVoditelja(const std::vector<ClanProjekta*> &value)
	{
		ListaVoditelja = value;
	}

	void VUV::ResetirajPodatke()
	{
		VUV *vuv = new VUV();
		ClanProjekta *mario = new ClanProjekta();
		mario->setID(L"1");
		mario->setIme(L"Mario");
		mario->setPrezime(L"Ivakovic");
		mario->setOIB(L"28993030571");
		mario->setVoditelj(true);
		mario->setDeleted(false);
		ClanProjekta *ivan = new ClanProjekta();
		ivan->setID(L"2");
		ivan->setIme(L"Ivan");
		ivan->setPrezime(L"Peric");
		ivan->setOIB(L"85739312800");
		ivan->setVoditelj(true);
		ivan->setDeleted(false);
		ClanProjekta *helena = new ClanProjekta();
		helena->setID(L"3");
		helena->setIme(L"Helena");
		helena->setPrezime(L"Ivic");
		helena->setOIB(L"54684809551");
		helena->setVoditelj(true);
		helena->setDeleted(false);
		ClanProjekta *vedran = new ClanProjekta();
		vedran->setID(L"4");
		vedran->setIme(L"Vedran");
		vedran->setPrezime(L"Jerkovic");
		vedran->setOIB(L"92029545561");
		vedran->setVoditelj(true);
		vedran->setDeleted(false);

		ClanProjekta *bozo = new ClanProjekta();
		bozo->setID(L"5");
		bozo->setIme(L"Bozidar");
		bozo->setPrezime(L"Bozidarevic");
		bozo->setOIB(L"50736098472");
		bozo->setVoditelj(true);
		bozo->setDeleted(false);
		ClanProjekta *petar = new ClanProjekta();
		petar->setID(L"6");
		petar->setIme(L"Petar");
		petar->setPrezime(L"Peric");
		petar->setOIB(L"62869221238");
		petar->setVoditelj(false);
		petar->setDeleted(false);
		ClanProjekta *zeljko = new ClanProjekta();
		zeljko->setID(L"7");
		zeljko->setIme(L"Zeljko");
		zeljko->setPrezime(L"Sendvic");
		zeljko->setOIB(L"99384575988");
		zeljko->setVoditelj(false);
		zeljko->setDeleted(false);
		ClanProjekta *zdravko = new ClanProjekta();
		zdravko->setID(L"8");
		zdravko->setIme(L"Zdravko");
		zdravko->setPrezime(L"Babic");
		zdravko->setOIB(L"86809339209");
		zdravko->setVoditelj(false);
		zdravko->setDeleted(false);
		ClanProjekta *hamzo = new ClanProjekta();
		hamzo->setID(L"9");
		hamzo->setIme(L"Hamzo");
		hamzo->setPrezime(L"Cuturic");
		hamzo->setOIB(L"68689538295");
		hamzo->setVoditelj(false);
		hamzo->setDeleted(false);
		ClanProjekta *vito = new ClanProjekta();
		vito->setID(L"10");
		vito->setIme(L"Vito");
		vito->setPrezime(L"Rukavina");
		vito->setOIB(L"90144583083");
		vito->setVoditelj(false);
		vito->setDeleted(false);
		ClanProjekta *magda = new ClanProjekta();
		magda->setID(L"11");
		magda->setIme(L"Magda");
		magda->setPrezime(L"Babic");
		magda->setOIB(L"41511091594");
		magda->setVoditelj(false);
		magda->setDeleted(false);
		vuv->getClanovi().push_back(mario);
		vuv->getClanovi().push_back(ivan);
		vuv->getClanovi().push_back(helena);
		vuv->getClanovi().push_back(vedran);
		vuv->getClanovi().push_back(bozo);
		vuv->getClanovi().push_back(zeljko);
		vuv->getClanovi().push_back(zdravko);
		vuv->getClanovi().push_back(hamzo);
		vuv->getClanovi().push_back(vito);
		vuv->getListaVoditelja().push_back(mario);
		vuv->getListaVoditelja().push_back(ivan);
		vuv->getListaVoditelja().push_back(helena);
		vuv->getListaVoditelja().push_back(vedran);

		Projekt *p1 = new Projekt();
		p1->setID(L"1");
		p1->setNaziv(L"Studentski startup inkubator");
		p1->setNositelj(L"Veleučilište u Virovitici – Odjel za ekonomiju");
		p1->setStatus(L"Aktivan");
		p1->setVrijednost(L"1000000 kuna");
		Lokacija tempVar();
		p1->setLokacija(&tempVar);
		p1->getLokacija()->setId(L"1");
		p1->getLokacija()->setAdresa(L"Ulica Matije Gupca 23");
		p1->getLokacija()->setGrad(L"Virovitica");
		p1->getLokacija()->setLongituda(L"45.84193993175785");
		p1->getLokacija()->setLatituda(L"17.38768898218219");
		p1->getLokacija()->setPostanskibroj(L"33000");
		Aktivnost *a1 = new Aktivnost();
		a1->setId(L"1");
		a1->setNaziv(L"Održana konferencija");
		a1->setOpis(L"Konferencija za studentski startup inkubator u Virovitici");
		a1->setVrijeme(L"1.9.2010. – 1.9.2011.");

		Projekt *p2 = new Projekt();
		p2->setID(L"2");
		p2->setNaziv(L"Izrada mobilne aplikacije Life Old Drava");
		p2->setNositelj(L"Visoka škola Virovitica – Centar za istraživanje i razvoj");
		p2->setStatus(L"Aktivan");
		p2->setVrijednost(L"20000 kuna");
		Lokacija tempVar2();
		p2->setLokacija(&tempVar2);
		p2->getLokacija()->setId(L"2");
		p2->getLokacija()->setAdresa(L"Ulica Matije Gupca 23");
		p2->getLokacija()->setGrad(L"Virovitica");
		p2->getLokacija()->setLongituda(L"45.84193993175785");
		p2->getLokacija()->setLatituda(L"17.38768898218219");
		p2->getLokacija()->setPostanskibroj(L"33000");
		Aktivnost *a2 = new Aktivnost();
		a2->setId(L"2");
		a2->setNaziv(L"Team Meet-up");
		a2->setOpis(L"Odrzavanje Team Meetupa nakon izrade mobilne aplikacije Life Old Drava");
		a2->setVrijeme(L"18.9.2017.-31.3.2017.");

		Projekt *p3 = new Projekt();
		p3->setID(L"3");
		p3->setNaziv(L"Provedba HKO u stručnim studijima računarstva (2019. – 2022.)");
		p3->setNositelj(L"Visoko učilište Algebra");
		p3->setStatus(L"Aktivan");
		p3->setVrijednost(L"3.836.901,74 kuna");
		Lokacija tempVar3();
		p3->setLokacija(&tempVar3);
		p3->getLokacija()->setId(L"3");
		p3->getLokacija()->setAdresa(L"Gradišćanska ul. 24, 10000, Zagreb");
		p3->getLokacija()->setGrad(L"Zagreb");
		p3->getLokacija()->setLongituda(L"45.810331562989");
		p3->getLokacija()->setLatituda(L" 15.941404447629267");
		p3->getLokacija()->setPostanskibroj(L"10000");
		Aktivnost *a3 = new Aktivnost();
		a3->setId(L"3");
		a3->setNaziv(L"Razvoj i izrada standarda kvalifikacija na preddiplomskoj i diplomskoj razini");
		a3->setOpis(L"Sudjelovanje na konferenciji i/ili edukaciji namijenjenoj unaprijeđenju stručnosti nastavnik");
		a3->setVrijeme(L"2014-2020.");


		Projekt *p4 = new Projekt();
		p4->setID(L"4");
		p4->setNaziv(L"Izgradnja studentskog doma u Virovitici");
		p4->setNositelj(L"Visoka škola Virovitica");
		p4->setStatus(L"Zavrsen");
		p4->setVrijednost(L"5.836.901,74 kuna");
		Lokacija tempVar4();
		p4->setLokacija(&tempVar4);
		p4->getLokacija()->setId(L"4");
		p4->getLokacija()->setAdresa(L"Ul. Matije Gupca 78/4 ");
		p4->getLokacija()->setGrad(L"Virovitica");
		p4->getLokacija()->setLongituda(L"45.8418487638295");
		p4->getLokacija()->setLatituda(L"17.38902768907842");
		p4->getLokacija()->setPostanskibroj(L"33000");
		Aktivnost *a4 = new Aktivnost();
		a4->setId(L"4");
		a4->setNaziv(L"Izgradnja i planiranje doma za studente");
		a4->setOpis(L"Tijekom tog perioda, ulozen je velik trud i napor za nase studente. Izgradnja je trajala preko godinu dana.");
		a4->setVrijeme(L"14.4.2015. -30.8.2017.");

		Projekt *p5 = new Projekt();
		p5->setID(L"5");
		p5->setNaziv(L"Usvajanje principa Hrvatskog kvalifikacijskog okvira(HKO - a)");
		p5->setNositelj(L"Libertas međunarodno sveučilište");
		p5->setStatus(L"Zavrsen");
		p5->setVrijednost(L"2684983.77 kuna");
		Lokacija tempVar5();
		p5->setLokacija(&tempVar5);
		p5->getLokacija()->setId(L"5");
		p5->getLokacija()->setAdresa(L"Ul. Ive Lole Ribara ");
		p5->getLokacija()->setGrad(L"Donji Lapac");
		p5->getLokacija()->setLongituda(L"45.8418487638295");
		p5->getLokacija()->setLatituda(L"17.38902768907842");
		p5->getLokacija()->setPostanskibroj(L"53250");
		Aktivnost *a5 = new Aktivnost();
		a5->setId(L"5");
		a5->setNaziv(L"organizacija relevantnih fokus grupa,razvoj pet kvalifikacijskih standarda, jedan novi te prilagodba 4 postojeća studijska programa");
		a5->setOpis(L"Organizirali smo relevantne fokus grupe, razvili pet kvalifikacijskih standarda, jedan novi te prilagodbu 4 postojeća programa");
		a5->setVrijeme(L"19.08.2013 - 19.03.2015");


		p1->getClanProjekta().push_back(bozo);


		a1->getClanoviProjekta().push_back(mario);
		a1->getClanoviProjekta().push_back(petar);
		a1->getClanoviProjekta().push_back(ivan);



		p2->getListaVoditelja().push_back(vedran);
		p2->getListaVoditelja().push_back(helena);

		a2->getClanoviProjekta().push_back(vito);
		a2->getClanoviProjekta().push_back(bozo);
		a2->getClanoviProjekta().push_back(hamzo);


		p3->getClanProjekta().push_back(petar);
		p3->getClanProjekta().push_back(vito);

		a3->getClanoviProjekta().push_back(magda);
		a3->getClanoviProjekta().push_back(mario);
		a3->getClanoviProjekta().push_back(petar);
		a3->getClanoviProjekta().push_back(ivan);

		p4->getClanProjekta().push_back(vedran);
		p4->getClanProjekta().push_back(vito);
		a4->getClanoviProjekta().push_back(vedran);
		a4->getClanoviProjekta().push_back(zdravko);
		a4->getClanoviProjekta().push_back(helena);


		p5->getClanProjekta().push_back(hamzo);
		p5->getClanProjekta().push_back(vito);
		p5->getClanProjekta().push_back(vedran);
		p5->getClanProjekta().push_back(zdravko);
		a5->getClanoviProjekta().push_back(vedran);
		a5->getClanoviProjekta().push_back(petar);
		a5->getClanoviProjekta().push_back(helena);

		p1->getAktivnosti().push_back(a1);
		p2->getAktivnosti().push_back(a2);
		p3->getAktivnosti().push_back(a3);
		p4->getAktivnosti().push_back(a4);
		p5->getAktivnosti().push_back(a5);


		p1->getListaVoditelja().push_back(ivan);
		p1->getListaVoditelja().push_back(mario);


		p2->getClanProjekta().push_back(zdravko);
		p2->getClanProjekta().push_back(hamzo);

		p3->getListaVoditelja().push_back(helena);

		p4->getListaVoditelja().push_back(ivan);
		p4->getListaVoditelja().push_back(mario);

		p5->getListaVoditelja().push_back(ivan);
		vuv->getProjekti().push_back(p1);
		vuv->getProjekti().push_back(p2);
		vuv->getProjekti().push_back(p3);
		vuv->getProjekti().push_back(p4);
		vuv->getProjekti().push_back(p5);

		vuv->getLokacije().push_back(p1->getLokacija());
		vuv->getLokacije().push_back(p2->getLokacija());
		vuv->getLokacije().push_back(p3->getLokacija());
		vuv->getLokacije().push_back(p4->getLokacija());
		vuv->getLokacije().push_back(p5->getLokacija());


		RedniBroj(vuv->getProjekti());

		XmlSerializer *x = new XmlSerializer(typeof(VUV));
		TextWriter *writer = new StreamWriter(L"VUV.xml");
		x->Serialize(writer, vuv);
		writer->Dispose();
		Console::WriteLine(L"Podaci uspjesno resetirani");
		Meni();

		delete x;

	}

	void VUV::Serijalizacija(VUV *vuv)
	{

		XmlSerializer *x = new XmlSerializer(typeof(VUV));
		TextWriter *writer = new StreamWriter(L"VUV.xml");
		x->Serialize(writer, vuv);
		writer->Dispose();
		delete x;
	}

	VUV *VUV::Deserilizacija()
	{

		XmlSerializer *x = new XmlSerializer(typeof(VUV));

		{
			auto reader = StreamReader(L"VUV.xml");;
			auto des = std::any_cast<VUV*>(x->Deserialize(reader));
			reader.Dispose();

			delete x;
			return des;
        
		}

		delete x;
	}

	void VUV::RedniBroj(std::vector<Projekt*> &projekti)
	{

		int i = 1;
		for (auto p : projekti)
		{
			p->setRedniBroj(i);
			i++;
		}
	}

	VUV *VUV::IspisLokacija()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID Lokacije", L"Grad", L"Latituda", L"Longituda", L"Postanski Broj");
		tablica->Config = TableConfiguration::MySql();
		if (des->getLokacije().size() > 0)
		{
			for (auto l : *des->getLokacije())
			{
				tablica->AddRow(l->getId(), l->getGrad(), l->getLatituda(), l->getLongituda(), l->getPostanskibroj());
			}
			Console::Write(tablica->ToString());
		}
		else
		{
			Console::WriteLine(L"Ne postoji ni jedna lokacija");
		}
		Meni();

		delete tablica;
		return des;
	}

	VUV *VUV::IspisLokacijazaProjekt()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID Lokacije", L"Grad", L"Latituda", L"Longituda", L"Postanski Broj");
		tablica->Config = TableConfiguration::MySql();
		if (des->getLokacije().size() > 0)
		{
			for (auto l : *des->getLokacije())
			{
				tablica->AddRow(l->getId(), l->getGrad(), l->getLatituda(), l->getLongituda(), l->getPostanskibroj());
			}
			Console::Write(tablica->ToString());
		}
		else
		{
			Console::WriteLine(L"Ne postoji ni jedna lokacija");
		}

		delete tablica;
		return des;
	}

	std::wstring VUV::GetVoditeljiString(std::vector<ClanProjekta*> &voditelji)
	{
		auto result = L"";
		for (auto clan : voditelji)
		{
			result = result + clan->getIme() + L" " + clan->getPrezime() + L" ";
		}
		return result;
	}

	void VUV::Meni()
	{
		if (Console::ReadKey().Key == ConsoleKey::Escape)
		{
			Program::Administracija();
		}

		std::wstring prompt = L"";
		std::vector<std::wstring> opcije = {L"Nazad"};
		Izbornik *izlaz = new Izbornik(prompt, opcije);
		int OdabraniIndex = izlaz->Pokreni();

		switch (OdabraniIndex)
		{
			case 0:

				Program::Administracija();
				break;
		}

		delete izlaz;
	}

	VUV *VUV::IspisListeProjekata()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"R.Br", L"Naziv", L"Nositelj", L"Vrijednost", L"Status", L"Voditelji", L"Lokacija");
		tablica->Config = TableConfiguration::MySql();
		if (des->getProjekti().size() > 0)
		{
			for (auto p : *des->getProjekti())
			{
				tablica->AddRow(p->getRedniBroj(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus(), GetVoditeljiString(p->getListaVoditelja()), p->getLokacija()->getGrad());
			}

			Console::Write(tablica->ToString());
		}
		else
		{
			Console::WriteLine(L"Ne postoji ni jedan projekt");
		}
		Meni();

		delete tablica;
		return des;
	}

	VUV *VUV::IspisSvihAktivnosti()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID aktivnosti", L"Naziv", L"Opis", L"Vrijeme");
		tablica->Config = TableConfiguration::MySql();
		for (auto p : *des->getProjekti())
		{
			for (auto a : *p->getAktivnosti())
			{
				tablica->AddRow(a->getId(), a->getNaziv(), a->getOpis(), a->getVrijeme());
			}
		}
	void Program::IzlazIzPrograma()
	{
		std::wstring prompt = L"Jeste li sigurni da zelite napustiti program?";
		std::vector<std::wstring> opcije = {L"Da", L"Ne"};
		Izbornik *izlaz = new Izbornik(prompt, opcije);
		int OdabraniIndex = izlaz->Pokreni();

		switch (OdabraniIndex)
		{
			case 0:
				exit(0);

				break;
			case 1:
			{
				std::wstring ispis = L"Vracanje u glavni izbornik.......";
				Console::Clear();
				std::wcout << std::endl;
				delay(500);
				Console::Clear();
				PokreniIzbornik();
				break;
			}
		}
		Console::Write(tablica->ToString());
		VUV::Serijalizacija(des);
		Meni();

		delete tablica;
		return des;
	}

	void VUV::KreirajLokaciju()
	{
		try
		{
			auto des = Deserilizacija();
			Console::WriteLine(L"Dodajte Lokaciju:");
			Console::WriteLine(L"");
			std::wstring id;
			std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{};'.<>_)";
			std::wstring slova = LR"(ABCĆČŽDĐEFGHIJKLMNOPRQRSTUVWXYZabcćčđždefghijklmnoprqđrstuvwxyz)";
			std::wstring brojevi = LR"(0123456789)";
			Lokacija *l = new Lokacija();
			do
			{

				try
				{
					Console::WriteLine(L"Upišite ID Lokacije: ");
					id = Console::ReadLine();
					if (id.length() == 0)
					{
						delete l;
						throw std::runtime_error("ID je prazan");
					}

					for (auto slovo : znakovi)
					{
						if (id.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("ID ne moze sadrzavati specijalna slova");

						}
					}
					for (auto slovo : slova)
					{
						if (id.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("ID ne smije sadrzavati slovo");
						}
					}
					for (auto li : *des->getLokacije())
					{

						if (li->getId() == id)
						{
							delete l;
							throw std::runtime_error("Lokacija s tim ID-em već postoji");
						}

					}
					l->setId(id);
					break;
				}
				catch (const std::runtime_error &e)
				{

					Console::WriteLine(e.what());
				}

			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite Adresu: ");
					std::wstring adresa = Console::ReadLine();
					if (adresa.length() == 0)
					{
						delete l;
						throw std::runtime_error("Adresa je prazna, pokušajte ponovo");
					}
					l->setAdresa(adresa);
					break;
				}
				catch (const std::runtime_error &e)
				{
					Console::WriteLine(e.what());
				}
			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite poštanski broj: ");
					std::wstring postanskibroj = Console::ReadLine();
					for (auto slovo : znakovi)
					{
						if (postanskibroj.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Poštanski broj ne moze sadrzavati specijalna slova");

						}
					}
					for (auto slovo : slova)
					{
						if (postanskibroj.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Poštanski broj ne smije sadrzavati slovo");
						}
					}
					if (postanskibroj.length() != 5)
					{
						delete l;
						throw std::runtime_error("Poštanski broj nije ispravan, pokušajte ponovo");
					}

					l->setPostanskibroj(postanskibroj);
					break;
				}
				catch (const std::runtime_error &postanskibroj)
				{
					Console::WriteLine(postanskibroj.what());
				}
			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite ime grada");
					std::wstring grad = Console::ReadLine();
					if (grad.length() == 0)
					{
						delete l;
						throw std::runtime_error("Ime grada je prazno");
					}
					for (auto broj : brojevi)
					{
						if (grad.find(brojevi) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Ime grada ne smije sadrzavati brojeve");
						}
					}
					l->setGrad(grad);
					break;
				}
				catch (const std::runtime_error &egrad)
				{
					Console::WriteLine(egrad.what());
				}
			} while (true);
			do
			{
				try
				{
					Decimal dlatituda;
					Console::WriteLine(L"Unesite latitudu grada");
					std::wstring latituda = Console::ReadLine();
					dlatituda = Decimal::Parse(latituda);
					if (latituda.length() == 0)
					{
						delete l;
						throw std::runtime_error("Latituda grada je prazna");
					}
					for (auto slovo : slova)
					{
						if (latituda.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Latituda ne smije sadrzavati slovo");
						}
					}
					for (auto slovo : znakovi)
					{
						if (latituda.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Latituda ne moze sadrzavati specijalna slova");
						}


					}


					if (dlatituda < -90 || dlatituda > 90)
					{
						delete l;
						throw std::runtime_error("Latituda nije dobro postavljena");

					}
					else
					{
					   l->setLatituda(std::to_wstring(dlatituda));
						break;
					}

				}
				catch (const std::runtime_error &lat)
				{

					Console::WriteLine(lat.what());
				}
			} while (true);
			do
			{
				try
				{
					Decimal dlongituda;
					Console::WriteLine(L"Unesite longitudu grada");
					std::wstring longituda = Console::ReadLine();
					dlongituda = Decimal::Parse(longituda);
					if (longituda.length() == 0)
					{
						delete l;
						throw std::runtime_error("Longituda grada je prazna");
					}
					for (auto slovo : slova)
					{
						if (longituda.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Longituda ne smije sadrzavati slovo");
						}
					}
					for (auto slovo : znakovi)
					{
						if (longituda.find(slovo) != std::wstring::npos)
						{
							delete l;
							throw std::runtime_error("Longituda ne moze sadrzavati specijalna slova");
						}
					}
					if (dlongituda < -180 || dlongituda > 180)
					{
						delete l;
						throw std::runtime_error("Latituda nije dobro postavljena");
					}
					else
					{
						l->setLongituda(std::to_wstring(dlongituda));
						break;
					}
				}
				catch (const std::runtime_error &lat)
				{

					Console::WriteLine(lat.what());
				}
			} while (true);

			try
			{

				Console::WriteLine(L"Lokacija je uspjesno dodana.",Color::Green);

				des->getLokacije().push_back(l);
				VUV::Serijalizacija(des);
				Meni();
			}
			catch (const std::runtime_error &uspijeh)
			{

				Console::WriteLine(uspijeh);
			}

		}
		catch (const std::runtime_error &e)
		{

			Console::WriteLine(e.what());
		}
	}

	void VUV::KreirajProjekt()
	{
		try
		{
			auto des = Deserilizacija();
			Console::WriteLine(L"Dodajte projekt:");
			Console::WriteLine(L"");
			std::wstring id;
			std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
			std::wstring slova = LR"(ABCĆČŽDĐEFGHIJKLMNOPRQRSTUVWXYZabcćčđždefghijklmnoprqđrstuvwxyz)";
			Projekt *p = new Projekt();
			do
			{

				try
				{
					Console::WriteLine(L"Upišite ID projekta: ");
					id = Console::ReadLine();
					if (id.length() == 0)
					{
						delete p;
						throw std::runtime_error("ID je prazan");
					}

					for (auto slovo : znakovi)
					{
						if (id.find(slovo) != std::wstring::npos)
						{
							delete p;
							throw std::runtime_error("ID ne moze sadrzavati specijalna slova");

						}
					}
					for (auto slovo : slova)
					{
						if (id.find(slovo) != std::wstring::npos)
						{
							delete p;
							throw std::runtime_error("ID ne smije sadrzavati slovo");
						}
					}
					for (auto i : *des->getProjekti())
					{

						if (i->getID() == id)
						{
							delete p;
							throw std::runtime_error("Projekt s tim ID-em već postoji");
						}

					}
					p->setID(id);
					break;
				}
				catch (const std::runtime_error &e)
				{

					Console::WriteLine(e.what());
				}

			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite naziv: ");
					std::wstring naziv = Console::ReadLine();
					if (naziv.length() == 0)
					{
						delete p;
						throw std::runtime_error("Naziv je prazan, pokušajte ponovo");
					}
					p->setNaziv(naziv);
					break;
				}
				catch (const std::runtime_error &e)
				{
					Console::WriteLine(e.what());
				}
			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite nositelja: ");
					std::wstring nositelj = Console::ReadLine();
					if (nositelj.length() == 0)
					{
						delete p;
						throw std::runtime_error("Nositelj je prazan, pokušajte ponovo");
					}
					p->setNositelj(nositelj);
					break;
				}
				catch (const std::runtime_error &enaziv)
				{
					Console::WriteLine(enaziv.what());
				}
			} while (true);
			do
			{
				try
				{
					Console::WriteLine(L"Unesite vrijednost");
					std::wstring vrijednost = Console::ReadLine();
					if (vrijednost.length() == 0)
					{
						delete p;
						throw std::runtime_error("Vrijednost je prazna");
					}
					if (vrijednost.find(slova) != std::wstring::npos)
					{
						delete p;
						throw std::runtime_error("Vrijednost ne smije sadrzavati slova");
					}
					p->setVrijednost(vrijednost + L" kuna");
					break;
				}
				catch (const std::runtime_error &evrijednost)
				{
					Console::WriteLine(evrijednost.what());
				}
			} while (true);
			do
			{
				try
				{
					IspisLokacijazaProjekt();
					Console::WriteLine(L"Unesite ID lokacije");
					std::wstring id_lokacije = Console::ReadLine();
					bool lokacijaprovjera = false;

					if (id_lokacije.length() == 0)
					{
						delete p;
						throw std::runtime_error("ID lokacije je prazan");
					}
					if (id_lokacije.find(slova) != std::wstring::npos)
					{
						delete p;
						throw std::runtime_error("ID ne smije sadrzavati slova");
					}
					for (auto l : *des->getLokacije())
					{
						if (l->getId() == id_lokacije)
						{
							p->setLokacija(l);
							lokacijaprovjera = true;
							break;
						}
					}
					break;
				}
				catch (const std::runtime_error &elokacija)
				{
					Console::WriteLine(elokacija.what());
				}
			} while (true);


			try
			{
				std::wstring prompt = L"Unesite status projekta:";
				std::vector<std::wstring> opcije = {L"Aktivan", L"Zavrsen", L"Neaktivan"};
				Izbornik *izlaz = new Izbornik(prompt, opcije);
				int OdabraniIndex = izlaz->Pokreni();

				switch (OdabraniIndex)
				{
					case 0:
						prompt = L"Aktivan";
						break;
					case 1:
						prompt = L"Zavrsen";
						break;
					case 2:
						prompt = L"Neaktivan";
						break;
				}
				p->setStatus(prompt);

				delete izlaz;
			}
			catch (const std::runtime_error &eprojekt)
			{
				Console::WriteLine(eprojekt.what());
			}
			try
			{
				Console::WriteLine(L"Projekt je uspjesno dodan.");
				des->getProjekti().push_back(p);
				RedniBroj(des->getProjekti());
				VUV::Serijalizacija(des);
				Meni();
			}
			catch (const std::runtime_error &uspijeh)
			{

				Console::WriteLine(uspijeh);
			}

		}
		catch (const std::runtime_error &e)
		{

			Console::WriteLine(e.what());
		}
	}

	void VUV::DodajAktivnost()
	{
		auto des = Deserilizacija();
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCĆČŽDĐEFGHIJKLMNOPRQRSTUVWXYZabcćčđždefghijklmnoprqđrstuvwxyz)";
		std::wstring id;
		std::wstring idProjekta;
		std::wstring naziv;
		std::wstring opis;
		std::wstring vrijeme;
		Table *tablica = new Table(L"R.Br", L"Naziv", L"Nositelj", L"Vrijednost", L"Status", L"Voditelji", L"Lokacija");

		tablica->Config = TableConfiguration::MySql();
		if (des->getProjekti().size() > 0)
		{
			for (auto p : *des->getProjekti())
			{
				tablica->AddRow(p->getID(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus(), GetVoditeljiString(p->getListaVoditelja()), p->getLokacija()->getGrad());
			}
			Console::Write(tablica->ToString());
		}
		else
		{
			Console::WriteLine(L"Ne postoji ni jedan projekt");
		}

		do
		{
			try
			{
				Console::WriteLine(L"Dodajte aktivnost:");
				Console::WriteLine(L"");
				Console::WriteLine(L"Unesite ID projekta: ");
				idProjekta = Console::ReadLine();
				if (idProjekta.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("ID je prazan");
				}

				for (auto slovo : znakovi)
				{
					if (idProjekta.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne moze sadrzavati specijalna slova");

					}
				}
				for (auto slovo : slova)
				{
					if (idProjekta.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne smije sadrzavati slovo");
					}
				}
				bool provjerabool = false;
				for (auto provjera : *des->getProjekti())
				{
					if (idProjekta == provjera->getID())
					{
						provjerabool = true;
					}
				}
				if (provjerabool == false)
				{
					delete tablica;
					throw std::runtime_error("Projekt ne postoji");
				}
				break;
			}
			catch (const std::runtime_error &aktivnost)
			{
				Console::WriteLine(aktivnost.what());
			}
		} while (true);
		do
		{
			try
			{
				Console::WriteLine(L"Unesite ID aktivnosti koji želite: ");
				id = Console::ReadLine();
				if (id.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("ID je prazan");
				}

				for (auto slovo : znakovi)
				{
					if (id.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne moze sadrzavati specijalna slova");

					}
				}
				for (auto slovo : slova)
				{
					if (id.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne smije sadrzavati slovo");
					}
				}

				for (auto p : *des->getProjekti())
				{
					for (auto a : *p->getAktivnosti())
					{
						if (a->getId() == id)
						{
							delete tablica;
							throw std::runtime_error("Aktivnost s tim ID-em postoji");
						}
					}

				}
				break;
			}
			catch (const std::runtime_error &p)
			{

				Console::WriteLine(p.what());
			}
		} while (true);
		do
		{
			try
			{
				Console::WriteLine(L"Unesite naziv: ");
				naziv = Console::ReadLine();
				if (naziv.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("Naziv je prazan, pokušajte ponovo");
				}
				break;
			}
			catch (const std::runtime_error &e)
			{

				Console::WriteLine(e.what());
			}
		} while (true);
		do
		{
			try
			{
				Console::WriteLine(L"Unesite opis: ");
				opis = Console::ReadLine();
				if (opis.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("Opis ne moze biti prazan");
				}
				break;
			}
			catch (const std::runtime_error &e)
			{

				Console::WriteLine(e.what());
			}
		} while (true);
		do
		{
			try
			{
				Console::Write(L"Unesite početak trajanja aktivnosti u formatu dd.mm.yyyy: ");
				std::wstring unos = Console::ReadLine();
				if (!DateTime::TryParse(unos, _))
				{
					delete tablica;
					throw std::runtime_error("Unesen neispravan format!\n Pokušajte ponovno...");
				}
				Console::Write(L"Unesite kraj trajanja aktivnosti u formatu dd.mm.yyyy: ");
				std::wstring kraj = Console::ReadLine();
				if (!DateTime::TryParse(unos, _))
				{
					delete tablica;
					throw std::runtime_error("Unesen neispravan format!\n Pokušajte ponovno...");
				}
				vrijeme = StringHelper::formatSimple(L"{0} - {1}", unos, kraj);
				break;
			}
			catch (const std::runtime_error &e)
			{
				Console::WriteLine(e.what());
			}
		} while (true);
		bool uspjesno = false;
		for (auto p : *des->getProjekti())
		{

			if (p->getID() == idProjekta)
			{
				Aktivnost *a = new Aktivnost();
				a->setId(id);
				a->setNaziv(naziv);
				a->setOpis(opis);
				a->setVrijeme(vrijeme);
				Console::WriteLine(L"Aktivnost je uspjesno dodana.");
				p->getAktivnosti().push_back(a);
			}
			for (auto a : *p->getAktivnosti())
			{
				if (a->getClanoviProjekta().empty())
				{
					uspjesno = true;
				}
			}

		}
		if (uspjesno == true)
		{
			Console::WriteLine(L"Aktivnost ne sadrži člana, molimo dodajte ga preko funkcije u izborniku");
		}
		VUV::Serijalizacija(des);
		IspisSvihAktivnosti();
		Meni();

		delete tablica;
	}

	VUV *VUV::IspisAktivnostiProjekta()
	{
		auto des = Deserilizacija();

		Console::WriteLine(L"Iz kojeg projekta zelite ocitati: ");
		Table *tablica = new Table(L"ID", L"Naziv", L"Nositelj", L"Vrijednost", L"Status", L"Voditelji", L"Lokacija");
		tablica->Config = TableConfiguration::MySql();
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCĆČŽDĐEFGHIJKLMNOPRQRSTUVWXYZabcćčđždefghijklmnoprqđrstuvwxyz)";
		std::wstring odabirprojekta = L"";
		if (des->getProjekti().size() > 0)
		{
			for (auto p : *des->getProjekti())
			{
				tablica->AddRow(p->getID(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus(), GetVoditeljiString(p->getListaVoditelja()), p->getLokacija()->getGrad());
			}

			Console::Write(tablica->ToString());

			do
			{
				try
				{
					Console::WriteLine(L"Unesite ID projekta:");
					odabirprojekta = Console::ReadLine();
					if (odabirprojekta.length() == 0)
					{
						delete tablica;
						throw std::runtime_error("ID je prazan");
					}
					for (auto slovo : znakovi)
					{
						if (odabirprojekta.find(slovo) != std::wstring::npos)
						{
							delete tablica;
							throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
						}
					}
					for (auto slovo : slova)
					{
						if (odabirprojekta.find(slovo) != std::wstring::npos)
						{
							delete tablica;
							throw std::runtime_error("ID ne smije sadrzavati slovo");
						}
					}
					bool postoji = false;
					for (auto p : *des->getProjekti())
					{
						if (p->getID() == odabirprojekta)
						{
							postoji = true;
						}

					}
					if (postoji == false)
					{
						delete tablica;
						throw std::runtime_error("Projekt s tim ID-em ne postoji");
					}
					break;
				}
				catch (const std::runtime_error &e)
				{
					Console::WriteLine(e.what());
				}
			} while (true);
			try
			{
				Table *tablica2 = new Table(L"ID", L"Naziv", L"Opis", L"Vrijeme");
				tablica2->Config = TableConfiguration::MySql();
				bool odabir = false;

				for (auto p : *des->getProjekti())
				{
					if (odabirprojekta == p->getID())
					{

						for (auto a : *p->getAktivnosti())
						{
							if (p->getAktivnosti().size() > 0)
							{
								tablica2->AddRow(a->getId(), a->getNaziv(), a->getOpis(), a->getVrijeme());
							}
						}

					}
				}
				Console::Clear();
				Console::Write(tablica2->ToString());

				delete tablica2;
			}
			catch (const std::runtime_error &p)
			{
				Console::WriteLine(p.what());
			}
		}
		else
		{
			Console::WriteLine(L"Ne postoji ni jedan projekt");
		}
		VUV::Serijalizacija(des);
		Meni();

		delete tablica;
		return des;
	}

	void VUV::AzurirajProjekt2()

	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID", L"Naziv", L"Nositelj", L"Vrijednost", L"Status", L"Voditelji", L"Lokacija");
		tablica->Config = TableConfiguration::MySql();
		for (auto p : *des->getProjekti())
		{
			tablica->AddRow(p->getID(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus(), GetVoditeljiString(p->getListaVoditelja()), p->getLokacija()->getGrad());
		}
		Console::Write(tablica->ToString());
		Console::WriteLine(L"Odaberite projekt:");
		Console::WriteLine(L"");
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCDĐEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqđrstuvwxyz)";
		std::wstring id = L"";
		std::wstring naziv = L"";
		std::wstring nositelj = L"";
		std::wstring vrijednost = L"";
		std::wstring id_lokacije = L"";
		std::wstring voditelj;
		bool projektpostoji = false;
		do
		{

			try
			{
				Console::WriteLine(L"Upišite ID projekta: ");
				id = Console::ReadLine();
				if (id.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("ID je prazan");
				}
				for (auto slovo : znakovi)
				{
					if (id.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
					}
				}
				for (auto slovo : slova)
				{
					if (id.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne smije sadrzavati slovo");
					}
				}
				bool provjerabool = false;
				for (auto provjera : *des->getProjekti())
				{
					if (id == provjera->getID())
					{
						provjerabool = true;
					}
				}
				if (provjerabool == false)
				{
					delete tablica;
					throw std::runtime_error("Projekt ne postoji");
				}
				break;
			}
			catch (const std::runtime_error &e)
			{

				Console::WriteLine(e.what());
			}

		} while (true);
		for (auto p1 : *des->getProjekti())
		{

			if (p1->getID() == id)
			{
				projektpostoji = true;
				std::wstring prompt = L"Koji dio želite ažurirati?";
				std::vector<std::wstring> opcije = {L"Naziv", L"Nositelja", L"Vrijednost", L"Status", L"Lokaciju", L"Voditelja", L"Natrag"};
				Izbornik *izlaz = new Izbornik(prompt, opcije);
				int OdabraniIndex = izlaz->Pokreni();

				switch (OdabraniIndex)
				{
					case 0:
						do
						{
							try
							{
								Console::WriteLine(L"Unesite naziv: ");
								naziv = Console::ReadLine();
								if (naziv.length() == 0)
								{
									delete izlaz;
									delete tablica;
									throw std::runtime_error("Naziv je prazan");
								}
								p1->setNaziv(naziv);
								break;
							}
							catch (const std::runtime_error &enaziv)
							{
								Console::WriteLine(enaziv.what());
							}
						} while (true);

						delete izlaz;
						break;

					case 1:
						do
						{
							try
							{

								Console::WriteLine(L"Unesite nositelja: ");
								nositelj = Console::ReadLine();
								if (nositelj.length() == 0)
								{
									delete izlaz;
									delete tablica;
									throw std::runtime_error("Naziv je prazan");
								}
								p1->setNositelj(nositelj);
								break;
							}
							catch (const std::runtime_error &enositelj)
							{
								Console::WriteLine(enositelj.what());
							}

						} while (true);

						delete izlaz;
						break;
					case 2:
						do
						{
							try
							{
								Console::WriteLine(L"Unesite vrijednost: ");
								vrijednost = Console::ReadLine();
								if (vrijednost.length() == 0)
								{
									delete izlaz;
									delete tablica;
									throw std::runtime_error("Vrijednost je prazna");
								}
								p1->setVrijednost(vrijednost);
								break;
							}
							catch (const std::runtime_error &evrijednost)
							{

								Console::WriteLine(evrijednost.what());
							}

						} while (true);

						delete izlaz;
						break;
					case 3:
						try
						{
							std::wstring prompt2 = L"Unesite status projekta:";
							std::vector<std::wstring> opcije2 = {L"Aktivan", L"Zavrsen", L"Neaktivan"};
							Izbornik *izlaz2 = new Izbornik(prompt2, opcije2);
							int OdabraniIndex2 = izlaz2->Pokreni();

							switch (OdabraniIndex2)
							{
								case 0:
									p1->setStatus(L"Aktivan");

									delete izlaz2;
									break;
								case 1:
									p1->setStatus(L"Zavrsen");
									break;
								case 2:
									p1->setStatus(L"Neaktivan");
									break;
							}


							delete izlaz2;
						}
						catch (const std::runtime_error &estatus)
						{

							Console::WriteLine(estatus.what());
						}

						delete izlaz;
						break;
					case 4:
						do
						{
							try
							{

								Console::WriteLine(L"Unesite ID lokacije");


									IspisLokacijazaProjekt();

								id_lokacije = Console::ReadLine();
								for (auto l2 : *des->getLokacije())
								{
									if (l2->getId() == id_lokacije)
									{
										p1->setLokacija(l2);
									}
								}

								if (id_lokacije.length() == 0)
								{
									delete izlaz;
									delete tablica;
									throw std::runtime_error("Lokacija je prazna");
								}
								break;
							}
							catch (const std::runtime_error &elokacija)
							{

								Console::WriteLine(elokacija.what());
							}
						} while (true);

						delete izlaz;
						break;
					case 5:
						do
						{
							try
							{
								std::wstring prompt3 = L"Ažuriranje Voditelja:";
								std::vector<std::wstring> opcije3 = {L"Dodaj", L"Obriši", L"Natrag"};
								Izbornik *izlaz3 = new Izbornik(prompt3, opcije3);
								int OdabraniIndex3 = izlaz3->Pokreni();

								switch (OdabraniIndex3)
								{
									case 0:
									{
										Table *t2 = new Table(L"ID", L"Ime", L"Prezime", L"OIB");
										t2->Config = TableConfiguration::MySql();
										for (auto cp : *des->getListaVoditelja())
										{
											t2->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB());
										}

										Console::WriteLine(t2->ToString());
										Console::WriteLine(L"Dodaj Voditelja");

										voditelj = Console::ReadLine();
										ClanProjekta *clanVoditelj = new ClanProjekta();
										for (auto clanProjekta : *des->getListaVoditelja())
										{
											if (clanProjekta->getID() == voditelj)
											{
												clanVoditelj = clanProjekta;
											}
										}
										for (auto clanProjekta : *p1->getListaVoditelja())
										{
											if (clanProjekta->getID() == voditelj)
											{
												delete clanVoditelj;
												delete t2;
												delete izlaz3;
												delete izlaz;
												delete tablica;
												throw std::runtime_error("Projekt ne moze sadrzavati dva ista voditelja");

											}
											break;
										}
										Console::WriteLine(L"Voditelj je uspješno dodan");
										p1->getListaVoditelja().push_back(clanVoditelj);
										VUV::Serijalizacija(des);
										Meni();

										delete t2;
										delete izlaz3;
										break;


									delete t2;
									}
									case 1:
										do
										{
											try
											{
												Table *t3 = new Table(L"ID", L"Ime", L"Prezime", L"OIB");
												t3->Config = TableConfiguration::MySql();
												for (auto cp : *p1->getListaVoditelja())
												{
													t3->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB());
												}
												Console::WriteLine(t3->ToString());
												Console::WriteLine(L"Unesite ID Voditelja kojeg želite obrisati");
												std::wstring a = Console::ReadLine();

												int indexVoditelj = -1;
												for (int i = 0; i < p1->getListaVoditelja().size(); i++)
												{
													if (p1->getListaVoditelja()[i]->getID() == a)
													{
														indexVoditelj = i;
													}
												}
												p1->getListaVoditelja().erase(p1->getListaVoditelja().begin() + indexVoditelj);
												VUV::Serijalizacija(des);

												delete t3;
												break;

												delete t3;
											}
											catch (const std::runtime_error &e)
											{

												Console::WriteLine(e.what());
											}
										} while (true);

										delete izlaz3;
										break;
									case 2:

										AzurirajProjekt2();
										break;

								}

								delete izlaz3;
							}
							catch (const std::runtime_error &elokacija)
							{

								Console::WriteLine(elokacija.what());
							}
						} while (true);

						delete izlaz;
						break;

					case 6:
						Program::Administracija();
						break;
				}

				delete izlaz;
			}

		}
		VUV::Serijalizacija(des);
		IspisListeProjekata();
		Meni();

		delete tablica;
	}

	VUV *VUV::ListaClanova2()
	{
		auto des = Deserilizacija();
		Table *tablicaClanova;
		Table *tablicaProjekata;
		Table *tablicaAktivnosti;
		Console::WriteLine(L"Lista članova:");
		for (auto cp : *des->getClanovi())
		{

			tablicaClanova = new Table(L"ID Clana", L"Ime", L"Prezime", L"OIB", L"Voditelj");
			tablicaClanova->Config = TableConfiguration::MySql();
			tablicaClanova->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB(), cp->getVoditelj());



			for (auto p : *des->getProjekti())
			{
				tablicaProjekata = new Table(L"ID Clana", L"ID Projekta", L"Naziv", L"Nositelj", L"Vrijednost", L"Status");
				tablicaProjekata->Config = TableConfiguration::Simple();
				tablicaProjekata->AddRow(cp->getID(), p->getID(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus());
				for (auto a : *p->getAktivnosti())
				{

					tablicaAktivnosti = new Table(L"ID Clana", L"ID Projekta", L"ID Aktivnosti", L"Naziv Aktivnosti", L"Opis Aktivnosti", L"Vrijeme");
					tablicaAktivnosti->Config = TableConfiguration::MySqlSimple();
					tablicaAktivnosti->AddRow(cp->getID(), p->getID(), a->getId(), a->getNaziv(), a->getOpis(), a->getVrijeme());
					Console::WriteLine();

					Console::WriteLine();

					Console::Write(tablicaClanova->ToString(), Color::FromArgb(1,138, 192, 100));
					Console::WriteLine();

					Console::WriteLine();
					Console::Write(tablicaProjekata->ToString(),Color::FromArgb(1, 217, 179, 255));
					Console::WriteLine();

					Console::WriteLine();
					Console::Write(tablicaAktivnosti->ToString(), Color::FromArgb(1, 255, 0, 102));
					Console::WriteLine();
					Console::WriteLine(LR"(________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________)");
				   Console::WriteLine();
				}
			}
			Console::WriteLine(L"Tablica Clanova ▬ ", Color::FromArgb(1, 138, 192, 100));
			Console::WriteLine(L"Tablica Projekata ▬", Color::FromArgb(1, 217, 179, 255));
			Console::WriteLine(L"Tablica Aktivnosti ▬", Color::FromArgb(1, 255, 0, 102));
		}

		VUV::Serijalizacija(des);
		Meni();

		delete tablicaAktivnosti;
		delete tablicaProjekata;
		delete tablicaClanova;
		return des;
	}

	VUV *VUV::ListaClanova()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID Clana", L"Ime", L"Prezime", L"OIB", L"Voditelj");
		tablica->Config = TableConfiguration::MySql();
		for (auto cp : *des->getClanovi())
		{
			tablica->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB(), cp->getVoditelj());
			for (auto p : *des->getProjekti())
			{
				tablica->AddRow(p->getID(), p->getNaziv(), p->getNositelj(), p->getVrijednost(), p->getStatus());
				for (auto a : *p->getAktivnosti())
				{
					tablica->AddRow(a->getId(), a->getNaziv(), a->getOpis(), a->getVrijeme());

				}
			}
		}
		Console::WriteLine(L"Lista članova:");
		Console::Write(tablica->ToString());
		VUV::Serijalizacija(des);
		Meni();

		delete tablica;
		return des;
	}

	VUV *VUV::BrisanjeClana()
	{
		auto des = Deserilizacija();
		Table *tablica = new Table(L"ID Clana", L"Ime", L"Prezime", L"OIB", L"Voditelj", L"Obrisan");
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCĆČŽDĐEFGHIJKLMNOPRQRSTUVWXYZabcćčđždefghijklmnoprqđrstuvwxyz)";
		tablica->Config = TableConfiguration::MySql();
		std::wstring a;
		for (auto cp : *des->getClanovi())
		{
			tablica->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB(), cp->getVoditelj(), cp->getDeleted());
		}
		Console::Write(tablica->ToString());
		do
		{
			try
			{
				Console::WriteLine(L"Unesite ID člana kojeg želite obrisati");
				a = Console::ReadLine();
				if (a.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("ID je prazan");
				}

				for (auto slovo : znakovi)
				{
					if (a.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne moze sadrzavati specijalna slova");

					}
				}
				for (auto slovo : slova)
				{
					if (a.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne smije sadrzavati slovo");
					}
				}
				bool jedobro = false;
				for (auto _clan : *des->getClanovi())
				{
					if (_clan->getID() == a)
					{
						jedobro = true;
					}
				}
				if (jedobro == false)
				{
					delete tablica;
					throw std::runtime_error("Clan ne postoji");
				}
				break;
			}
			catch (const std::runtime_error &e)
			{

				Console::WriteLine(e.what());
			}
		} while (true);

		for (auto clan : *des->getClanovi())
		{
			if (a == clan->getID())
			{
				clan->setDeleted(true);
			}

		}

		Table *tablicaPoslje = new Table(L"ID Clana", L"Ime", L"Prezime", L"OIB", L"Voditelj", L"Obrisan");
		tablicaPoslje->Config = TableConfiguration::MySql();
		for (auto cp : *des->getClanovi())
		{
			tablicaPoslje->AddRow(cp->getID(), cp->getIme(), cp->getPrezime(), cp->getOIB(), cp->getVoditelj(), cp->getDeleted());
		}
		Console::Write(tablicaPoslje->ToString());
		for (auto p : *des->getProjekti())
		{
			for (auto cp : *p->getClanProjekta())
			{
				if (p->getClanProjekta().size() == 1)
				{
					p->setStatus(L"Neaktivan");
				}
			}
		}
		VUV::Serijalizacija(des);
		Meni();

		delete tablicaPoslje;
		delete tablica;
		return des;
	}

	void VUV::DodavanjeClana2()
	{
		auto des = Deserilizacija();

		Table *tablica = new Table(L"ID", L"Naziv", L"Status", L"Lokacija");
		tablica->Config = TableConfiguration::MySql();
		for (auto p : *des->getProjekti())
		{
			tablica->AddRow(p->getID(), p->getNaziv(), p->getStatus(), p->getLokacija()->getGrad());
		}
		Console::Write(tablica->ToString());
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCDĐEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqđrstuvwxyz)";
		std::wstring brojeiv = LR"(0123456789)";
		Console::WriteLine(L"U koji projekt želite dodati clana:");
		std::wstring odabirprojekta;
		std::wstring odabiraktivnost;
		bool pronadenprojet = false;
		std::wstring id;
		std::wstring ime = L"";
		std::wstring prezime = L"";
		std::wstring oib = L"";
		bool voditelj = false;
		bool deleted = false;

		do
		{
			try
			{
				Console::WriteLine(L"Odaberite projekt: ");
				odabirprojekta = Console::ReadLine();
				if (odabirprojekta.length() == 0)
				{
					delete tablica;
					throw std::runtime_error("ID je prazan");
				}
				for (auto slovo : znakovi)
				{
					if (odabirprojekta.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
					}
				}
				for (auto slovo : slova)
				{
					if (odabirprojekta.find(slovo) != std::wstring::npos)
					{
						delete tablica;
						throw std::runtime_error("ID ne smije sadrzavati slovo");
					}
				}
				break;
			}
			catch (const std::runtime_error &ks)
			{

				Console::WriteLine(ks.what());
			}
		} while (true);


		std::wstring prompt2 = L"Želite li dodati člana u Projekt ili Aktivnost?";
		std::vector<std::wstring> opcije2 = {L"Projekt", L"Aktivnost"};
		Izbornik *izlaz2 = new Izbornik(prompt2, opcije2);
		int OdabraniIndex2 = izlaz2->Pokreni();

		switch (OdabraniIndex2)
		{
			case 0:
				for (auto p : *des->getProjekti())
				{
					if (odabirprojekta == p->getID())
					{
						std::wstring prompt = L"Koga želite dodati?";
						std::vector<std::wstring> opcije = {L"Clan", L"Voditelja"};
						Izbornik *izlaz = new Izbornik(prompt, opcije);
						int OdabraniIndex = izlaz->Pokreni();
						switch (OdabraniIndex)
						{
							case 0:
							{
								do
								{
									try
									{
										Console::WriteLine(L"Dodajte člana");
										Console::WriteLine(L"");
										Console::WriteLine(L"Unesite ID: ");
										id = Console::ReadLine();
										if (id.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("ID je prazan");
										}
										for (auto slovo : znakovi)
										{
											if (id.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
											}
										}
										for (auto slovo : slova)
										{
											if (id.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("ID ne smije sadrzavati slovo");
											}
										}
										bool postoji = false;
										for (auto cp : *des->getClanovi())
										{
											if (cp->getID() == id)
											{
												postoji = true;
												break;
											}
										}
										if (postoji == true)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Clan s tim ID-em vec postoji");
										}
										break;
									}
									catch (const std::runtime_error &enaziv)
									{
										Console::WriteLine(enaziv.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Unesite ime: ");
										ime = Console::ReadLine();
										if (ime.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Ime ne moze biti prazno");
										}
										for (auto slovo : brojeiv)
										{
											if (ime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Ime ne moze sadrzavati brojeve");
											}
										}
										for (auto slovo : znakovi)
										{
											if (ime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Ime ne moze sadrzavati specijalna slova");
											}
										}
										break;
									}
									catch (const std::runtime_error &i)
									{

										Console::WriteLine(i.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Unesite prezime: ");
										prezime = Console::ReadLine();
										if (prezime.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Prezime ne moze biti prazno");
										}
										for (auto slovo : brojeiv)
										{
											if (prezime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Prezime ne moze sadrzavati brojeve");
											}
										}
										for (auto slovo : znakovi)
										{
											if (prezime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Prezime ne moze sadrzavati specijalna slova");
											}
										}
										break;
									}
									catch (const std::runtime_error &ep)
									{

										Console::WriteLine(ep.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Molimo upišite oib");
										oib = Console::ReadLine();
										if (oib.length() != 11)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Pogresan unos OIBA");
										}
										for (auto slovo : znakovi)
										{
											if (oib.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("OIB ne moze sadrzavati specijalna slova");
											}
										}
										for (auto slovo : slova)
										{
											if (oib.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("OIB ne moze sadrzavati slova");
											}
										}
										for (auto pi : *des->getProjekti())
										{
											for (auto cp : *des->getClanovi())
											{
												if (cp->getOIB() == oib)
												{
													delete izlaz;
													delete izlaz2;
													delete tablica;
													throw std::runtime_error("Clan Projekta sa tim OIBom");
												}
											}
										}
										break;
									}
									catch (const std::runtime_error &oi)
									{

										Console::WriteLine(oi.what());
									}
								} while (true);

								ClanProjekta *cp1 = new ClanProjekta();
								cp1->setID(id);
								cp1->setIme(ime);
								cp1->setPrezime(prezime);
								cp1->setOIB(oib);
								cp1->setVoditelj(voditelj);
								Console::WriteLine(L"Član je uspješno dodan.");
								des->getClanovi().push_back(cp1);
								p->getClanProjekta().push_back(cp1);
								VUV::Serijalizacija(des);
								delete izlaz;
								break;

							}
							case 1:
							{
								voditelj = true;
								do
								{
									try
									{
										Console::WriteLine(L"Dodajte voditelja");
										Console::WriteLine(L"");
										Console::WriteLine(L"Unesite ID: ");
										id = Console::ReadLine();
										if (id.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("ID je prazan");
										}
										for (auto slovo : znakovi)
										{
											if (id.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
											}
										}
										for (auto slovo : slova)
										{
											if (id.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("ID ne smije sadrzavati slovo");
											}
										}
										bool postoji = false;
										for (auto cp : *des->getListaVoditelja())
										{
											if (cp->getID() == id)
											{
												postoji = true;
												break;
											}
										}
										if (postoji == true)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Voditelj s tim ID-em vec postoji");
										}
										break;
									}
									catch (const std::runtime_error &enaziv)
									{
										Console::WriteLine(enaziv.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Unesite ime: ");
										ime = Console::ReadLine();
										if (ime.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Ime ne moze biti prazno");
										}
										for (auto slovo : brojeiv)
										{
											if (ime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Ime ne moze sadrzavati brojeve");
											}
										}
										for (auto slovo : znakovi)
										{
											if (ime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Ime ne moze sadrzavati specijalna slova");
											}
										}
										break;
									}
									catch (const std::runtime_error &i)
									{

										Console::WriteLine(i.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Unesite prezime: ");
										prezime = Console::ReadLine();
										if (prezime.length() == 0)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Prezime ne moze biti prazno");
										}
										for (auto slovo : brojeiv)
										{
											if (prezime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Prezime ne moze sadrzavati brojeve");
											}
										}
										for (auto slovo : znakovi)
										{
											if (prezime.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("Prezime ne moze sadrzavati specijalna slova");
											}
										}
										break;
									}
									catch (const std::runtime_error &ep)
									{

										Console::WriteLine(ep.what());
									}
								} while (true);
								do
								{
									try
									{
										Console::WriteLine(L"Molimo upišite oib");
										oib = Console::ReadLine();
										if (oib.length() != 11)
										{
											delete izlaz;
											delete izlaz2;
											delete tablica;
											throw std::runtime_error("Pogresan unos OIBA");
										}
										for (auto slovo : znakovi)
										{
											if (oib.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("OIB ne moze sadrzavati specijalna slova");
											}
										}
										for (auto slovo : slova)
										{
											if (oib.find(slovo) != std::wstring::npos)
											{
												delete izlaz;
												delete izlaz2;
												delete tablica;
												throw std::runtime_error("OIB ne moze sadrzavati slova");
											}
										}
										for (auto pi : *des->getProjekti())
										{
											for (auto cp : *pi->getClanProjekta())
											{
												for (auto vodi : *pi->getListaVoditelja())
												{
													if (cp->getOIB() == vodi->getOIB())
													{
														delete izlaz;
														delete izlaz2;
														delete tablica;
														throw std::runtime_error("Postoji osoba sa istim oibom");
													}
												}
											}
										}
										break;
									}
									catch (const std::runtime_error &oi)
									{
										Console::WriteLine(oi.what());
									}
								} while (true);

								ClanProjekta *cp2 = new ClanProjekta();
								cp2->setID(id);
								cp2->setIme(ime);
								cp2->setPrezime(prezime);
								cp2->setOIB(oib);
								cp2->setVoditelj(voditelj);
								Console::WriteLine(L"Voditelj je uspješno dodan");
								des->getListaVoditelja().push_back(cp2);
								p->getListaVoditelja().push_back(cp2);
								VUV::Serijalizacija(des);
								delete izlaz;
								break;

							}
						}

						delete izlaz;
					}

				}
				break;

			case 1:
			{
				bool jedobro = true;
				Table *t1 = new Table(L"ID", L"Naziv", L"Opis", L"Vrijeme trajanja");
				for (auto p : *des->getProjekti())
				{

					if (odabirprojekta == p->getID())
					{
						if (p->getAktivnosti().empty())
						{
							std::wstring prompt3 = L"Projekt nije sadrzao ni jednu aktivnost, stoga molimo vas odaberite jednu od ponudenih opcija";
							std::vector<std::wstring> opcije3 = {L"Dodajte Aktivnost", L"Natrag"};
							Izbornik *izlaz3 = new Izbornik(prompt3, opcije3);
							int OdabraniIndex3 = izlaz3->Pokreni();
							switch (OdabraniIndex3)
							{
								case 0:
									DodajAktivnost();

									delete izlaz3;
									break;
								case 1:
									Program::Administracija();
									break;
							}

							delete izlaz3;
						}
						for (auto ap : *p->getAktivnosti())
						{
							t1->AddRow(ap->getId(), ap->getNaziv(), ap->getOpis(), ap->getVrijeme());

						}
						Console::WriteLine(t1->ToString());

						do
						{
							try
							{
								Console::WriteLine(L"Unesite aktivnost u koju želite dodati člana");
								odabiraktivnost = Console::ReadLine();
								for (auto ap1 : *p->getAktivnosti())
								{
									if (odabiraktivnost == ap1->getId())
									{
										jedobro = false;
										std::wstring prompt = L"Koga želite dodati?";
										std::vector<std::wstring> opcije = {L"Clan", L"Voditelja"};
										Izbornik *izlaz = new Izbornik(prompt, opcije);
										int OdabraniIndex = izlaz->Pokreni();
										switch (OdabraniIndex)
										{
											case 0:
											{
												do
												{
													try
													{
														Console::WriteLine(L"Dodajte člana");
														Console::WriteLine(L"");
														Console::WriteLine(L"Unesite ID: ");
														id = Console::ReadLine();
														if (id.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("ID je prazan");
														}
														for (auto slovo : znakovi)
														{
															if (id.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
															}
														}
														for (auto slovo : slova)
														{
															if (id.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("ID ne smije sadrzavati slovo");
															}
														}
														bool postoji = false;
														for (auto cp : *des->getClanovi())
														{
															if (cp->getID() == id)
															{
																postoji = true;
																break;
															}
														}
														if (postoji == true)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Clan s tim ID-em vec postoji");
														}
														break;
													}
													catch (const std::runtime_error &enaziv)
													{
														Console::WriteLine(enaziv.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Unesite ime: ");
														ime = Console::ReadLine();
														if (ime.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Ime ne moze biti prazno");
														}
														for (auto slovo : brojeiv)
														{
															if (ime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Ime ne moze sadrzavati brojeve");
															}
														}
														for (auto slovo : znakovi)
														{
															if (ime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Ime ne moze sadrzavati specijalna slova");
															}
														}
														break;
													}
													catch (const std::runtime_error &i)
													{

														Console::WriteLine(i.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Unesite prezime: ");
														prezime = Console::ReadLine();
														if (prezime.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Prezime ne moze biti prazno");
														}
														for (auto slovo : brojeiv)
														{
															if (prezime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Prezime ne moze sadrzavati brojeve");
															}
														}
														for (auto slovo : znakovi)
														{
															if (prezime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Prezime ne moze sadrzavati specijalna slova");
															}
														}
														break;
													}
													catch (const std::runtime_error &ep)
													{

														Console::WriteLine(ep.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Molimo upišite oib");
														oib = Console::ReadLine();
														if (oib.length() != 11)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Pogresan unos OIBA");
														}
														for (auto slovo : znakovi)
														{
															if (oib.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("OIB ne moze sadrzavati specijalna slova");
															}
														}
														for (auto slovo : slova)
														{
															if (oib.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("OIB ne moze sadrzavati slova");
															}
														}
														for (auto pi : *des->getProjekti())
														{
															for (auto cp : *pi->getClanProjekta())
															{
																for (auto vodi : *pi->getListaVoditelja())
																{
																	if (cp->getOIB() == vodi->getOIB())
																	{
																		delete izlaz;
																		delete t1;
																		delete izlaz2;
																		delete tablica;
																		throw std::runtime_error("Postoji osoba sa istim oibom");
																	}
																}
															}
														}
														break;
													}
													catch (const std::runtime_error &oi)
													{

														Console::WriteLine(oi.what());
													}
												} while (true);

												ClanProjekta *cp1 = new ClanProjekta();
												cp1->setID(id);
												cp1->setIme(ime);
												cp1->setPrezime(prezime);
												cp1->setOIB(oib);
												cp1->setVoditelj(voditelj);
												des->getClanovi().push_back(cp1);
												ap1->getClanoviProjekta().push_back(cp1);
												Console::WriteLine(L"Clan je uspjesno dodan");
												VUV::Serijalizacija(des);

												delete izlaz;
												break;

											}
											case 1:
											{
												voditelj = true;
												do
												{
													try
													{
														Console::WriteLine(L"Dodajte voditelja");
														Console::WriteLine(L"");
														Console::WriteLine(L"Unesite ID: ");
														id = Console::ReadLine();
														if (id.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("ID je prazan");
														}
														for (auto slovo : znakovi)
														{
															if (id.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("ID ne moze sadrzavati specijalna slova");
															}
														}
														for (auto slovo : slova)
														{
															if (id.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("ID ne smije sadrzavati slovo");
															}
														}
														bool postoji = false;
														for (auto cp : *des->getClanovi())
														{
															if (cp->getID() == id)
															{
																postoji = true;
																break;
															}
														}
														if (postoji == true)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Voditelj s tim ID-em vec postoji");
														}
														break;
													}
													catch (const std::runtime_error &enaziv)
													{
														Console::WriteLine(enaziv.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Unesite ime: ");
														ime = Console::ReadLine();
														if (ime.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Ime ne moze biti prazno");
														}
														for (auto slovo : brojeiv)
														{
															if (ime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Ime ne moze sadrzavati brojeve");
															}
														}
														for (auto slovo : znakovi)
														{
															if (ime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Ime ne moze sadrzavati specijalna slova");
															}
														}
														break;
													}
													catch (const std::runtime_error &i)
													{

														Console::WriteLine(i.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Unesite prezime: ");
														prezime = Console::ReadLine();
														if (prezime.length() == 0)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Prezime ne moze biti prazno");
														}
														for (auto slovo : brojeiv)
														{
															if (prezime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Prezime ne moze sadrzavati brojeve");
															}
														}
														for (auto slovo : znakovi)
														{
															if (prezime.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("Prezime ne moze sadrzavati specijalna slova");
															}
														}
														break;
													}
													catch (const std::runtime_error &ep)
													{

														Console::WriteLine(ep.what());
													}
												} while (true);
												do
												{
													try
													{
														Console::WriteLine(L"Molimo upišite oib");
														oib = Console::ReadLine();
														if (oib.length() != 11)
														{
															delete izlaz;
															delete t1;
															delete izlaz2;
															delete tablica;
															throw std::runtime_error("Pogresan unos OIBA");
														}
														for (auto slovo : znakovi)
														{
															if (oib.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("OIB ne moze sadrzavati specijalna slova");
															}
														}
														for (auto slovo : slova)
														{
															if (oib.find(slovo) != std::wstring::npos)
															{
																delete izlaz;
																delete t1;
																delete izlaz2;
																delete tablica;
																throw std::runtime_error("OIB ne moze sadrzavati slova");
															}
														}
														for (auto pi : *des->getProjekti())
														{
															for (auto cp : *pi->getClanProjekta())
															{
																for (auto vodi : *pi->getListaVoditelja())
																{
																	if (cp->getOIB() == vodi->getOIB())
																	{
																		delete izlaz;
																		delete t1;
																		delete izlaz2;
																		delete tablica;
																		throw std::runtime_error("Postoji osoba sa istim oibom");
																	}
																}
															}
														}
														break;
													}
													catch (const std::runtime_error &oi)
													{
														Console::WriteLine(oi.what());
													}
												} while (true);
												ClanProjekta *cp2 = new ClanProjekta();
												cp2->setID(id);
												cp2->setIme(ime);
												cp2->setPrezime(prezime);
												cp2->setOIB(oib);
												cp2->setVoditelj(voditelj);
												des->getClanovi().push_back(cp2);
												ap1->getClanoviProjekta().push_back(cp2);
												Console::WriteLine(L"Voditelj je uspjesno dodan");
												VUV::Serijalizacija(des);
												delete izlaz;
												break;

											}
										}

										delete izlaz;
									}

								}
								if (jedobro == true)
								{
									delete t1;
									delete izlaz2;
									delete tablica;
									throw std::runtime_error("Aktivnost s tim ID-em ne postoji");
								}
								break;
							}
							catch (const std::runtime_error &pdodavanje)
							{
								Console::WriteLine(pdodavanje.what());
							}
						} while (true);
					}
				}
				break;

			delete t1;
			}
		}
		VUV::Serijalizacija(des);
		Meni();

		delete izlaz2;
		delete tablica;
	}
}
