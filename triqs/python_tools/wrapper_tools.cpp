#ifdef TRIQS_WITH_PYTHON_SUPPORT

// REMOVE THIS 
#include <triqs/arrays.hpp>

#include "./wrapper_tools.hpp"
namespace triqs { namespace py_tools { 

template <> const char * make_format<0>::value = "";
template <> const char * make_format<1>::value = "O&";
template <> const char * make_format<2>::value = "O&O&";
template <> const char * make_format<3>::value = "O&O&O&";
template <> const char * make_format<4>::value = "O&O&O&O&";
template <> const char * make_format<5>::value = "O&O&O&O&O&";


pyref py_converter<triqs::h5::group>::group_type;

}}

#endif

