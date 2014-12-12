/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Film.cpp
****************************************************************/
#include"Film.h"
#include<string>
using namespace std;
bool Film::searchbyCallNo(string& call_number ) const
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

bool Film::searchbyTitle(std::string &title) const
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

bool Film::searchOther(string& searchString) const
{
	if(this->notes.find(searchString)!= string::npos || this->director.find(searchString)!= string::npos || this->year.find(searchString)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

bool Film::searchbySubject(string& sub) const
{
	if(this->subjects.find(sub)!= string::npos)
	{
	//cout<<"Required Film is found by Subject:"<<"  "<<this->subjects<<endl;
	return true;
	}
	else
	{
		return false;
	}
}

void Film::displayResult() const
{
			cout<<"===============Film==================="<<endl;
			cout<<"Call Number:   "<<this->call_number<<endl;
			cout<<"Title      :   "<<this->title<<endl;
			cout<<"Subject    :   "<<this->subjects<<endl;
			cout<<"Director   :   "<<this->director<<endl;
			cout<<"Notes      :   "<<this->notes<<endl;
			cout<<"Year       :   "<<this->year<<endl;
	
}


