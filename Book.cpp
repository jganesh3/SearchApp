/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Book.cpp
****************************************************************/
#include"Book.h"
#include<string>
using namespace std;
bool Book::searchbyCallNo(string& call_number ) const
{
	
	if(this->call_number.find(call_number)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Book::searchbyTitle(std::string &title) const
{
	if(this->title.find(title)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Book::searchOther(string& searchString) const
{
	if(this->description.find(searchString)!= string::npos || this->notes.find(searchString)!= string::npos || this->year.find(searchString)!= string::npos)
	{
	return true;
	}
	else
	{
		return false;
	}
		
}

bool Book::searchbySubject(string& sub) const
{
	if(this->subjects.find(sub)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Book::displayResult() const
{
			cout<<"===============Book==================="<<endl;
			cout<<"Call Number:   "<<this->call_number<<endl;
			cout<<"Title      :   "<<this->title<<endl;
			cout<<"Subject    :   "<<this->subjects<<endl;
			cout<<"Author     :   "<<this->author<<endl;
			cout<<"Description:   "<<this->description<<endl;
			cout<<"Publisher  :   "<<this->publisher<<endl;
			cout<<"City       :   "<<this->city<<endl;
			cout<<"Year       :   "<<this->year	<<endl;
			cout<<"Series     :   "<<this->series<<endl;
			cout<<"Notes      :   "<<this->notes<<endl;
		
}


