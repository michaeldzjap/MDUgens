#ifndef MD_UGENS_REVERB_HPP
#define MD_UGENS_REVERB_HPP

#include "SCAllocator.hpp"
#include "SCPool.hpp"
#include "SC_PlugIn.hpp"
#include "Reverb.hpp"

namespace md_ugens {

    class Reverb : public SCUnit {
    public:
        explicit Reverb();

    private:
        memory::SCPool m_pool;
        memory::SCAllocator<double, memory::SCPool> m_allocator;
        md_audio::Reverb<memory::SCAllocator<double, memory::SCPool>> m_reverb;
        float m_mix;

        void next(int inNumSamples) noexcept;

        void clear(int inNumSamples);
    };

}

#endif /* MD_UGENS_REVERB_HPP */
