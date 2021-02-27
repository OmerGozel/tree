#include <stdlib.h>
#include <iostream>
#include "tree.h"

using namespace std;

 Tree::Tree (void) //constructor
{
    head = NULL;
}

 bool Tree::IsEmpty()
{
      return head == NULL;
}

