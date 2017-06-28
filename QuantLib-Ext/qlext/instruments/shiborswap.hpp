/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2017 Cheng Li

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

/*! \file shiborswap.hpp
    \brief Simple fixed-rate vs Shibor swap
*/

#ifndef qlext_shibor_swap_hpp
#define qlext_shibor_swap_hpp

#include <ql/instruments/vanillaswap.hpp>

namespace QuantLib {
	template<class>
	class Handle;

	class Shibor;
    class YieldTermStructure;

	class ShiborSwap: public VanillaSwap {

	public:
		ShiborSwap(typename VanillaSwap::Type type,
				   Real nominal,
				   Date startDate, 
				   const Period& swapTenor,
				   const Period& fixedTenor,
				   Real fixedRate,
				   const Period& floatTenor,
                   const Handle<YieldTermStructure>& h);

		ShiborSwap(typename VanillaSwap::Type type,
				   Real nominal,
				   Date startDate, 
				   const Period& swapTenor,
				   const Period& fixedTenor,
				   Real fixedRate,
				   const boost::shared_ptr<Shibor>& index);

    };
}

#endif