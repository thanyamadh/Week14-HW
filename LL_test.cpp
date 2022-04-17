#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
/*1.Create a constructor & Destructor according to its type.   */

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[])
{
  LL A;
  int i;
  string ct="cat";
  NODE *t;
  
  cout <<"\n====Construct===="<< endl;
  for(i=1;i<argc;i=i+3) 
  {
    cout<<argv[i];
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
