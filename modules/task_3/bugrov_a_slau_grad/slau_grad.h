// Copyright 2022 Bugrov Andrey
#ifndef MODULES_TASK_3_BUGROV_A_SLAU_GRAD_SLAU_GRAD_H_
#define MODULES_TASK_3_BUGROV_A_SLAU_GRAD_SLAU_GRAD_H_

#include <vector>

#define Vector std::vector<double>
Vector getRandom(int sz);
Vector MatrVecMult(const Vector& matrix, const Vector& vec);
//void ParMatrVecMult(double* matrix, double* vec, double* result, int n);
//Vector VecSum(const Vector& first, const Vector& second);
//Vector VecDif(const Vector& first, const Vector& second);
double ScalMult(const Vector& first, const Vector& second);
Vector getSeqSlauGrad(const Vector& A, const Vector& b, int n);
Vector getParSlauGrad(const Vector& A, const Vector& b, int n);

#endif  // MODULES_TASK_3_BUGROV_A_SLAU_GRAD_SLAU_GRAD_H_