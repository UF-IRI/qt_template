#include <QtTest>

// add necessary includes here

class testing : public QObject
{
    Q_OBJECT

public:
    testing();
    ~testing();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

testing::testing()
{

}

testing::~testing()
{

}

void testing::initTestCase()
{

}

void testing::cleanupTestCase()
{

}

void testing::test_case1()
{

}

QTEST_APPLESS_MAIN(testing)
