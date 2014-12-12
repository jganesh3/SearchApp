/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Video.cpp
****************************************************************/
#include"Video.h"
#include<string>
using namespace std;
bool Video::searchbyCallNo(string& call_number ) const
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

bool Video::searchbyTitle(std::string &title) const
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

bool Video::searchOther(string& searchString) const
{
	if(this->description.find(searchString)!= string::npos || this->notes.find(searchString)!= string::npos || this->distributor.find(searchString)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

bool Video::searchbySubject(string& sub) const
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

void Video::displayResult() const
{
			cout<<"===============Video==================="<<endl;
			cout<<"Call Number:   "<<this->call_number<<endl;
			cout<<"Title      :   "<<this->title<<endl;
			cout<<"Subject    :   "<<this->subjects<<endl;
			cout<<"Description:   "<<this->description<<endl;
			cout<<"distributor:   "<<this->distributor<<endl;
			cout<<"Notes      :   "<<this->notes<<endl;
			cout<<"Series     :   "<<this->series	<<endl;
			cout<<"Label      :   "<<this->label<<endl;
			
			

}


