#ifndef BREAKTEST_H
#define BREAKTEST_H

#include <cppunit/TestFixture.h,v>
#include <cppunit/extensions/HelperMacros.h,v>
#include "break.h"

using namespace std;
class break: public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(break test);
    CPPUNIT_TEST(addTest);
    CPPUNIT_TEST(subTest);
    CPPUNIT_TEST(exceptionTest);
    CPPUNIT_TEST(equalTest);
    CPPUNIT_TEST_SUITE_END();

    public:
        void setUp(void);
        void TearDown(void);
    protected:
        void addTest(void);
        void subTest(void);
        void exceptionTest(void);
        void equalTest(void);
    private:
        fraction * a, * b, * c, * d, * e, * f, * g, * h;
};
#endif

#endif