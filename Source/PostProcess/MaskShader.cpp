#include "MaskShader.h"

MaskShader::MaskShader():BasicShader("Mask", "Mask"){
    getUniforms();
}

void MaskShader::getUniforms(){
    BasicShader::getUniforms ();
}