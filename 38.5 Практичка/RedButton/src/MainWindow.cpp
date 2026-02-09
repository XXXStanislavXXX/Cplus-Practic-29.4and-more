#include "MainWindow.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QApplication>
#include <windows.h>
#include <mmsystem.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), label(nullptr), button(nullptr) {
    setupUI();
    connectSignals();
}

void MainWindow::setupUI() {
    // Set window parameters
    setWindowTitle("Red Button Interface");
    resize(300, 200);

    // Create central widget and layout
    QWidget *centralWidget = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Create label
    label = new QLabel("Click the red button!");
    label->setStyleSheet("font-size: 14px;");
    layout->addWidget(label);

    // Create red button
    button = new QPushButton("Click me!");
    button->setStyleSheet("background-color: red; color: white; font-size: 16px; padding: 10px; border: none; border-radius: 5px;");
    button->setCursor(Qt::PointingHandCursor);
    layout->addWidget(button);

    // Set central widget
    setCentralWidget(centralWidget);
}

void MainWindow::connectSignals() {
    if (button) {
        connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    }
}

void MainWindow::onButtonClicked() {
    if (label) {
        // Get the path to the executable file
        QString exePath = QApplication::applicationDirPath();
        QString soundFile = exePath + "/click.wav";

        // Play sound
        PlaySound((LPCWSTR)soundFile.utf16(), NULL, SND_FILENAME | SND_ASYNC);
        label->setText("Button clicked!");
    }
}

