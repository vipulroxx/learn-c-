#include <cppunit/include/cppunit/CompiterOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>

int main(int argc, char * argv[])
{
    CPPUNIT_NS::TestResult testresult;
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener(&collectedresults);
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener(&progress);
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.run(testresult);
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cer);
    compileroutputter.write();
    return collectedresults.wasSuccessful() ? 0 : 1;
}