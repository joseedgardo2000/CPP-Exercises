#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGroupBox>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget mainWin;
    QFormLayout form;
    QLineEdit firstName;
    QLineEdit lastName;
    QLineEdit age;
    QPushButton btn1("Ok", &mainWin);
    QPushButton btn2("Cancel", &mainWin);
    QHBoxLayout hLayout;
    QVBoxLayout vLayout;
    QGroupBox formBox(QGroupBox::tr("Personal Data", "hola"),&mainWin);

    form.addRow("First Name: ", &firstName);
    form.addRow("Last Name: ", &lastName);
    form.addRow("Age: ", &age);
    formBox.setLayout(&form);

    hLayout.addWidget(&btn1);
    hLayout.addWidget(&btn2);


    vLayout.addWidget(&formBox);
    vLayout.addLayout(&hLayout);

    mainWin.setLayout(&vLayout);
    mainWin.show();
    return app.exec();
}
