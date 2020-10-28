//
// Created by binabik on 15/08/2020.
//

#ifndef CANTINE_EUREKA_MUSICALSCALE_HPP
#define CANTINE_EUREKA_MUSICALSCALE_HPP

#pragma once

#include <cant/reka/common/types.hpp>
#include <cant/pan/common/types.hpp>
#include <cant/common/types.hpp>

#include <cant/maths/interpolation/interpolation.hpp>

#include <cant/common/macro.hpp>
CANTINA_REKA_NAMESPACE_BEGIN
    class MusicalScale
    {

    private:
        /** -- fields -- **/
        type_i m_numberSemitones;

        pan::tone_d m_fundamentalTone;
        type_d m_fundamentalFreq;

    };
CANTINA_REKA_NAMESPACE_END
#include <cant/common/undef_macro.hpp>

#endif //CANTINE_EUREKA_MUSICALSCALE_HPP
