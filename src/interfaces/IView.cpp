#include "../../include/interfaces/IView.h"

IView::IView(IEntityContainer* e) {
	this->entities = e;
}
IView::~IView() {};

