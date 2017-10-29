#include "material/toon.h"
#include <assert.h>

void ToonMaterial::apply(unsigned int light_pass)
{
    // qDebug() << "applying TexturedPhongMaterial";

   PhongMaterial::apply(light_pass);

}



QString
ToonMaterial::getAppliedShader(){
    return "toon";
}
