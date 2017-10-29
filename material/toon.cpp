#include "material/toon.h"
#include <assert.h>

void ToonMaterial::apply(unsigned int light_pass)
{
    // qDebug() << "applying TexturedPhongMaterial";

   PhongMaterial::apply(light_pass);

   prog_->setUniformValue("toonShader.toon", toonShader.toon);

}



QString
ToonMaterial::getAppliedShader(){
    return "toon";
}
