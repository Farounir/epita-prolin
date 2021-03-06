///////////////////////////////////////////////////////////
//  Program.h
//  Implementation of the Class Program
//  Created on:      01-juil.-2013 11:13:44
//  Original author: Romain
///////////////////////////////////////////////////////////

#if !defined(EA_B9ACFDE7_CB62_468a_AB77_44879545335D__INCLUDED_)
#define EA_B9ACFDE7_CB62_468a_AB77_44879545335D__INCLUDED_

#include <string>
#include "SiteMan.h"

class Program
{

public:
	Program();
	virtual ~Program();
	SiteMan *m_SiteMan;

	int build(SiteMan* sites);
	std::string solve();

private:
	char* prob; // doit contenir l'objet problem cree par l'api GLPK

};
#endif // !defined(EA_B9ACFDE7_CB62_468a_AB77_44879545335D__INCLUDED_)
