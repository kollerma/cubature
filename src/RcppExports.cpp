// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// doCubature
Rcpp::List doCubature(int fDim, SEXP f, Rcpp::NumericVector xLL, Rcpp::NumericVector xUL, int maxEval, double absErr, double tol);
RcppExport SEXP cubature_doCubature(SEXP fDimSEXP, SEXP fSEXP, SEXP xLLSEXP, SEXP xULSEXP, SEXP maxEvalSEXP, SEXP absErrSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type fDim(fDimSEXP);
    Rcpp::traits::input_parameter< SEXP >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xLL(xLLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xUL(xULSEXP);
    Rcpp::traits::input_parameter< int >::type maxEval(maxEvalSEXP);
    Rcpp::traits::input_parameter< double >::type absErr(absErrSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(doCubature(fDim, f, xLL, xUL, maxEval, absErr, tol));
    return rcpp_result_gen;
END_RCPP
}
