/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Video.h
****************************************************************/
#ifndef __VIDEO_H_INCLUDED__   
#define __VIDEO_H_INCLUDED__   
#include"Media.h"
#include <string>
#include<iostream>
using namespace std;
//Class Video
class Video : public Media
{

	
	string description;
	string distributor;
	string notes;
	string series;
	string label;
	
public:

	Video(string& callno,string&  tit, string& sub,string& desc,string& dist,string& nt,string& seri,string& lbl) : Media(callno, tit,  sub)
	{
	
		description=desc;
		distributor=dist;
		notes=nt;
		series=seri;
		label=lbl;
	
	}

	bool searchbyCallNo(string& call_number ) const;
	void displayResult() const; 
	bool searchbyTitle(string& title) const;
	bool searchbySubject(string& subject) const;
	bool searchOther(string &searchString) const;

};
#endif