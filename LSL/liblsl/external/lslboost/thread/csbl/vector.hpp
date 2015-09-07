// Copyright (C) 2013 Vicente J. Botet Escriba
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.lslboost.org/LICENSE_1_0.txt)
//
// 2013/10 Vicente J. Botet Escriba
//   Creation.

#ifndef BOOST_CSBL_VECTOR_HPP
#define BOOST_CSBL_VECTOR_HPP

#include <lslboost/config.hpp>

#if defined BOOST_THREAD_USES_BOOST_VECTOR || defined BOOST_NO_CXX11_RVALUE_REFERENCES || defined BOOST_MSVC
#ifndef BOOST_THREAD_USES_BOOST_VECTOR
#define BOOST_THREAD_USES_BOOST_VECTOR
#endif
#include <lslboost/container/vector.hpp>
#else
#include <vector>
#endif

namespace lslboost
{
  namespace csbl
  {
#if defined BOOST_THREAD_USES_BOOST_VECTOR
    using ::lslboost::container::vector;
#else
    using ::std::vector;
#endif

  }
}
#endif // header