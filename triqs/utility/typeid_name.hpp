
/*******************************************************************************
 *
 * TRIQS: a Toolbox for Research in Interacting Quantum Systems
 *
 * Copyright (C) 2011 by M. Ferrero, O. Parcollet
 *
 * TRIQS is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * TRIQS is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * TRIQS. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/
#pragma once
#include <string>
#include <typeinfo>

namespace triqs { namespace utility { 

std::string demangle(const char * name);
std::string demangle(std::string const & name);
std::string get_name(std::type_info const &info);

 template<typename T>
  std::string typeid_name(T const & A) { return get_name(typeid(A));}

 template<typename T>
  std::string typeid_name() { return get_name(typeid(T));}
  //std::string typeid_name() { return get_name(typeid(std::declval<T>()));}

}}
