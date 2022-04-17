#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL()
{
  hol=NULL;
  size=0;
}

LL::~LL()
{
  int i;
	NODE *t;
	for(i=0;i<size;i++)
  {
		t=hol;
		hol=hol->move_next();
		delete t;
	}	
}

void LL::show_all()
{
  NODE* t=hol;
  int i;
  for(i=0;i<size;i++)
  {
    t->show_node();
	  t=t->move_next();    
  }
}

void LL::add_node(NODE *&A)
{
  hol->insert(A);
  hol=A;
  size++;
}

void LL::snap_finger()
{
  NODE* t=hol;
  int i,j;
  int kill;
  for(j=0;j<size/2;j++)
  {
    //srand(time(NULL));
    kill=rand()%size; //สุ่มฆ่า
    for(i=0;i<size;i++)
    {
      if(i==kill)
       t->kill_node();
  	  t=t->move_next();    
    }
    t=hol;
  }
}