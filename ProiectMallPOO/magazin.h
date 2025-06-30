#pragma once
#include<string>
#include<vector>
class Magazin {
protected:
	std::string m_nume;
	int m_etaj;
	bool m_e_deschis;
	static int m_next_id;
	const int m_id;
public:
	Magazin();
	virtual ~Magazin() = default;
	std::string GetNume() const;
	int GetEtaj() const;
	bool GetEDeschis() const;
	bool GetId() const;
};