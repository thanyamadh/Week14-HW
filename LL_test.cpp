#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"

int main(int argc, char *argv[])
{
  LL A;
  int i;
  string ct="cat";
  NODE *t;
  
  cout <<"\n====Construct===="<< endl;
  for(i=1;i<argc;i=i+3) 
  {
    if(argv[i]==ct)
      t=new cat(atoi(argv[i+1]),atoi(argv[i+2]));
    else  
      t=new dog(atof(argv[i+1]),atoi(argv[i+2]));
    A.add_node(t);
  }
  cout << "====Before snap finger====" << endl;
  A.show_all();
  A.snap_finger();
  cout << "====After snap finger====" << endl;
  A.show_all();
  cout << "====Destruct====" << endl;
  
  return 0;
}
