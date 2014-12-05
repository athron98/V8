#include <v8.h>
#include <Rcpp.h>
using namespace v8;
using namespace Rcpp;

/*
 Xptr examples:
 - https://github.com/RcppCore/Rcpp/blob/master/inst/unitTests/cpp/XPtr.cpp
 - http://romainfrancois.blog.free.fr/index.php?post/2010/01/08/External-pointers-with-Rcpp
*/


/*

// [[Rcpp::export]]
XPtr< Persistent<Context> > make_context(){
  HandleScope handle_scope;
  Persistent<Context> context = Context::New();
  XPtr< Persistent<Context> > ptr(context);
  return(ptr) ;
}

*/
