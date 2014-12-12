/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Periodic.cpp
****************************************************************/
#include"Periodic.h"
#include<string>
using namespace std;
bool Periodic::searchbyCallNo(string& call_number ) const
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

bool Periodic::searchbyTitle(std::string &title) const
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

bool Periodic::searchOther(string& searchString) const
{
	if(this->description.find(searchString)!= string::npos 
		|| this->notes.find(searchString)!= string::npos 
		|| this->series.find(searchString)!= string::npos 
		|| this->related_titles.find(searchString)!= string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
		
}

bool Periodic::searchbySubject(string& sub) const
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

void Periodic::displayResult() const
{
			cout<<"===============Periodic==================="<<endl;
			cout<<"Call Number          :  "<<this->call_number<<endl;
			cout<<"Title                :  "<<this->title<<endl;
			cout<<"Subject              :  "<<this->subjects<<endl;
			cout<<"Author               :  "<<this->author<<endl;
			cout<<"Description          :  "<<this->description<<endl;
			cout<<"Publisher            :  "<<this->publisher<<endl;
			cout<<"Publishing history   :  "<<this->publishing_history	<<endl;
			cout<<"Series               :  "<<this->series<<endl;
			cout<<"Related titles       :  "<<this->related_titles<<endl;
			cout<<"Other forms of title :  "<<this->other_forms_of_title<<endl;
			cout<<"Govt doc number      :  "<<this->govt_doc_number<<endl;
			
						

}


