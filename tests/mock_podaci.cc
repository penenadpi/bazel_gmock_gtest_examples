#include "src/lib//mock_obrada.h"
#include "src/lib/podaci.h"
#include "src/lib/obrada.h"
#include "gtest/gtest.h"


TEST(ProcesirajTest, Procesiraj) {
  MockObrada obrada1;
  int niz[10] = {1, -2, -3, 4, 5, 6, 7, 8, 9, 10};
  EXPECT_CALL(obrada1, Procesiraj)
    .Times(8);
  Podaci podaci(niz, &obrada1);
  EXPECT_TRUE(podaci.primeni_obradu());
}

int main(int argc, char** argv) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}