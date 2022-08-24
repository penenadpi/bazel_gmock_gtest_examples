#ifndef TEMPLATE_VISION_H
#define TEMPLATE_VISION_H

#pragma once

class Obrada {

public:

  virtual ~Obrada() {}
  virtual bool Procesiraj(int frame) = 0;
};

#endif  