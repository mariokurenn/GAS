#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "stringhelper.h"

namespace VUV_Projekti
{
	class Osoba
	{
	public:

		std::wstring getID() const;
		void setID(const std::wstring &value);
	private:
		std::wstring _id;
		std::wstring znakovi = LR"(\|!#$%&/()=?»«@£§€{}.-;'<>_,)";
		std::wstring slova = LR"(ABCDĐEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqđrstuvwxyz)";
	public:

		std::wstring getIme() const;
		void setIme(const std::wstring &value);
	private:
		std::wstring _ime;
	public:
		std::wstring getPrezime() const;
		void setPrezime(const std::wstring &value);
	private:
		std::wstring _prezime;
	public:
		std::wstring getOIB() const;
		void setOIB(const std::wstring &value);
	private:
		std::wstring _oib;

	};
}
