#ifndef INTERFACE_VIEW_H
#define INTERFACE_VIEW_H

#include "IEntityContainer.h"

class IView {
public:
	IView(IEntityContainer*);
	~IView();

	virtual bool stopWorld() = 0;
	virtual void render() = 0;
protected:
	IEntityContainer* entities;
};


#endif