#include <tuple>
#include <cstdlib>
#include <cstdio>
#include <sys/time.h>

#include <glm/glm.hpp>
#include <glm/ext.hpp>

class Camera
{
public:
	glm::vec3 eyePosition = glm::vec3{0.0,0.0,0.5};
	glm::vec3 upVector = glm::vec3{0.0,1.0,0.0};
	glm::vec3 centerPosition = glm::vec3{0.0,0.0,0.0};
	glm::mat4 lookAtMatrix = glm::lookAt(eyePosition, centerPosition, upVector);
};

int int main(int argc, char const *argv[])
{
	printf("%f\n",lookAtMatrix[0][1] );
	}