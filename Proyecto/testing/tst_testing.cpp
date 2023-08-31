#include <QtTest>

// add necessary includes here

class proyecto : public QObject {
    Q_OBJECT

public:
    proyecto();
    ~proyecto();

private slots:
    void DummyTest();
};

proyecto::proyecto() {

}

proyecto::~proyecto() {

}

proyecto::DummyTest() {

}

QTEST_APPLESS_MAIN(proyecto)

#include "tst_proyecto.moc"
