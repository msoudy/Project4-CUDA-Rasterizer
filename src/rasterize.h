/**
 * @file      rasterize.h
 * @brief     CUDA-accelerated rasterization pipeline.
 * @authors   Skeleton code: Yining Karl Li, Kai Ninomiya, Shuai Shao (Shrek)
 * @date      2012-2016
 * @copyright University of Pennsylvania & STUDENT
 */

#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

#define TEXTURE 0
#define BILINEAR_INTERPOLATION 0
#define PERSPECTIVE_CORRECT 0
#define RASTERIZE_TYPE 0
#define TIMER 0

namespace tinygltf{
	class Scene;
}


void rasterizeInit(int width, int height);
void rasterizeSetBuffers(const tinygltf::Scene & scene);

void rasterize(uchar4 *pbo, const glm::mat4 & MVP, const glm::mat4 & MV, const glm::mat3 MV_normal);
void rasterizeFree();
