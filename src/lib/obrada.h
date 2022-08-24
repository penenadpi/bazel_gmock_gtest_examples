#ifndef TEMPLATE_VISION_H
#define TEMPLATE_VISION_H

#pragma once

class Obrada {

public:

  virtual ~Obrada() {}
  virtual void Procesiraj(int clan) = 0;
};

#endif  