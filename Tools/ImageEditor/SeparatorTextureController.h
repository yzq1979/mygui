/*!
	@file
	@author		Albert Semenov
	@date		07/2012
*/

#ifndef _581b514e_0bf3_4414_af1a_9c91ab524119_
#define _581b514e_0bf3_4414_af1a_9c91ab524119_

#include "IControlController.h"
#include "ScopeTextureControl.h"

namespace tools
{

	class SeparatorTextureController :
		public IControlController,
		public sigslot::has_slots<>
	{
	public:
		SeparatorTextureController();
		virtual ~SeparatorTextureController();

		virtual void setTarget(Control* _control);

		virtual void activate();
		virtual void deactivate();

	private:
		void notifyChangeDataSelector(Data* _data, bool _changeOnlySelection);
		void notifyChangeProperty(Property* _sender);
		void notifyChangeScope(const std::string& _scope);
		void notifyChangeValue(const std::string& _value);

		void updateCoords(const std::string& _value);
		void updateFrames();

	private:
		ScopeTextureControl* mControl;
		std::string mParentTypeName;
		std::string mScopeName;
		std::string mThisType;
		Data* mParentData;
		bool mActivated;
		MyGUI::IntCoord mTextureCoord;
		typedef std::vector<MyGUI::IntCoord> VectorCoord;
		VectorCoord mFrames;
	};

}

#endif
