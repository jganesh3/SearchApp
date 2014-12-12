/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Film.h
****************************************************************/
#ifndef __FILM_H_INCLUDED__   
#define __FILM_H_INCLUDED__   
#include"Media.h"
#include <string>
#include<iostream>
using namespace std;
//class Film
class Film : public Media
{

private:
	string director;
	string notes;
	string year;
	
public:
	Film(string& callno,string&  tit, string& sub,string& dir,string& nt,string& yr) : Media(callno, tit,  sub)
	{
	director=dir;
	notes=nt;
	year=yr;	
	}

	bool searchbyCallNo(string& call_number ) const;
	void displayResult() const; 
	bool searchbyTitle(string& title) const;
	bool searchbySubject(string& subject) const;
	bool searchOther(string &searchString) const;
};
#endif