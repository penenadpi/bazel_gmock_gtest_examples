#pragma once

#include "obrada.h"
#include "gmock/gmock.h"  // Brings in Google Mock

class MockObrada : public Obrada {
 public:
  MOCK_METHOD1(Procesiraj, void(int value));
};