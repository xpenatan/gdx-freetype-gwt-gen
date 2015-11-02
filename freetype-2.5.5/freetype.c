#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_STROKER_H

unsigned c_initFreeType() {
	FT_Library library = 0;
	FT_Error error = FT_Init_FreeType(&library);
	if(error) return 0;
	else return library;
}