/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Media.h
****************************************************************/
#ifndef __MEDIA_H_INCLUDED__   
#define __MEDIA_H_INCLUDED__   
#include<string>
#include<vector>
using namespace std;

//Class Media
class Media
{
protected:
	string call_number;
	string title;
	string subjects;
public:
	Media();
	Media(string& callno,string& title,string& sub);
	static Media* makeobjects(string& type,string x[10]);
	virtual bool  searchbyCallNo(string& call_number ) const =0;
	virtual bool  searchbyTitle(string& title) const =0;
	virtual bool searchbySubject(string& subject) const=0;
	virtual bool searchOther(string& searchString) const=0;
	virtual void  displayResult() const=0;

};
#endif