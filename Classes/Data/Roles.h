#ifndef ROLES_H_
#define ROLES_H_

#include "tinyxml2/tinyxml2.h"
#include "cocos2d.h"

using namespace tinyxml2;
USING_NS_CC;

enum RoleType
{
	Type_Boss,
	Type_soldier,
	Type_General_Vertical,  //���ŵ��佫
	Type_General_horizontal, //��ֱ���佫


};


struct Role
{
	int height = 0;
	int width = 0;  
	RoleType type;
	int id = 0;
	__String imageName;

};


class Roles
{
public:


	static Roles* getInstance();


	Role getRoleById(int id);

	bool init();

	std::vector<Role> roles;


private:
	RoleType getTypeByString(const char *type);
	~Roles();

};

#endif