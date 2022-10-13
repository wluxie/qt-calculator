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
        buttonName = "button" + QString::number(i);                         // Create a string with the name of the button

        numButtons[i] = calculator::findChild<QPushButton *>(buttonName);   // Find the button in the UI
        connect(numButtons[i],                                              // Connect the button to the num_pressed() slot
                SIGNAL(released()),                                         // When the button is released
                this,                                                       // Call the calculator class
                SLOT(num_pressed()));                                       // Call the num_pressed() slot
    }

    // Connect the math buttons to the math_button_pressed() slot & the equal button to the equal_button_pressed() slot
    connect(ui->buttonAdd, SIGNAL(released()), this, SLOT(math_button_pressed()));
    connect(ui->buttonSub, SIGNAL(released()), this, SLOT(math_button_pressed()));
    connect(ui->buttonMul, SIGNAL(released()), this, SLOT(math_button_pressed()));
    connect(ui->buttonDiv, SIGNAL(released()), this, SLOT(math_button_pressed()));
    connect(ui->buttonEqual, SIGNAL(released()), this, SLOT(equal_button_pressed()));
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
    QPushButton *button = (QPushButton *)sender();
    QString buttonVal = button->text();
    QString displayVal = ui->Display->text();

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




// ==== math_button_pressed() ============================================
// =======================================================================
void calculator::math_button_pressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString buttonVal = button->text();
    QString displayVal = ui->Display->text();

    calcValue = displayVal.toDouble();                  // Convert the display value to a double
    
    mathOperator = buttonVal[0].toLatin1();             // Convert the button value to a char
    switch (mathOperator)                               // Switch on the first character of the button value
    {
        case '/':                                       // If the button value is "/"
            mathOperator = '/';                         // Set the math operator to "/"
            break;
        case '*':                                       // If the button value is "*"
            mathOperator = '*';                         // Set the math operator to "*"
            break;
        case '+':                                       // If the button value is "+"
            mathOperator = '+';                         // Set the math operator to "+"
            break;
        case '-':                                       // If the button value is "-"
            mathOperator = '-';                         // Set the math operator to "-"
            break;
    }

    ui->Display->setText("");                           // Clear the display
}




// ==== equal_button_pressed() ===========================================
// =======================================================================
void calculator::equal_button_pressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString buttonVal = button->text();
    QString displayVal = ui->Display->text();
    
    double solution = 0.0;                              // Create a double to hold the solution
    double dbDisplayVal = displayVal.toDouble();        // Convert the display value to a double

    switch (mathOperator)                               // Switch on the math operator
    {
        case '/':                                       // If the math operator is "/"
            solution = calcValue / dbDisplayVal;        // Divide the calc value by the display value
            break;
        case '*':                                       // If the math operator is "*"
            solution = calcValue * dbDisplayVal;        // Multiply the calc value by the display value
            break;
        case '+':                                       // If the math operator is "+"
            solution = calcValue + dbDisplayVal;        // Add the calc value to the display value
            break;
        case '-':                                       // If the math operator is "-"
            solution = calcValue - dbDisplayVal;        // Subtract the display value from the calc value
            break;
    }

    ui->Display->setText(QString::number(solution));    // Set the display to the solution   
}
