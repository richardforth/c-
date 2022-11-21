#ifndef TRIPLE_H
  #define TRIPLE_H

    #include "add.h"

    inline int triple( int x ) { return add( x, add(x , x ) ) ; }
#endif
