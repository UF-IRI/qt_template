#include <QtTest>

// add necessary includes here

class proyecto : public QObject
{
    Q_OBJECT

public:
    proyecto();
    ~proyecto();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

proyecto::proyecto()
{

}

proyecto::~proyecto()
{

}

void proyecto::initTestCase()
{

}

void proyecto::cleanupTestCase()
{

}

void proyecto::test_case1()
{

}

QTEST_APPLESS_MAIN(proyecto)

#include "tst_proyecto.moc"
