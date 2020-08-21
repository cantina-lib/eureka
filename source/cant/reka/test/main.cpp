//
// Created by binabik on 21/08/2020.
//

#include <cant/reka/reka.hpp>

#include <cant/common/macro.hpp>

using namespace cant;

int main(int argc, char** argv)
{
    maths::InterpolationPoint<float_m, pan::tone_m> point = { 440.0f, 69 };

    CANT_MAYBEUNUSED maths::InterpolationOneD<float_m, pan::tone_m> interp = { point, { 880.0f, 82 }};
}