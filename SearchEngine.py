#!/usr/bin/python
from __future__ import print_function
#import Media

"""------------------------------------------------------
CSCI 511
Author : Ganesh Joshi
Search Engine
Date: 12/07/2013
-------------------------------------------------------"""
class Media(object):
    def __init__(self,b1,b2,b3):
        self.call_number=b1
        self.title=b2
        self.subjects=b3    


"""-----------------------------------------------------"""
class Book(Media):
  
  
  def __init__(self,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10):
     Media.__init__(self,b1,b2,b3)   
     self.author=str(b4)
     self.description=str(b5)
     self.publisher=str(b6)
     self.city=str(b7)
     self.year=str(b8)
     self.series=str(b9)
     self.notes=str(b10)


  def display(self):
     """ Function to display Book """
     print("===================Book=================\n")
     print("Call Number         :",self.call_number)
     print("Title               :",self.title)
     print("Subjct              :",self.subjects)
     print("Author              :",self.author)
     print("Description         :",self.description)
     print("Publisher           :",self.publisher)
     print("City                :",self.city)
     print("Year                :",self.year)
     print("Series              :",self.series)
     print("Notes               :",self.notes)

  def searchByCallnumber(self,callnumber):
       """if(self.call_number.find(callnumber)!=-1):
            return True;
       else:
            return False;"""
       s1=self.call_number
       s2=str(callnumber)
       s1.find(s2)
       if(s1.find(s2) != -1):
        return True;
       else:
        return False;

  def searchByTitle(self,bookTitle):
       s1=self.title
       if(s1.find(bookTitle) != -1):
        return True;
       else:
        return False;

  def searchBySubject(self,bookSubject):
       s2=self.subjects
       if(s2.find(bookSubject) != -1):
        return True;
       else:
        return False;

    

  def searchByOther(self,otherstr):
       s1=self.description
       s2=self.notes
       s3=self.year
       if((s1.find(otherstr) != -1) or (s2.find(otherstr) != -1) or (s3.find(otherstr) != -1) ):
        return True;
       else:
        return False;
        
 
"""-----------------------------------------------------"""
class Film(Media):
  
  
  def __init__(self,b1,b2,b3,b4,b5,b6):
     Media.__init__(self,b1,b2,b3)   
     self.director=str(b4)
     self.notes=str(b5)
     self.year=str(b6)


  def display(self):
     """ Function to display Book """
     print("===================Film=================\n")
     print("Call Number         :",self.call_number)
     print("Title               :",self.title)
     print("Subjct              :",self.subjects)
     print("Director            :",self.director)
     print("Notes               :",self.notes)
     print("Year                :",self.year)

  def searchByCallnumber(self,callnumber):
       s1=self.call_number
       s2=str(callnumber)
       s1.find(s2)
       if(s1.find(s2) != -1):
        return True;
       else:
        return False;

  def searchByTitle(self,bookTitle):
       s1=self.title
       if(s1.find(bookTitle) != -1):
        return True;
       else:
        return False;

  def searchBySubject(self,Subject):
       s2=self.subjects
       if(s2.find(Subject) != -1):
        return True;
       else:
        return False;

    

  def searchByOther(self,otherstr):
       s1=self.director
       s2=self.notes
       s3=self.year
       if((s1.find(otherstr) != -1) or (s2.find(otherstr) != -1) or (s3.find(otherstr) != -1)):
        return True;
       else:
        return False;

"""-----------------------------------------------------"""
class Video(Media):
  
  
  def __init__(self,b1,b2,b3,b4,b5,b6,b7,b8):
     Media.__init__(self,b1,b2,b3)   
     self.description =str(b4)
     self.distributor=str(b5)
     self.notes=str(b6)
     self.series=str(b7)
     self.label=str(b8)


  def display(self):
     """ Function to display Book """
     print("===================Video=================\n")
     print("Call Number         :",self.call_number)
     print("Title               :",self.title)
     print("Subjct              :",self.subjects)
     print("Description         :",self.description)
     print("Distributor         :",self.distributor)
     print("Notes               :",self.notes)
     print("Series              :",self.series)
     print("Label               :",self.label)

  def searchByCallnumber(self,callnumber):
       s1=self.call_number
       s2=str(callnumber)
       s1.find(s2)
       if(s1.find(s2) != -1):
        return True;
       else:
        return False;

  def searchByTitle(self,Title):
       s1=self.title
       if(s1.find(Title) != -1):
        return True;
       else:
        return False;

  def searchBySubject(self,Subject):
       s2=self.subjects
       if(s2.find(Subject) != -1):
        return True;
       else:
        return False;

    

  def searchByOther(self,otherstr):
       s1=self.description
       s2=self.notes
       s3=self.distributor
       if((s1.find(otherstr) != -1) or (s2.find(otherstr) != -1) or (s3.find(otherstr) != -1)):
        return True;
       else:
        return False;

