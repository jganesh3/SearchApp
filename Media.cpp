/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : Media.cpp
****************************************************************/
#include "Book.h"
#include "Film.h"
#include "Media.h"
#include "Video.h"
#include "Periodic.h"
using namespace std;

Media * Media::makeobjects(string& type,string x[10])
{

		if(type=="Book")
		{
			return new Book(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9]);
		}
		if(type=="Film")
		{
			return new Film(x[0],x[1],x[2],x[3],x[4],x[5]);
		}
		if(type=="video")
	{
			return new Video(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);
		}
		if(type=="periodic")
		{
			return new Periodic(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9],x[10],x[11]);
		}

		else
			return new Book(x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7],x[8],x[9]);

}



Media::Media(string& callno,string& title,string& sub)
{
	this->call_number=callno;
	this->title=title;
	this->subjects=sub;

}

Media::Media()
{
}