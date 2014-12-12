/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Periodic.cpp
****************************************************************/
#ifndef __PERIODIC_H_INCLUDED__   
#define __PERIODIC_H_INCLUDED__   
#include"Media.h"
#include <string>
#include<iostream>
using namespace std;

//Class Periodic
class Periodic : public Media
{
private:
	string author;
	string description;
	string publisher;
	string publishing_history;
	string series;
	string notes;
	string related_titles;
	string other_forms_of_title;
	string govt_doc_number;
	
public:

	Periodic(string& callno,string&  tit, string& sub,string& auth,string& disc,string& pub,string& pubhis,string& seri,string& nt,string& reltitle,string& otherform,string& docNo) : Media(callno, tit,  sub)
	{
		author=auth;
		description=disc;
		publisher=pub;
		publishing_history=pubhis;
		series=seri;
		notes=nt;
		related_titles=reltitle;
		other_forms_of_title=otherform;
		govt_doc_number=docNo;
	}

	bool searchbyCallNo(string& call_number ) const;
	void displayResult() const; 
	bool searchbyTitle(string& title) const;
	bool searchbySubject(string& subject) const;
	bool searchOther(string &searchString) const;

};
#endif