//==============================================================================
//         Copyright 2003 - 2012   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2012   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_HYPERBOLIC_FUNCTIONS_ASINH_HPP_INCLUDED
#define NT2_HYPERBOLIC_FUNCTIONS_ASINH_HPP_INCLUDED
#include <nt2/include/functor.hpp>


namespace nt2 { namespace tag
  {
   /*!
     @brief asinh generic tag

     Represents the asinh function in generic contexts.

     @par Models:
        Hierarchy
   **/
    struct asinh_ : ext::elementwise_<asinh_>
    {
      /// @brief Parent hierarchy
      typedef ext::elementwise_<asinh_> parent;
    };
  }
  /*!
    Returns the hyperbolic sine argument: \f$\log(a_0+\sqrt{a_0^2+1})\f$.

    @par Semantic:

    For every parameter of floating type T0

    @code
    T0 r = asinh(x);
    @endcode

    is similar to:

    @code
    T0 r =  log(x+sqrt(x*x+one));
    @endcode

    @see @funcref{log}, @funcref{sqrt}, @funcref{sinh}
    @param a0

    @return a value of the same type as the parameter
  **/
  NT2_FUNCTION_IMPLEMENTATION(tag::asinh_, asinh, 1)
}

#endif

