#ifndef FSMATERIAL
#define FSMATERIAL

#include"FsDLL.h"
#include"FsMaths.h"
#include"FsShader.h"
#include<iostream>

namespace FausEngine {
	enum class TypeMaterial
	{
		Lit,
		Unlit,
	};

	class EXPORTDLL FsMaterial
	{
	public:
		FsMaterial();
		FsMaterial(FsVector3 ambient, FsVector3 specular, FsVector3 color, float shineness, TypeMaterial type, bool bind);
		~FsMaterial();
		bool LoadTexture(std::string path);
		FsShader* GetShader();
		unsigned int GetTexture();

		FsVector3 ambient;
		FsVector3 specular;
		FsVector3 color;
		float shineness;
		
		TypeMaterial type;
		bool bind_TexToColor;

	private:
		FsShader *shader;
		unsigned int textureID;
	};
}


#endif