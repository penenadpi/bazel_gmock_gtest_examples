#include "src/lib//mock_obrada.h"
#include "src/lib/podaci.h"
#include "src/lib/obrada.h"
#include "gtest/gtest.h"

using ::testing::AtLeast;
using ::testing::InSequence;
using ::testing::AtMost;


TEST(PodaciTest, ProcesiramoPodatke) { 
 MockObrada obrada;
  int niz[] = {-1, -2, 3, 4, 5, 6, 7, 8, 9, 10};

  // EXPECT_CALL(vision, FindObstacle)
  //     .Times(3);
  EXPECT_CALL(obrada, Procesiraj)
    .Times(AtMost(8)); 


  Podaci objekat_podaci(niz, &obrada);

  EXPECT_TRUE(objekat_podaci.primeni_obradu());
}

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}