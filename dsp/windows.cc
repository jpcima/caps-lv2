#include "../basics.h"
#include "../dsp/windows.h"
#include <boost/math/special_functions/bessel.hpp>

namespace DSP {

double besseli (double x)
{
    return boost::math::cyl_bessel_i(0.0, x);
}

}  // namespace DSP
