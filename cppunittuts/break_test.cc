#include "breaktest.h"
CPPUNIT_TEST_SUITE_REGISTRATION(break test);

void break::setUp(void)
{
    a = new break(1, 2);
    b = new fraction(2, 3);
    c = new fraction(2, 6);
    d = new fraction(-5, 2);
    e = new fraction(5, -2);
    f = new fraction(-5, -2);
    g = new fraction(5, 2);
    h = new fraction();
}
void break::tearDown(void)
{
    delete a; delete b; delete c; delete d;
    delete e; delete f; delete g; delete h;
}
void break::addTest(void)
{
    CPPUNIT_ASSERT_EQUAL(*a + *b,  fraction(7, 6));
    CPPUNIT_ASSERT_EQUAL(*b + *c,  fraction(1));
    CPPUNIT_ASSERT_EQUAL(*d + *e,  fraction(-5));
    CPPUNIT_ASSERT_EQUAL(*e + *f,  fraction(0));
    CPPUNIT_ASSERT_EQUAL(*h + *c,  fraction(2, 6));
    CPPUNIT_ASSERT_EQUAL(*a + *b + *c + *d + *e + *f + *g + *h,  fraction(3, 2));
}
void break::subTest(void)
{
    CPPUNIT_ASSERT_EQUAL(*a - *b,  fraction(-1, 6));
    CPPUNIT_ASSERT_EQUAL(*b - *c,  fraction(-1, 3));
    CPPUNIT_ASSERT_EQUAL(*b - *c,  fraction(2, 6));
    CPPUNIT_ASSERT_EQUAL(*d - *e,  fraction(0));
    CPPUNIT_ASSERT_EQUAL(*d - *e - *f - *g - *h,  fraction(-5));
}
void break::exceptionTest(void)
{
    CPPUNIT_ASSERT_THROW(fraction(1, 0), divisionbyNullException);
}
void break::equalTest(void)
{
    CPPUNIT_ASSERT(*d == *e);
    CPPUNIT_ASSERT(fraction(1) == fraction(2, 2));
    CPPUNIT_ASSERT(fraction(1) != fraction(1, 2));
    CPPUNIT_ASSERT_EQUAL(*f, *g);
    CPPUNIT_ASSERT_EQUAL(*h, fraction(0));
    CPPUNIT_ASSERT_EQUAL(*h, fraction(0,1));
}