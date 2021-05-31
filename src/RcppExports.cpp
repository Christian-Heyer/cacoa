// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// clusterFreeZScoreMat
List clusterFreeZScoreMat(const SEXP count_mat, IntegerVector sample_per_cell, List nn_ids, const std::vector<bool>& is_ref, int min_n_samp_per_cond, int min_n_obs_per_samp, bool robust, bool norm_both, double min_z, bool verbose, int n_cores, bool adjust_pvalues, int n_permutations, bool smooth, double wins);
RcppExport SEXP _cacoa_clusterFreeZScoreMat(SEXP count_matSEXP, SEXP sample_per_cellSEXP, SEXP nn_idsSEXP, SEXP is_refSEXP, SEXP min_n_samp_per_condSEXP, SEXP min_n_obs_per_sampSEXP, SEXP robustSEXP, SEXP norm_bothSEXP, SEXP min_zSEXP, SEXP verboseSEXP, SEXP n_coresSEXP, SEXP adjust_pvaluesSEXP, SEXP n_permutationsSEXP, SEXP smoothSEXP, SEXP winsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type count_mat(count_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sample_per_cell(sample_per_cellSEXP);
    Rcpp::traits::input_parameter< List >::type nn_ids(nn_idsSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type is_ref(is_refSEXP);
    Rcpp::traits::input_parameter< int >::type min_n_samp_per_cond(min_n_samp_per_condSEXP);
    Rcpp::traits::input_parameter< int >::type min_n_obs_per_samp(min_n_obs_per_sampSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< bool >::type norm_both(norm_bothSEXP);
    Rcpp::traits::input_parameter< double >::type min_z(min_zSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type n_cores(n_coresSEXP);
    Rcpp::traits::input_parameter< bool >::type adjust_pvalues(adjust_pvaluesSEXP);
    Rcpp::traits::input_parameter< int >::type n_permutations(n_permutationsSEXP);
    Rcpp::traits::input_parameter< bool >::type smooth(smoothSEXP);
    Rcpp::traits::input_parameter< double >::type wins(winsSEXP);
    rcpp_result_gen = Rcpp::wrap(clusterFreeZScoreMat(count_mat, sample_per_cell, nn_ids, is_ref, min_n_samp_per_cond, min_n_obs_per_samp, robust, norm_both, min_z, verbose, n_cores, adjust_pvalues, n_permutations, smooth, wins));
    return rcpp_result_gen;
END_RCPP
}
// estimateClusterFreeExpressionShiftsC
NumericVector estimateClusterFreeExpressionShiftsC(const Eigen::SparseMatrix<double>& cm, IntegerVector sample_per_cell, List nn_ids, const std::vector<bool>& is_ref, const int min_n_between, const int min_n_within, const int min_n_obs_per_samp, bool norm_all, bool verbose, int n_cores, const std::string& dist, bool log_vecs);
RcppExport SEXP _cacoa_estimateClusterFreeExpressionShiftsC(SEXP cmSEXP, SEXP sample_per_cellSEXP, SEXP nn_idsSEXP, SEXP is_refSEXP, SEXP min_n_betweenSEXP, SEXP min_n_withinSEXP, SEXP min_n_obs_per_sampSEXP, SEXP norm_allSEXP, SEXP verboseSEXP, SEXP n_coresSEXP, SEXP distSEXP, SEXP log_vecsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::SparseMatrix<double>& >::type cm(cmSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sample_per_cell(sample_per_cellSEXP);
    Rcpp::traits::input_parameter< List >::type nn_ids(nn_idsSEXP);
    Rcpp::traits::input_parameter< const std::vector<bool>& >::type is_ref(is_refSEXP);
    Rcpp::traits::input_parameter< const int >::type min_n_between(min_n_betweenSEXP);
    Rcpp::traits::input_parameter< const int >::type min_n_within(min_n_withinSEXP);
    Rcpp::traits::input_parameter< const int >::type min_n_obs_per_samp(min_n_obs_per_sampSEXP);
    Rcpp::traits::input_parameter< bool >::type norm_all(norm_allSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type n_cores(n_coresSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< bool >::type log_vecs(log_vecsSEXP);
    rcpp_result_gen = Rcpp::wrap(estimateClusterFreeExpressionShiftsC(cm, sample_per_cell, nn_ids, is_ref, min_n_between, min_n_within, min_n_obs_per_samp, norm_all, verbose, n_cores, dist, log_vecs));
    return rcpp_result_gen;
END_RCPP
}
// mapIds
std::vector<std::vector<int>> mapIds(std::vector<std::vector<int>> ids_vec, std::vector<int> id_map);
RcppExport SEXP _cacoa_mapIds(SEXP ids_vecSEXP, SEXP id_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type ids_vec(ids_vecSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type id_map(id_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(mapIds(ids_vec, id_map));
    return rcpp_result_gen;
END_RCPP
}
// projdiff
arma::rowvec projdiff(const arma::mat& mat, const arma::ivec& g1, const arma::ivec& g2);
RcppExport SEXP _cacoa_projdiff(SEXP matSEXP, SEXP g1SEXP, SEXP g2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type g2(g2SEXP);
    rcpp_result_gen = Rcpp::wrap(projdiff(mat, g1, g2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cacoa_clusterFreeZScoreMat", (DL_FUNC) &_cacoa_clusterFreeZScoreMat, 15},
    {"_cacoa_estimateClusterFreeExpressionShiftsC", (DL_FUNC) &_cacoa_estimateClusterFreeExpressionShiftsC, 12},
    {"_cacoa_mapIds", (DL_FUNC) &_cacoa_mapIds, 2},
    {"_cacoa_projdiff", (DL_FUNC) &_cacoa_projdiff, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_cacoa(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
