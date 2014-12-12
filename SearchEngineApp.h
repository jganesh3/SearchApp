/****************************************************************
* @author: Ganesh Joshi
* CSCI 511
* File : SearchEnhineApp.h
****************************************************************/
#include"Media.h"
#include<vector>
using namespace std;

//Class Search Engine
class SearchEngine
{
private:
	vector<Media *> catalogue;
	vector<Media *> result;
public:
	SearchEngine();
	void processCommand();
	void mainLoop();
	void search_by_call_number();
	void serach_by_title();
	void search_by_subject();
	void search_other();
	void display_result() const;
	~SearchEngine();
};