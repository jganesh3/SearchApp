/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : SearchEnhineApp.cpp
****************************************************************/
#include <iostream>
#include <fstream>
#include <sstream>
#include "SearchEngineApp.h"
#include <vector>
#include <cstdlib>
using namespace std;

/*Files will be read when the object is initialized*/
SearchEngine::SearchEngine()
{

	
	fstream book,film,periodic,video;
	string str1;
	
	//Reading the Books 
	string type="Book";
	book.open("book.txt");
	if(book==NULL)
	cout<<"Error while reading Books.txt"<<endl;
	else
	cout<<"Books.txt file open sucessfully"<<endl;
	
    while(getline(book, str1 ) )
    {
		string books[10];
		int i=0;
        stringstream read1(str1);
		while(read1)
		{

				if (!getline( read1, str1, '|' )) 
					break;
				else
				{					    
						books[i]=str1;
						i++;
				}
		}

		catalogue.push_back(Media::makeobjects(type,books));
              
   
	}

	book.close();
	
	//Readin the Film 
	type="Film";
	film.open("film.txt");
	if(film==NULL)
		cout<<"Error while reading Film.txt"<<endl;
	else
		cout<<"Film.txt file open sucessfully"<<endl;
	while(getline(film, str1 ) )
    {
		string books[6];
		int i=0;
        stringstream read1(str1);
		while(read1)
		{

				if (!getline( read1, str1, '|' )) 
					break;
				else
				{					    
						books[i]=str1;
						i++;
				}
		}

		catalogue.push_back(Media::makeobjects(type,books));
     	 
	}
	film.close();


	//Reading the Periodic 
	type="periodic";
	periodic.open("periodic.txt");
	if(periodic==NULL)
	cout<<"Error while reading periodic.txt"<<endl;
	else
	cout<<"periodic.txt file open sucessfully"<<endl;
	
    while(getline(periodic, str1 ) )
    {
		string books[12];
		int i=0;
        stringstream read1(str1);
		while(read1)
		{

				if (!getline( read1, str1, '|' )) 
					break;
				else
				{					    
						books[i]=str1;
						i++;
				}
		}

		catalogue.push_back(Media::makeobjects(type,books));
              
   
	}

	periodic.close();

	//Reading the video 
	type="video";
	video.open("video.txt");
	if(video==NULL)
	cout<<"Error while reading Video.txt"<<endl;
	else
	cout<<"Video.txt file open sucessfully"<<endl;
	
    while(getline(video, str1 ) )
    {
		string books[8];
		int i=0;
        stringstream read1(str1);
		while(read1)
		{

				if (!getline( read1, str1, '|' )) 
					break;
				else
				{					    
						books[i]=str1;
						i++;
				}
		}

		catalogue.push_back(Media::makeobjects(type,books));
              
   
	}

	video.close();

}

SearchEngine::~SearchEngine()
{

    int len=catalogue.size();
	for(int i=0;i<len;i++)
	{
		delete catalogue[i];
	}

	

}


void SearchEngine::search_by_call_number()
{
    result.clear();
    string sstring;
    cout<<"Enter serach string"<<endl;
    cin.ignore();
    getline(cin,sstring);
    if(sstring.empty()) 
    {
      cout<<"Please enter Valid string"<<endl;
      return;
    }
    int len=catalogue.size();
    for(int i=0;i<len;i++)
      {
      if(catalogue[i]->searchbyCallNo(sstring))
      {
       result.push_back(catalogue[i]);
      }
  }
                                                                                        
}


void SearchEngine::serach_by_title()
{
	result.clear();
	string sstring;
	cout<<"Enter title"<<endl;
	cin.ignore();
	getline(cin,sstring);
    if(sstring.empty()) 
    {
      cout<<"Please enter Valid string"<<endl;
      return;
    }
	int len=catalogue.size();
	for(int i=0;i<len;i++)
	{
		if(catalogue[i]->searchbyTitle(sstring))
		{
			
			result.push_back(catalogue[i]);
		}


	}	
}
void SearchEngine::processCommand()
{
	int option;
	cout<<"===============Search Engine================="<<endl;
	cout<<"Enter 1:To serach By call Number 2:Search By Title 3:Search By Subject 4:Search Other 5:Exit"<<endl;
    cin.clear();
    std::cin>>option;
	switch(option)
	{
	case 1: this->search_by_call_number();
			this->display_result();
			break;
	case 2: this->serach_by_title();
			this->display_result();
			break;
	case 3: this->search_by_subject();
			this->display_result();
			break;
	case 4:this->search_other();
		   this->display_result();
		   break;
    case 5: exit(0);
            break;
	default:cout<<"Usage 1:To serach By call Number 2:Search By Title 3:Search By Subject 4:Search Other"<<endl;
            cin.clear();
		   break;
     
	}


}

void SearchEngine::search_other()
{
	result.clear();
	string sstring;
	cout<<"Enter Search String"<<endl;
	cin.ignore();
	getline(cin,sstring);
    if(sstring.empty()) 
    {
      cout<<"Please enter Valid string"<<endl;
      return;
    }
	int len=catalogue.size();
	for(int i=0;i<len;i++)
	{
		if(catalogue[i]->searchOther(sstring))
		{
			result.push_back(catalogue[i]);
		}


	}	

}

void SearchEngine::search_by_subject()
{
	string sstring;
	result.clear();
	cout<<"Enter Subject"<<endl;
	cin.ignore();
    getline(cin,sstring);
    if(sstring.empty()) 
    {
      cout<<"Please enter Valid string"<<endl;
      return;
    }
	int len=catalogue.size();
	for(int i=0;i<len;i++)
	{
		if(catalogue[i]->searchbySubject(sstring))
		{
			result.push_back(catalogue[i]);
		}


	}	

}

void SearchEngine::display_result() const
{

	
	int len=result.size();
	for(int i=0;i<len;i++)
	{
		 result[i]->displayResult();
	}

}

void SearchEngine::mainLoop()
{
	while (1)
        processCommand();    
}


int  main()
{

	SearchEngine search;
	search.mainLoop();

	return 0;
}
