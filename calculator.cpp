#include "calculator.h"
#include "./ui_calculator.h"


// ==== Overloaded constructor ==========================================
// ======================================================================
calculator::calculator(QWidget *parent) : QMainWindow(parent), ui(new Ui::calculator)
{
    // Upon construction:
    ui->setupUi(this);                          // Setup the UI
    QPushButton *numButtons[10];                // Create an array of 10 QPushButton pointers
    QString buttonName;                         // Create a QString type to hold the button name

    ui->Display->setText(QString::number(calcValue));       // Set the display to "0.0"

    // Loop through the array of QPushButton pointers to assign the button names
    for (int i = 0; i < 10; i++)
    {
        buttonName = "Button" + QString::number(i);                         // Create a string with the name of the button

        numButtons[i] = calculator::findChild<QPushButton *>(buttonName);   // Find the button in the UI
        connect(numButtons[i],                                              // Connect the button to the num_pressed() slot
                SIGNAL(released()),                                         // When the button is released
                this,                                                       // Call the calculator class
                SLOT(num_pressed()));                                       // Call the num_pressed() slot
    }
}




// ==== Destructor =======================================================
// =======================================================================
calculator::~calculator()
{
    delete ui;
}




// ==== num_pressed() ====================================================
// =======================================================================
void calculator::num_pressed()
{
    QPushButton *button = (QPushButton *)sender();     // Create a pointer to the button that was pressed
    QString buttonVal = button->text();                // Get the text of the button that was pressed
    QString displayVal = ui->Display->text();          // Get the text of the display
    QString qsNewVal;
    double dbNewVal;

    if ((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)) // If the display is 0 or 0.0
    {
        ui->Display->setText(buttonVal);                // Set the display to the button value
    }
    else
    {
        qsNewVal = displayVal + buttonVal;              // Concatenate the button value to the display value
        dbNewVal = qsNewVal.toDouble();                 // Convert the new value to a double
        ui->Display->setText(QString::number(dbNewVal,  // Set the display to the new value
                                             'g',       // Use scientific notation if needed
                                             16));      // Set the precision to 16
    }
}