#pragma once
#include<string>
class Om {
private:
	std::string m_nume;
	std::string m_prenume;
	int varsta;
	std::string email;
	const int m_id;
	static int m_next_id;
public:
	~Om() = default;
	Om();
	std::string GetNume() const;
	std::string GetPrenume() const;
	int GetVarsta() const;
	std::string GetEmail() const;
};
