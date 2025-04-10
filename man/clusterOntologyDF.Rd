% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ontology.R
\name{clusterOntologyDF}
\alias{clusterOntologyDF}
\title{Cluster Ontology DataFrame}
\usage{
clusterOntologyDF(ont.df, clust.naming, ind.h = 0.66, total.h = 0.5)
}
\arguments{
\item{ind.h}{Cut height for hierarchical clustering of terms per cell type.
Approximately equal to the fraction of genes, shared between the GOs. Default: 0.66.}

\item{total.h}{Cut height for hierarchical clustering of GOs across all subtypes.
Approximately equal to the fraction of subtypes for which two GOs should belong to the same cluster.
Default: 0.5.}
}
\value{
List containing:
\itemize{
\item \code{df}: data.frame with information about individual gene ontologies and columns \code{Cluster} and \code{ClusterName}
for the clustering info
\item \code{hclust}: the object of class \link[stats:hclust]{hclust} with hierarchical clustering of GOs across all
subtypes
}
}
\description{
Cluster Ontology DataFrame
}
\keyword{internal}