"""-----------------------------------------------------"""
class Periodic(Media):
  
  
  def __init__(self,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12):
     Media.__init__(self,b1,b2,b3)   
     self.author=b4
     self.description=b5
     self.publisher=b6
     self.publishing_history=b7
     self.series=b8
     self.notes=b9
     self.related_titles=b10
     self.other_forms_of_title=b11
     self.govt_doc_number=b12


  def display(self):
     """ Function to display Book """
     print("===================Periodic=================\n")
     print("Call Number         :",self.call_number)
     print("Title               :",self.title)
     print("Subjct              :",self.subjects)
     print("Author              :",self.author)
     print("Description         :",self.description)
     print("Publisher           :",self.publisher)
     print("Publishing history  :",self.publishing_history)
     print("Series              :",self.series)
     print("Notes               :",self.notes)
     print("Related_titles      :",self.related_titles)
     print("Other forms of title:",self.other_forms_of_title)
     print("Govt doc number     :",self.govt_doc_number)

  def searchByCallnumber(self,callnumber):
       s1=self.call_number
       s2=str(callnumber)
       s1.find(s2)
       if(s1.find(s2) != -1):
        return True;
       else:
        return False;

  def searchByTitle(self,Title):
       s1=self.title
       if(s1.find(Title) != -1):
        return True;
       else:
        return False;

  def searchBySubject(self,Subject):
       s2=self.subjects
       if(s2.find(Subject) != -1):
        return True;
       else:
        return False;

    

  def searchByOther(self,otherstr):
       s1=self.series
       s2=self.notes
       s3=self.related_titles
       s4=self.description
       if((s1.find(otherstr) != -1) or (s2.find(otherstr) != -1) or (s3.find(otherstr) != -1) or (s4.find(otherstr) != -1)):
        return True;
       else:
        return False;
"""-----------------------------------------------------
Search Engine
--------------------------------------------------------"""
class SearchEngine(object):
     
    catalouge=[]
    result=[]
    
    def __init__(self):
        with open("book.txt") as f:
         for line in f:
                temp=line.split('|')
                self.catalouge.append(Book(temp[0],temp[1],temp[2],temp[3],temp[4],temp[5],temp[6],temp[7],temp[8],temp[9]))
   	with open("film.txt") as f:
       	  for line in f:
                temp=line.split('|')
                self.catalouge.append(Film(temp[0],temp[1],temp[2],temp[3],temp[4],temp[5]))
       	with open("periodic.txt") as f:
       	 for line in f:
                temp=line.split('|')
                self.catalouge.append(Periodic(temp[0],temp[1],temp[2],temp[3],temp[4],temp[5],temp[6],temp[7],temp[8],temp[9],temp[10],temp[11]))
        with open("video.txt") as f:
       	 for line in f:
                temp=line.split('|')
                self.catalouge.append(Video(temp[0],temp[1],temp[2],temp[3],temp[4],temp[5],temp[6],temp[7]))
    
    
    def display(self):
         for index, item in enumerate(self.result):
            item.display()
            

    def  search_by_call_number(self):
         self.result=[]
         self.callNumber=""
         self.callNumber=raw_input("Enter the call Number\n")
         type(self.callNumber)
         for index, item in enumerate(self.catalouge):
            if(item.searchByCallnumber(self.callNumber)):
                self.result.append(item)

    def  search_by_Title(self):
        self.result=[]
        self.x=raw_input("Enter the Title \n")
        for index, item in enumerate(self.catalouge):
            if(item.searchByTitle(self.x)):
                self.result.append(item)
    
    def  search_by_subject(self):
        self.result=[]
        self.Subject=raw_input("Enter the Subject\n")
        for index, item in enumerate(self.catalouge):
            if(item.searchBySubject(self.Subject)):
                self.result.append(item)

    def  search_by_other(self):
        self.result=[]
        self.other=raw_input("Enter the Other String\n")
        for index, item in enumerate(self.catalouge):
            if(item.searchByOther(self.other)):
                self.result.append(item)
     
           
    def processCommand(self):
        print("===============Search Engine============\n")
        #print("Enter 1:To serach By call Number 2:Search By Title 3:Search By Subject 4:Search Other 5:Exit")
        self.option=input("Enter 1:To serach By call Number 2:Search By Title 3:Search By Subject 4:Search Other 5:Exit \n")
        if(self.option==1):
            self.search_by_call_number()
            self.display()
        if(self.option==2):
            self.search_by_Title()
            self.display()
        if(self.option==3):
            self.search_by_subject()
            self.display()
        if(self.option==4):
            self.search_by_other()
            self.display()
        if(self.option==5):
            exit(0)
            
            
        
        
    def mainloop(self):
        while(True):
            self.processCommand()   

    
    

"""-----------------------------------------------------
Main
--------------------------------------------------------"""


S1=SearchEngine()
S1.mainloop()
             

    




 





	
