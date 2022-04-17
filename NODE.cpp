#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int x)
{
  size=x;
  next=NULL;
  cout<<" **Adding "<<x<<"**"<<endl;
}

NODE:: ~NODE()
{
  cout<<"Node "<<size<<" is being deleted"<<endl;
}

NODE* NODE::move_next()
{
  return next;
}

void  NODE:: show_node()
{
  cout<<"Node size: "<<size;
  if(size==0)
    cout<<" *Dead*"<<endl;
  else
    cout<<"\n";
 }

void NODE::insert(NODE*& x)
{
  x->next=this;
}

void  NODE:: kill_node()
{
  size=0;
}
