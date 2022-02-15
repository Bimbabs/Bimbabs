#ifndef HEADER_GE_MAIN_HPP
#define HEADER_GE_MAIN_HPP

#include <IVideoDriver.h>

namespace GE
{
struct GEConfig
{
bool m_disable_npot_texture;
};

void init(irr::video::IVideoDriver* driver);
irr::video::IVideoDriver* getDriver();
GEConfig* getGEConfig();
void deinit();
}

#endif
