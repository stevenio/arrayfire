/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <Array.hpp>
#include <convolve_common.hpp>

namespace cuda
{

template<typename T, typename convT, typename cT, bool isDouble, bool roundOut, dim_type baseDim>
Array<T> fftconvolve(Array<T> const& signal, Array<T> const& filter, const bool expand, ConvolveBatchKind kind);

}
