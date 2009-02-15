/*!
	@file
	@author		Albert Semenov
	@date		10/2008
	@module
*//*
	This file is part of MyGUI.
	
	MyGUI is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	
	MyGUI is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with MyGUI.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __MYGUI_DDCONTAINER_FACTORY_H__
#define __MYGUI_DDCONTAINER_FACTORY_H__

#include "MyGUI_Prerequest.h"
#include "MyGUI_IWidgetFactory.h"
#include "MyGUI_DDContainer.h"

namespace MyGUI
{
	namespace factory
	{

		class MYGUI_EXPORT DDContainerFactory : public BaseWidgetFactory<DDContainer>
		{
		public:
			DDContainerFactory();
			~DDContainerFactory();

		private:
			// методы для парсинга
			void DDContainer_NeedDragDrop(WidgetPtr _widget, const std::string &_key, const std::string &_value);

		};

	} // namespace factory
} // namespace MyGUI

#endif // __MYGUI_DDCONTAINER_FACTORY_H__
