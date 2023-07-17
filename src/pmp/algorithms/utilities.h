// Copyright 2022 the Polygon Mesh Processing Library developers.
// Distributed under a MIT-style license, see LICENSE.txt for details.

#pragma once

#include "pmp/bounding_box.h"
#include "pmp/surface_mesh.h"

namespace pmp {

//! Compute the bounding box of \p mesh .
//! \ingroup algorithms
BoundingBox bounds(const SurfaceMesh& mesh);

//! Flip the orientation of all faces in \p mesh .
//! \ingroup algorithms
void flip_faces(SurfaceMesh& mesh);

//! Compute the minimum area of all faces in \p mesh .
//! \ingroup algorithms
Scalar min_face_area(const SurfaceMesh& mesh);

//! Compute length of an edge \p e in \p mesh .
//! \ingroup algorithms
inline Scalar edge_length(const SurfaceMesh& mesh, Edge e)
{
    return distance(mesh.position(mesh.vertex(e, 0)),
                    mesh.position(mesh.vertex(e, 1)));
}

} // namespace pmp