#pragma once
#include "magazin.h"
#include "haina.h"
class MagazinHaine :virtual Magazin {
protected:
	std::vector<Haina> m_catalog_haine;
public:
	MagazinHaine(std::string nume, int etaj, bool e_deschis);
	std::vector<Haina> GetCatalogHaine() const;
};
