//
// Created by zhong on 10/12/2021.
//

#ifndef ECE408_CU_UTILS_H
#define ECE408_CU_UTILS_H
#define wbCheck(stmt) do {                                 \
        cudaError_t err = stmt;                            \
        if (err != cudaSuccess) {                          \
            wbLog(ERROR, "Failed to run stmt ", #stmt);    \
            return -1;                                     \
        }                                                  \
    } while(0)
#endif//ECE408_CU_UTILS_H
