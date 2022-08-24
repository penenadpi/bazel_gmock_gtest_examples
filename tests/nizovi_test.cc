#include "gtest/gtest.h"

extern "C" {
#include "src/lib/nizovi.h"
}

TEST(NizoviTest, sum) {
  int niz[]={1, 8, 3};
  int sum=0;
  sum=nadji_sum(niz, 3);
  ASSERT_TRUE(sum==12);
}


