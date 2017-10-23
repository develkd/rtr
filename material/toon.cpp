#include "material/toon.h"
#include <assert.h>

void ToonMaterial::apply(unsigned int light_pass)
{
    // qDebug() << "applying TexturedPhongMaterial";

    prog_->bind();

    // globals
    prog_->setUniformValue("time", time);
    prog_->setUniformValue("ambientLightIntensity", ambientLightIntensity);

    // point light
    assert(light_pass>=0 && light_pass<lights.size());

}

