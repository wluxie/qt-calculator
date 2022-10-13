#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>


// ======================================================================
// Forward declaration of the Ui::Calculator
// ======================================================================
QT_BEGIN_NAMESPACE
namespace Ui 
{ 
    class calculator; 
}
QT_END_NAMESPACE
// ======================================================================



// ======================================================================
// Class Calculator
// ======================================================================
class calculator : public QMainWindow
{
    Q_OBJECT

    private:
        Ui::calculator *ui;

    public:
        calculator(QWidget *parent = nullptr);
        ~calculator();

    private slots:
        void num_pressed();
        void math_button_pressed();
        void equal_button_pressed();
};
// ======================================================================


#endif // CALCULATOR_H
