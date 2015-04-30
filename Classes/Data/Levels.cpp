#include "Levels.h"


static Levels* s_levels = nullptr;
static std::string LevelsFileName = "Levels.xml";

Levels::~Levels()
{
	if (s_levels != nullptr)
	{
		delete s_levels;
	}
	s_levels = nullptr;

}

Levels* Levels::getInstance()
{
	if (s_levels == nullptr)
	{
		s_levels == new Levels();
		s_levels->init();
	}

	return s_levels;
}

bool Levels::init()
{
	std::string filePath = FileUtils::getInstance()->fullPathForFilename(LevelsFileName);

	tinyxml2::XMLDocument pDoc;

	FileUtils::getInstance()->setPopupNotify(false);
	ssize_t fileSize = 0;
	std::string data = FileUtils::getInstance()->getStringFromFile(filePath.c_str());
	FileUtils::getInstance()->setPopupNotify(true);
	pDoc.Parse(data.c_str());
	XMLElement * pEle = pDoc.RootElement();
	auto child = pEle->FirstChildElement();



}