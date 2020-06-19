#include <QtWidgets/QApplication>
#include "mainWindow.hxx"

int main(int argCount, char **argList)
{
	QApplication app{argCount, argList};
	Nabla nabla;
	nabla.show();
	return app.exec();
}
