// Async in C
//
// Copyright: Frank Lyder Bredland (C) 2014
//            All rights reserved
#ifndef ASYNC_H
#define ASYNC_H

#define ASYNC_BEGIN static int _async = -1; switch(_async) { case -1:
#define ASYNC_END _async = -1; }
#define YIELD _async=__LINE__; return; case __LINE__: ;

#endif
