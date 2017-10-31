#include "material/toon.h"
#include <assert.h>

void ToonMaterial::apply(unsigned int light_pass)
{
    // qDebug() << "applying TexturedPhongMaterial";

   PhongMaterial::apply(light_pass);

   prog_->setAttributeValue("texCoord", QVector2D());
   prog_->setUniformValue("toonShader.toon", toonShader.toon);
   prog_->setAttributeValue("texCoord",QVector2D(0.5,0.5) );
}



QString
ToonMaterial::getAppliedShader(){
    return "toon";
}
