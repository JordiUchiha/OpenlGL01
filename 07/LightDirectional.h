#pragma once

#include <glm/glm.hpp>
#include <glm/gtx/rotate_vector.hpp>

class LightDirectional
{
public:
	LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color);
	~LightDirectional();

	glm::vec3 postion; //ƽ�й�λ�ò���Ҫ
	glm::vec3 direction = glm::vec3(0, 0, 1.0f);
	glm::vec3 angles; //����ת��
	glm::vec3 color=glm::vec3(1.0f,1.0f, 1.0f);;

	void UpdateDirection()
	{
		//glm��ת�������� angles���direction
		direction = glm::vec3(0, 0, 1.0f);
		direction = glm::rotateZ(direction, angles.z);
		direction = glm::rotateX(direction, angles.x);
		direction = glm::rotateY(direction, angles.y);
		direction = -1.0f*direction;
	}
};
