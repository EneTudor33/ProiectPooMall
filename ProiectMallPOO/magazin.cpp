#include "magazin.h"

int Magazin::m_next_id = 0;
Magazin::Magazin():m_id(++m_next_id)
{

}
std::string Magazin::GetNume() const
{
	return m_nume;
}
int Magazin::GetEtaj() const
{
	return m_etaj;
}
bool Magazin::GetEDeschis() const
{
	return m_e_deschis;
}
bool Magazin::GetId() const
{
	return m_id;
}