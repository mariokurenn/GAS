#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

namespace VUV_Projekti
{
	class Lokacija
	{
	private:
		std::wstring Grad;


	public:

		std::wstring getId() const;
		void setId(const std::wstring &value);
	private:
		std::wstring znakovi = LR"(\|!#$%&/=?»«@£§€{};<>_)";
		std::wstring slova = LR"(ABCDEFGHIJKLMNOPRQRSTUVWXYZabcdefghijklmnoprqrstuvwxyz)";
		std::wstring _id_lokacije;


	public:

		std::wstring getAdresa() const;
		void setAdresa(const std::wstring &value);
	private:
		std::wstring _adresa;

	public:

		std::wstring getPostanskibroj() const;
		void setPostanskibroj(const std::wstring &value);

	private:
		std::wstring _postanskibroj;


	public:
		std::wstring getGrad() const;
		void setGrad(const std::wstring &value);

		std::wstring getLatituda() const;
		void setLatituda(const std::wstring &value);
	private:
		std::wstring _latituda;

	public:
		std::wstring getLongituda() const;
		void setLongituda(const std::wstring &value);


private:
	std::wstring _longituda;
	};
}
