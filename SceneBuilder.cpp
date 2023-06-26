/*
 * This class allows complete encapsulation of the program
 *
 * The user need only add a shape via the pattern shown in the
 * examples below, modifying properties (p) and the texture;
 * the ShapeBuilder class will handle the vertex calculations
 * and mesh construction
 *
 */





#include "SceneBuilder.h"
#include "ShapeBuilder.h"
#include "Mesh.h"



using namespace std;

void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{

	// seed the rand() function once
	srand(time(nullptr));

	// stairs cubes
	GLMesh cube_gMesh01;
	cube_gMesh01.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.0f,	0.0f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh01.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh01);
	scene.push_back(cube_gMesh01);

	GLMesh cube_gMesh02;
	cube_gMesh02.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.2f,	0.2f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh02.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh02);
	scene.push_back(cube_gMesh02);

	GLMesh cube_gMesh03;
	cube_gMesh03.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.4f,	0.4f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh03.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh03);
	scene.push_back(cube_gMesh03);

	GLMesh cube_gMesh04;
	cube_gMesh04.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.6f,	0.6f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh04.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh04);
	scene.push_back(cube_gMesh04);

	GLMesh cube_gMesh05;
	cube_gMesh05.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		2.8f,	0.8f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh05.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh05);
	scene.push_back(cube_gMesh05);

	GLMesh cube_gMesh06;
	cube_gMesh06.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.0f,	1.0f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh06.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh06);
	scene.push_back(cube_gMesh06);

	GLMesh cube_gMesh07;
	cube_gMesh07.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	0.2f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.2f,	1.2f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh07.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh07);
	scene.push_back(cube_gMesh07);

	GLMesh cube_gMesh08;
	cube_gMesh08.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	1.4f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.4f,	0.0f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh08.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh08);
	scene.push_back(cube_gMesh08);

	GLMesh cube_gMesh09;
	cube_gMesh09.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	1.6f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.6f,	0.0f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh09.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh09);
	scene.push_back(cube_gMesh09);

	GLMesh cube_gMesh10;
	cube_gMesh10.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		2.0f,	1.8f,	1.4f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.8f,	0.0f,	-2.0f,
		1.0f,	1.0f
	};
	cube_gMesh10.texFilename = "stairs.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh10);
	scene.push_back(cube_gMesh10);

	//PLANE - setting the scene
	GLMesh plane_mesh;
	plane_mesh.p = {
		0.9f,	0.5f,	0.6f,	0.8f,
		10.0f,	10.0f,	10.0f,
		0.0f,	90.0f,	0.0f,	0.0f,
		0.0f,	90.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	plane_mesh.texFilename = "plane.jpg";
	ShapeBuilder::UBuildPlane(plane_mesh);
	scene.push_back(plane_mesh);

	//Misc objects
	GLMesh cyl_gMesh01;
	cyl_gMesh01.p = {
		0.1f, 0.9f, 0.45f, 0.8f,
		1.0f, 1.0f, 1.0f,
		90.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		1.9f, 0.5f, -5.1f,
		1.0f, 1.0f
	};
	cyl_gMesh01.height = 0.1f;	cyl_gMesh01.radius = 0.5f;	cyl_gMesh01.number_of_sides = 16.0f; cyl_gMesh01.length = 0.5f;
	cyl_gMesh01.texFilename = "greencyl.jpg";
	ShapeBuilder::UBuildCylinder(cyl_gMesh01);
	scene.push_back(cyl_gMesh01);

	GLMesh cyl_gMesh02;
	cyl_gMesh02.p = {
		0.8f, 0.1f, 0.95f, 0.8f,
		1.0f, 1.0f, 1.0f,
		90.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		3.2f, 1.0f, -5.1f,
		1.0f, 1.0f
	};
	cyl_gMesh02.height = 0.1f;	cyl_gMesh02.radius = 0.5f;	cyl_gMesh02.number_of_sides = 16.0f; cyl_gMesh02.length = 1.0f;
	cyl_gMesh02.texFilename = "pinkcyl.jpg";
	ShapeBuilder::UBuildCylinder(cyl_gMesh02);
	scene.push_back(cyl_gMesh02);

	GLMesh cube_gMesh11;
	cube_gMesh11.p = {
		0.9f,	0.4f,	0.4f,	0.7f,
		1.0f,	1.0f,	1.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		3.8f,	0.0f,	-3.55f,
		1.0f,	1.0f
	};
	cube_gMesh11.texFilename = "cube.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh11);
	scene.push_back(cube_gMesh11);

	GLMesh cube_gMesh12;
	cube_gMesh12.p = {
		0.1f,	0.2f,	0.9f,	0.8f,
		1.5f,	3.0f,	3.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		6.0f,	0.0f,	-3.60f,
		0.0f,	0.0f
	};
	cube_gMesh12.texFilename = "blueplane.jpg";
	ShapeBuilder::UBuildCube(cube_gMesh12);
	scene.push_back(cube_gMesh12);

	GLMesh circle_mesh_01;
	circle_mesh_01.p = {
		0.1f, 0.9f, 0.45f, 0.8f,
		2.0f,	2.0f,	2.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		0.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		5.0f,	2.0f,	-4.0f,
		1.0f,	1.0f
	};
	circle_mesh_01.radius = 0.5f;
	circle_mesh_01.number_of_sides = 144.0f;
	circle_mesh_01.texFilename = "greencyl.jpg";
	ShapeBuilder::UBuildCircle(circle_mesh_01);
	scene.push_back(circle_mesh_01);

	GLMesh circle_mesh_02;
	circle_mesh_02.p = {
		0.8f, 0.1f, 0.95f, 0.8f,
		1.0f,	1.0f,	1.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		0.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		5.0f,	0.2f,	-4.36f,
		1.0f,	1.0f
	};
	circle_mesh_02.radius = 0.5f;
	circle_mesh_02.number_of_sides = 144.0f;
	circle_mesh_02.texFilename = "plane.jpg";
	ShapeBuilder::UBuildCircle(circle_mesh_02);
	scene.push_back(circle_mesh_02);

	GLMesh circle_mesh_03;
	circle_mesh_03.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		1.0f,	1.0f,	1.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		0.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		1.9f,	0.0f,	-3.05f,
		1.0f,	1.0f
	};
	circle_mesh_03.radius = 0.5f;
	circle_mesh_03.number_of_sides = 144.0f;
	circle_mesh_03.texFilename = "sphere.jpg";
	ShapeBuilder::UBuildCircle(circle_mesh_03);
	scene.push_back(circle_mesh_03);
}