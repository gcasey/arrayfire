#include <Array.hpp>

namespace cuda
{

template<typename inType, typename outType, int rank, bool isR2C>
Array<outType> * fft(Array<inType> const &in, double normalize, dim_type const npad, dim_type const * const pad);

template<typename inType, typename outType, int rank>
Array<outType> * ifft(Array<inType> const &in, double normalize, dim_type const npad, dim_type const * const pad);

}