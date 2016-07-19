
#include "example.h"
#include <Eigen/Geometry>
#include <pybind11/stl.h>

void init_eigen(py::module &m) {
    m.def("foo", [] ( const std::vector<Eigen::Quaternion<double> >& v ) { return v; }, "foo", py::arg("v")); 

}
