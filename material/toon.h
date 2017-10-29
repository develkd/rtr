#pragma once

#include "material/material.h"
#include "material/phong.h"

#include <QOpenGLTexture>


class ToonMaterial : public PhongMaterial {
public:

    // constructor requires existing shader program
    ToonMaterial(std::shared_ptr<QOpenGLShaderProgram> prog) : PhongMaterial(prog)
    {

    }

    // bind underlying shader program and set required uniforms
    void apply(unsigned int light_pass = 0) override;
    QString getAppliedShader() override;
};

