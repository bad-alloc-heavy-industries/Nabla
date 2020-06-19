#ifndef MAIN_WINDOW__HXX
#define MAIN_WINDOW__HXX

#include <QtWidgets/QMainWindow>
#include <ui_nabla.h>

struct Nabla final : public QMainWindow
{
private:
	Q_OBJECT
	Ui_Nabla ui{};

public:
	Nabla();
	~Nabla() noexcept = default;
};

#endif /*MAIN_WINDOW__HXX*/
