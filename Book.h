/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Book.h
****************************************************************/
#ifndef __BOOK_H_INCLUDED__   
#define __BOOK_H_INCLUDED__   
#include"Media.h"
#include <string>
#include<iostream>
using namespace std;

//Class Book
class Book : public Media
{
	string author;
	string description;
	string publisher;
	string city;
	string year;
	string series;
	string notes;
public:
	Book(string& callno,string&  tit, string& sub,string& auth,string& desc,string& publ,string& cty,string& yr,string& seri,string& nts ) : Media(callno, tit,  sub)
	{
		author=auth;
		description=desc;
		publisher=publ;
		city=cty;
		year=yr;
		series=seri;
		notes=nts;
	
	}
	bool searchbyCallNo(string& call_number ) const;
	void displayResult() const; 
	bool searchbyTitle(string& title) const;
	bool searchbySubject(string& subject) const;
	bool searchOther(string &searchString) const;
};
#endif