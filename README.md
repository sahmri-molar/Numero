# Numero
[![Travis build status](https://travis-ci.org/sahmri-molar/Numero.svg?branch=master)](https://travis-ci.org/sahmri-molar/Numero)
[![CRAN_Status_Badge](http://www.r-pkg.org/badges/version/Numero)](http://cran.r-project.org/package=Numero)

Overview
--------

In textbook examples, multivariable datasets are clustered into distinct subgroups that can be clearly identified by a set of optimal mathematical criteria. However, many real-world datasets arise from synergistic consequences of multiple effects, noisy and partly redundant measurements, and may represent a continuous spectrum of the different phases of a phenomenon. In medicine, complex diseases associated with ageing are typical examples. An individual’s data reflects the combination of genetic and environmental factors that have had cumulative effects over decades, and incidental factors at the time of the measurements. Furthermore, each individual typically has a unique mix of multiple ailments and morbidities that depend on physiology and circumstances. We postulate that population-based biomedical datasets (and many other real-world examples) do not contain an intrinsic clustered structure that would give rise to mathematically well-defined subgroups. From a modeling point of view, the lack of intrinsic structure means that the data comprise a contiguous cloud in high-dimensional space without abrupt changes in density to indicate subgroup boundaries, hence a mathematical criteria cannot segment the cloud purely by its internal structure. Yet we need data-driven classification and subgrouping to aid decision-making and to facilitate the development of testable hypotheses. For this reason, we developed the Numero package, a more flexible and transparent process that allows human observers to create usable multivariable subgroups even when conventional clustering frameworks struggle.

Installation
------------

``` r
# Install Numero from the CRAN repository:
install.packages("Numero")
```

Usage
-----

The package contains an extensive vignette that will introduce the
package functions with a real-life example from subgrouping individuals with type 1 diabetes.

``` r
library(Numero)
browseVignettes(package = "Numero")
```
