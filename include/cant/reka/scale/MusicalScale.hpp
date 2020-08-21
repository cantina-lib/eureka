//
// Created by binabik on 15/08/2020.
//

#ifndef EUREKA_MUSICALSCALE_HPP
#define EUREKA_MUSICALSCALE_HPP

#pragma once

#include <cant/reka/common/types.hpp>
#include <cant/pan/common/types.hpp>
#include <cant/common/types.hpp>

#include <cant/maths/interpolation/interpolation.hpp>

namespace cant::reka
{
    class MusicalScale
    {
    private:
        int_m _numberSemitones;

        /* fundamental */
        pan::tone_m _fundamentalTone;
        float_m _fundamentalFreq;

    };
}

#endif //EUREKA_MUSICALSCALE_HPP
