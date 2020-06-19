#ifndef MAIN_WINDOW__HXX
#define MAIN_WINDOW__HXX

#include <QtWidgets/QMainWindow>
#include <ui_nabla.h>

struct Nabla final : public QMainWindow
{
private:
	Ui_Nabla ui{};

public:
	Nabla();
	~Nabla() noexcept = default;
};

#endif /*MAIN_WINDOW__HXX*/
