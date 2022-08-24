#include "gtest/gtest.h"

extern "C" {
#include "src/lib/nizovi.h"
}

TEST(NizoviTest, sumaniza) {
  int niz[]={1, 8, 3};
  int vrednostsume = 0;
  vrednostsume=suma(niz,3);
  ASSERT_TRUE(vrednostsume == 12);
}