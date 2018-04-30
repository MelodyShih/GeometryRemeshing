#ifndef VERTEX_TO_TRIANGLE_H
#define VERTEX_TO_TRIANGLE_H

#include <Eigen/Core>

Eigen::MatrixXi vertex_to_triangle
	(
		const Eigen::MatrixXd& P
	);

Eigen::MatrixXi locate_newvertex_to_old_mesh
    (
        const Eigen::MatrixXd& P,
        const Eigen::MatrixXi& F,
        const Eigen::MatrixXd& V_uv
    );

Eigen::MatrixXd project_back_to_3d
    (
        const Eigen::MatrixXd& P,
        const Eigen::MatrixXi& F,
        const Eigen::MatrixXd& V_uv,
        const Eigen::MatrixXd& V, 
        const Eigen::MatrixXi& Face_index
    );
#endif
