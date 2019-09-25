#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <GL/glew.h>
#include <string>

struct Texture {
  bool loaded = false;
  GLuint texture = 0;
  unsigned width = 0;
  unsigned height = 0;

  Texture(std::string imagepath, bool trilinearFiltering = false);
  ~Texture();
private:
  bool loadBMP(std::string imagepath, bool trilinearFiltering);
};

#endif