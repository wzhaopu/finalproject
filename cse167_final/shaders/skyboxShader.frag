#version 330 core
in vec3 TexCoords;
layout (location = 0) out vec4 FragColor;
layout (location = 1) out vec4 BrightColor;
uniform samplerCube skybox;

void main()
{    
    FragColor = texture(skybox, TexCoords);
    // check whether fragment output is higher than threshold, if so output as brightness color
    float brightness = dot(FragColor.rgb, vec3(0.2126, 0.7152, 0.0722));
    if(brightness > 1.0)
        BrightColor = vec4(FragColor.rgb, 1.0);
    else
        BrightColor = vec4(0.0, 0.0, 0.0, 1.0);
}
