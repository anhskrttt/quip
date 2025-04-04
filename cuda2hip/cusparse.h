#pragma once
#include <hipsparse.h>
#define CUSPARSE_ACTION_NUMERIC HIPSPARSE_ACTION_NUMERIC
#define CUSPARSE_ACTION_SYMBOLIC HIPSPARSE_ACTION_SYMBOLIC
#define CUSPARSE_COOMM_ALG1 HIPSPARSE_COOMM_ALG1
#define CUSPARSE_COOMM_ALG2 HIPSPARSE_COOMM_ALG2
#define CUSPARSE_COOMM_ALG3 HIPSPARSE_COOMM_ALG3
#define CUSPARSE_COOMV_ALG HIPSPARSE_COOMV_ALG
#define CUSPARSE_CSR2CSC_ALG1 HIPSPARSE_CSR2CSC_ALG1
#define CUSPARSE_CSR2CSC_ALG2 HIPSPARSE_CSR2CSC_ALG2
#define CUSPARSE_CSR2CSC_ALG_DEFAULT HIPSPARSE_CSR2CSC_ALG_DEFAULT
#define CUSPARSE_CSRMM_ALG1 HIPSPARSE_CSRMM_ALG1
#define CUSPARSE_CSRMV_ALG1 HIPSPARSE_CSRMV_ALG1
#define CUSPARSE_CSRMV_ALG2 HIPSPARSE_CSRMV_ALG2
#define CUSPARSE_DENSETOSPARSE_ALG_DEFAULT HIPSPARSE_DENSETOSPARSE_ALG_DEFAULT
#define CUSPARSE_DIAG_TYPE_NON_UNIT HIPSPARSE_DIAG_TYPE_NON_UNIT
#define CUSPARSE_DIAG_TYPE_UNIT HIPSPARSE_DIAG_TYPE_UNIT
#define CUSPARSE_DIRECTION_COLUMN HIPSPARSE_DIRECTION_COLUMN
#define CUSPARSE_DIRECTION_ROW HIPSPARSE_DIRECTION_ROW
#define CUSPARSE_FILL_MODE_LOWER HIPSPARSE_FILL_MODE_LOWER
#define CUSPARSE_FILL_MODE_UPPER HIPSPARSE_FILL_MODE_UPPER
#define CUSPARSE_FORMAT_BLOCKED_ELL HIPSPARSE_FORMAT_BLOCKED_ELL
#define CUSPARSE_FORMAT_COO HIPSPARSE_FORMAT_COO
#define CUSPARSE_FORMAT_COO_AOS HIPSPARSE_FORMAT_COO_AOS
#define CUSPARSE_FORMAT_CSC HIPSPARSE_FORMAT_CSC
#define CUSPARSE_FORMAT_CSR HIPSPARSE_FORMAT_CSR
#define CUSPARSE_HYB_PARTITION_AUTO HIPSPARSE_HYB_PARTITION_AUTO
#define CUSPARSE_HYB_PARTITION_MAX HIPSPARSE_HYB_PARTITION_MAX
#define CUSPARSE_HYB_PARTITION_USER HIPSPARSE_HYB_PARTITION_USER
#define CUSPARSE_INDEX_16U HIPSPARSE_INDEX_16U
#define CUSPARSE_INDEX_32I HIPSPARSE_INDEX_32I
#define CUSPARSE_INDEX_64I HIPSPARSE_INDEX_64I
#define CUSPARSE_INDEX_BASE_ONE HIPSPARSE_INDEX_BASE_ONE
#define CUSPARSE_INDEX_BASE_ZERO HIPSPARSE_INDEX_BASE_ZERO
#define CUSPARSE_MATRIX_TYPE_GENERAL HIPSPARSE_MATRIX_TYPE_GENERAL
#define CUSPARSE_MATRIX_TYPE_HERMITIAN HIPSPARSE_MATRIX_TYPE_HERMITIAN
#define CUSPARSE_MATRIX_TYPE_SYMMETRIC HIPSPARSE_MATRIX_TYPE_SYMMETRIC
#define CUSPARSE_MATRIX_TYPE_TRIANGULAR HIPSPARSE_MATRIX_TYPE_TRIANGULAR
#define CUSPARSE_MM_ALG_DEFAULT HIPSPARSE_MM_ALG_DEFAULT
#define CUSPARSE_MV_ALG_DEFAULT HIPSPARSE_MV_ALG_DEFAULT
#define CUSPARSE_OPERATION_CONJUGATE_TRANSPOSE HIPSPARSE_OPERATION_CONJUGATE_TRANSPOSE
#define CUSPARSE_OPERATION_NON_TRANSPOSE HIPSPARSE_OPERATION_NON_TRANSPOSE
#define CUSPARSE_OPERATION_TRANSPOSE HIPSPARSE_OPERATION_TRANSPOSE
#define CUSPARSE_ORDER_COL HIPSPARSE_ORDER_COL
#define CUSPARSE_ORDER_ROW HIPSPARSE_ORDER_ROW
#define CUSPARSE_POINTER_MODE_DEVICE HIPSPARSE_POINTER_MODE_DEVICE
#define CUSPARSE_POINTER_MODE_HOST HIPSPARSE_POINTER_MODE_HOST
#define CUSPARSE_SDDMM_ALG_DEFAULT HIPSPARSE_SDDMM_ALG_DEFAULT
#define CUSPARSE_SOLVE_POLICY_NO_LEVEL HIPSPARSE_SOLVE_POLICY_NO_LEVEL
#define CUSPARSE_SOLVE_POLICY_USE_LEVEL HIPSPARSE_SOLVE_POLICY_USE_LEVEL
#define CUSPARSE_SPARSETODENSE_ALG_DEFAULT HIPSPARSE_SPARSETODENSE_ALG_DEFAULT
#define CUSPARSE_SPGEMM_ALG1 HIPSPARSE_SPGEMM_ALG1
#define CUSPARSE_SPGEMM_ALG2 HIPSPARSE_SPGEMM_ALG2
#define CUSPARSE_SPGEMM_ALG3 HIPSPARSE_SPGEMM_ALG3
#define CUSPARSE_SPGEMM_CSR_ALG_DETERMINITIC HIPSPARSE_SPGEMM_CSR_ALG_DETERMINISTIC
#define CUSPARSE_SPGEMM_CSR_ALG_NONDETERMINITIC HIPSPARSE_SPGEMM_CSR_ALG_NONDETERMINISTIC
#define CUSPARSE_SPGEMM_DEFAULT HIPSPARSE_SPGEMM_DEFAULT
#define CUSPARSE_SPMAT_DIAG_TYPE HIPSPARSE_SPMAT_DIAG_TYPE
#define CUSPARSE_SPMAT_FILL_MODE HIPSPARSE_SPMAT_FILL_MODE
#define CUSPARSE_SPMM_ALG_DEFAULT HIPSPARSE_SPMM_ALG_DEFAULT
#define CUSPARSE_SPMM_BLOCKED_ELL_ALG1 HIPSPARSE_SPMM_BLOCKED_ELL_ALG1
#define CUSPARSE_SPMM_COO_ALG1 HIPSPARSE_SPMM_COO_ALG1
#define CUSPARSE_SPMM_COO_ALG2 HIPSPARSE_SPMM_COO_ALG2
#define CUSPARSE_SPMM_COO_ALG3 HIPSPARSE_SPMM_COO_ALG3
#define CUSPARSE_SPMM_COO_ALG4 HIPSPARSE_SPMM_COO_ALG4
#define CUSPARSE_SPMM_CSR_ALG1 HIPSPARSE_SPMM_CSR_ALG1
#define CUSPARSE_SPMM_CSR_ALG2 HIPSPARSE_SPMM_CSR_ALG2
#define CUSPARSE_SPMM_CSR_ALG3 HIPSPARSE_SPMM_CSR_ALG3
#define CUSPARSE_SPMV_ALG_DEFAULT HIPSPARSE_SPMV_ALG_DEFAULT
#define CUSPARSE_SPMV_COO_ALG1 HIPSPARSE_SPMV_COO_ALG1
#define CUSPARSE_SPMV_COO_ALG2 HIPSPARSE_SPMV_COO_ALG2
#define CUSPARSE_SPMV_CSR_ALG1 HIPSPARSE_SPMV_CSR_ALG1
#define CUSPARSE_SPMV_CSR_ALG2 HIPSPARSE_SPMV_CSR_ALG2
#define CUSPARSE_SPSM_ALG_DEFAULT HIPSPARSE_SPSM_ALG_DEFAULT
#define CUSPARSE_SPSV_ALG_DEFAULT HIPSPARSE_SPSV_ALG_DEFAULT
#define CUSPARSE_STATUS_ALLOC_FAILED HIPSPARSE_STATUS_ALLOC_FAILED
#define CUSPARSE_STATUS_ARCH_MISMATCH HIPSPARSE_STATUS_ARCH_MISMATCH
#define CUSPARSE_STATUS_EXECUTION_FAILED HIPSPARSE_STATUS_EXECUTION_FAILED
#define CUSPARSE_STATUS_INSUFFICIENT_RESOURCES HIPSPARSE_STATUS_INSUFFICIENT_RESOURCES
#define CUSPARSE_STATUS_INTERNAL_ERROR HIPSPARSE_STATUS_INTERNAL_ERROR
#define CUSPARSE_STATUS_INVALID_VALUE HIPSPARSE_STATUS_INVALID_VALUE
#define CUSPARSE_STATUS_MAPPING_ERROR HIPSPARSE_STATUS_MAPPING_ERROR
#define CUSPARSE_STATUS_MATRIX_TYPE_NOT_SUPPORTED HIPSPARSE_STATUS_MATRIX_TYPE_NOT_SUPPORTED
#define CUSPARSE_STATUS_NOT_INITIALIZED HIPSPARSE_STATUS_NOT_INITIALIZED
#define CUSPARSE_STATUS_NOT_SUPPORTED HIPSPARSE_STATUS_NOT_SUPPORTED
#define CUSPARSE_STATUS_SUCCESS HIPSPARSE_STATUS_SUCCESS
#define CUSPARSE_STATUS_ZERO_PIVOT HIPSPARSE_STATUS_ZERO_PIVOT
#define cusparseAction_t hipsparseAction_t
#define cusparseAxpby hipsparseAxpby
#define cusparseBlockedEllGet hipsparseBlockedEllGet
#define cusparseCaxpyi hipsparseCaxpyi
#define cusparseCbsr2csr hipsparseCbsr2csr
#define cusparseCbsric02 hipsparseCbsric02
#define cusparseCbsric02_analysis hipsparseCbsric02_analysis
#define cusparseCbsric02_bufferSize hipsparseCbsric02_bufferSize
#define cusparseCbsrilu02 hipsparseCbsrilu02
#define cusparseCbsrilu02_analysis hipsparseCbsrilu02_analysis
#define cusparseCbsrilu02_bufferSize hipsparseCbsrilu02_bufferSize
#define cusparseCbsrilu02_numericBoost hipsparseCbsrilu02_numericBoost
#define cusparseCbsrmm hipsparseCbsrmm
#define cusparseCbsrmv hipsparseCbsrmv
#define cusparseCbsrsm2_analysis hipsparseCbsrsm2_analysis
#define cusparseCbsrsm2_bufferSize hipsparseCbsrsm2_bufferSize
#define cusparseCbsrsm2_solve hipsparseCbsrsm2_solve
#define cusparseCbsrsv2_analysis hipsparseCbsrsv2_analysis
#define cusparseCbsrsv2_bufferSize hipsparseCbsrsv2_bufferSize
#define cusparseCbsrsv2_bufferSizeExt hipsparseCbsrsv2_bufferSizeExt
#define cusparseCbsrsv2_solve hipsparseCbsrsv2_solve
#define cusparseCbsrxmv hipsparseCbsrxmv
#define cusparseCcsc2dense hipsparseCcsc2dense
#define cusparseCcsr2bsr hipsparseCcsr2bsr
#define cusparseCcsr2csc hipsparseCcsr2csc
#define cusparseCcsr2csr_compress hipsparseCcsr2csr_compress
#define cusparseCcsr2csru hipsparseCcsr2csru
#define cusparseCcsr2dense hipsparseCcsr2dense
#define cusparseCcsr2gebsr hipsparseCcsr2gebsr
#define cusparseCcsr2gebsr_bufferSize hipsparseCcsr2gebsr_bufferSize
#define cusparseCcsr2hyb hipsparseCcsr2hyb
#define cusparseCcsrcolor hipsparseCcsrcolor
#define cusparseCcsrgeam hipsparseCcsrgeam
#define cusparseCcsrgeam2 hipsparseCcsrgeam2
#define cusparseCcsrgeam2_bufferSizeExt hipsparseCcsrgeam2_bufferSizeExt
#define cusparseCcsrgemm hipsparseCcsrgemm
#define cusparseCcsrgemm2 hipsparseCcsrgemm2
#define cusparseCcsrgemm2_bufferSizeExt hipsparseCcsrgemm2_bufferSizeExt
#define cusparseCcsric02 hipsparseCcsric02
#define cusparseCcsric02_analysis hipsparseCcsric02_analysis
#define cusparseCcsric02_bufferSize hipsparseCcsric02_bufferSize
#define cusparseCcsric02_bufferSizeExt hipsparseCcsric02_bufferSizeExt
#define cusparseCcsrilu02 hipsparseCcsrilu02
#define cusparseCcsrilu02_analysis hipsparseCcsrilu02_analysis
#define cusparseCcsrilu02_bufferSize hipsparseCcsrilu02_bufferSize
#define cusparseCcsrilu02_bufferSizeExt hipsparseCcsrilu02_bufferSizeExt
#define cusparseCcsrilu02_numericBoost hipsparseCcsrilu02_numericBoost
#define cusparseCcsrmm hipsparseCcsrmm
#define cusparseCcsrmm2 hipsparseCcsrmm2
#define cusparseCcsrmv hipsparseCcsrmv
#define cusparseCcsrsm2_analysis hipsparseCcsrsm2_analysis
#define cusparseCcsrsm2_bufferSizeExt hipsparseCcsrsm2_bufferSizeExt
#define cusparseCcsrsm2_solve hipsparseCcsrsm2_solve
#define cusparseCcsrsv2_analysis hipsparseCcsrsv2_analysis
#define cusparseCcsrsv2_bufferSize hipsparseCcsrsv2_bufferSize
#define cusparseCcsrsv2_bufferSizeExt hipsparseCcsrsv2_bufferSizeExt
#define cusparseCcsrsv2_solve hipsparseCcsrsv2_solve
#define cusparseCcsru2csr hipsparseCcsru2csr
#define cusparseCcsru2csr_bufferSizeExt hipsparseCcsru2csr_bufferSizeExt
#define cusparseCdense2csc hipsparseCdense2csc
#define cusparseCdense2csr hipsparseCdense2csr
#define cusparseCdotci hipsparseCdotci
#define cusparseCdoti hipsparseCdoti
#define cusparseCgebsr2csr hipsparseCgebsr2csr
#define cusparseCgebsr2gebsc hipsparseCgebsr2gebsc
#define cusparseCgebsr2gebsc_bufferSize hipsparseCgebsr2gebsc_bufferSize
#define cusparseCgebsr2gebsr hipsparseCgebsr2gebsr
#define cusparseCgebsr2gebsr_bufferSize hipsparseCgebsr2gebsr_bufferSize
#define cusparseCgemmi hipsparseCgemmi
#define cusparseCgemvi hipsparseCgemvi
#define cusparseCgemvi_bufferSize hipsparseCgemvi_bufferSize
#define cusparseCgpsvInterleavedBatch hipsparseCgpsvInterleavedBatch
#define cusparseCgpsvInterleavedBatch_bufferSizeExt hipsparseCgpsvInterleavedBatch_bufferSizeExt
#define cusparseCgthr hipsparseCgthr
#define cusparseCgthrz hipsparseCgthrz
#define cusparseCgtsv2 hipsparseCgtsv2
#define cusparseCgtsv2StridedBatch hipsparseCgtsv2StridedBatch
#define cusparseCgtsv2StridedBatch_bufferSizeExt hipsparseCgtsv2StridedBatch_bufferSizeExt
#define cusparseCgtsv2_bufferSizeExt hipsparseCgtsv2_bufferSizeExt
#define cusparseCgtsv2_nopivot hipsparseCgtsv2_nopivot
#define cusparseCgtsv2_nopivot_bufferSizeExt hipsparseCgtsv2_nopivot_bufferSizeExt
#define cusparseCgtsvInterleavedBatch hipsparseCgtsvInterleavedBatch
#define cusparseCgtsvInterleavedBatch_bufferSizeExt hipsparseCgtsvInterleavedBatch_bufferSizeExt
#define cusparseChyb2csr hipsparseChyb2csr
#define cusparseChybmv hipsparseChybmv
#define cusparseCnnz hipsparseCnnz
#define cusparseCnnz_compress hipsparseCnnz_compress
#define cusparseColorInfo_t hipsparseColorInfo_t
#define cusparseConstBlockedEllGet hipsparseConstBlockedEllGet
#define cusparseConstCooGet hipsparseConstCooGet
#define cusparseConstCscGet hipsparseConstCscGet
#define cusparseConstCsrGet hipsparseConstCsrGet
#define cusparseConstDnMatDescr_t hipsparseConstDnMatDescr_t
#define cusparseConstDnMatGet hipsparseConstDnMatGet
#define cusparseConstDnMatGetValues hipsparseConstDnMatGetValues
#define cusparseConstDnVecDescr_t hipsparseConstDnVecDescr_t
#define cusparseConstDnVecGet hipsparseConstDnVecGet
#define cusparseConstDnVecGetValues hipsparseConstDnVecGetValues
#define cusparseConstSpMatDescr_t hipsparseConstSpMatDescr_t
#define cusparseConstSpMatGetValues hipsparseConstSpMatGetValues
#define cusparseConstSpVecDescr_t hipsparseConstSpVecDescr_t
#define cusparseConstSpVecGet hipsparseConstSpVecGet
#define cusparseConstSpVecGetValues hipsparseConstSpVecGetValues
#define cusparseCooAoSGet hipsparseCooAoSGet
#define cusparseCooGet hipsparseCooGet
#define cusparseCooSetPointers hipsparseCooSetPointers
#define cusparseCooSetStridedBatch hipsparseCooSetStridedBatch
#define cusparseCopyMatDescr hipsparseCopyMatDescr
#define cusparseCreate hipsparseCreate
#define cusparseCreateBlockedEll hipsparseCreateBlockedEll
#define cusparseCreateBsric02Info hipsparseCreateBsric02Info
#define cusparseCreateBsrilu02Info hipsparseCreateBsrilu02Info
#define cusparseCreateBsrsm2Info hipsparseCreateBsrsm2Info
#define cusparseCreateBsrsv2Info hipsparseCreateBsrsv2Info
#define cusparseCreateColorInfo hipsparseCreateColorInfo
#define cusparseCreateConstBlockedEll hipsparseCreateConstBlockedEll
#define cusparseCreateConstCoo hipsparseCreateConstCoo
#define cusparseCreateConstCsc hipsparseCreateConstCsc
#define cusparseCreateConstCsr hipsparseCreateConstCsr
#define cusparseCreateConstDnMat hipsparseCreateConstDnMat
#define cusparseCreateConstDnVec hipsparseCreateConstDnVec
#define cusparseCreateConstSpVec hipsparseCreateConstSpVec
#define cusparseCreateCoo hipsparseCreateCoo
#define cusparseCreateCooAoS hipsparseCreateCooAoS
#define cusparseCreateCsc hipsparseCreateCsc
#define cusparseCreateCsr hipsparseCreateCsr
#define cusparseCreateCsrgemm2Info hipsparseCreateCsrgemm2Info
#define cusparseCreateCsric02Info hipsparseCreateCsric02Info
#define cusparseCreateCsrilu02Info hipsparseCreateCsrilu02Info
#define cusparseCreateCsrsm2Info hipsparseCreateCsrsm2Info
#define cusparseCreateCsrsv2Info hipsparseCreateCsrsv2Info
#define cusparseCreateCsru2csrInfo hipsparseCreateCsru2csrInfo
#define cusparseCreateDnMat hipsparseCreateDnMat
#define cusparseCreateDnVec hipsparseCreateDnVec
#define cusparseCreateHybMat hipsparseCreateHybMat
#define cusparseCreateIdentityPermutation hipsparseCreateIdentityPermutation
#define cusparseCreateMatDescr hipsparseCreateMatDescr
#define cusparseCreatePruneInfo hipsparseCreatePruneInfo
#define cusparseCreateSpVec hipsparseCreateSpVec
#define cusparseCscGet hipsparseCscGet
#define cusparseCscSetPointers hipsparseCscSetPointers
#define cusparseCsctr hipsparseCsctr
#define cusparseCsr2CscAlg_t hipsparseCsr2CscAlg_t
#define cusparseCsr2cscEx2 hipsparseCsr2cscEx2
#define cusparseCsr2cscEx2_bufferSize hipsparseCsr2cscEx2_bufferSize
#define cusparseCsrGet hipsparseCsrGet
#define cusparseCsrSetPointers hipsparseCsrSetPointers
#define cusparseCsrSetStridedBatch hipsparseCsrSetStridedBatch
#define cusparseDaxpyi hipsparseDaxpyi
#define cusparseDbsr2csr hipsparseDbsr2csr
#define cusparseDbsric02 hipsparseDbsric02
#define cusparseDbsric02_analysis hipsparseDbsric02_analysis
#define cusparseDbsric02_bufferSize hipsparseDbsric02_bufferSize
#define cusparseDbsrilu02 hipsparseDbsrilu02
#define cusparseDbsrilu02_analysis hipsparseDbsrilu02_analysis
#define cusparseDbsrilu02_bufferSize hipsparseDbsrilu02_bufferSize
#define cusparseDbsrilu02_numericBoost hipsparseDbsrilu02_numericBoost
#define cusparseDbsrmm hipsparseDbsrmm
#define cusparseDbsrmv hipsparseDbsrmv
#define cusparseDbsrsm2_analysis hipsparseDbsrsm2_analysis
#define cusparseDbsrsm2_bufferSize hipsparseDbsrsm2_bufferSize
#define cusparseDbsrsm2_solve hipsparseDbsrsm2_solve
#define cusparseDbsrsv2_analysis hipsparseDbsrsv2_analysis
#define cusparseDbsrsv2_bufferSize hipsparseDbsrsv2_bufferSize
#define cusparseDbsrsv2_bufferSizeExt hipsparseDbsrsv2_bufferSizeExt
#define cusparseDbsrsv2_solve hipsparseDbsrsv2_solve
#define cusparseDbsrxmv hipsparseDbsrxmv
#define cusparseDcsc2dense hipsparseDcsc2dense
#define cusparseDcsr2bsr hipsparseDcsr2bsr
#define cusparseDcsr2csc hipsparseDcsr2csc
#define cusparseDcsr2csr_compress hipsparseDcsr2csr_compress
#define cusparseDcsr2csru hipsparseDcsr2csru
#define cusparseDcsr2dense hipsparseDcsr2dense
#define cusparseDcsr2gebsr hipsparseDcsr2gebsr
#define cusparseDcsr2gebsr_bufferSize hipsparseDcsr2gebsr_bufferSize
#define cusparseDcsr2hyb hipsparseDcsr2hyb
#define cusparseDcsrcolor hipsparseDcsrcolor
#define cusparseDcsrgeam hipsparseDcsrgeam
#define cusparseDcsrgeam2 hipsparseDcsrgeam2
#define cusparseDcsrgeam2_bufferSizeExt hipsparseDcsrgeam2_bufferSizeExt
#define cusparseDcsrgemm hipsparseDcsrgemm
#define cusparseDcsrgemm2 hipsparseDcsrgemm2
#define cusparseDcsrgemm2_bufferSizeExt hipsparseDcsrgemm2_bufferSizeExt
#define cusparseDcsric02 hipsparseDcsric02
#define cusparseDcsric02_analysis hipsparseDcsric02_analysis
#define cusparseDcsric02_bufferSize hipsparseDcsric02_bufferSize
#define cusparseDcsric02_bufferSizeExt hipsparseDcsric02_bufferSizeExt
#define cusparseDcsrilu02 hipsparseDcsrilu02
#define cusparseDcsrilu02_analysis hipsparseDcsrilu02_analysis
#define cusparseDcsrilu02_bufferSize hipsparseDcsrilu02_bufferSize
#define cusparseDcsrilu02_bufferSizeExt hipsparseDcsrilu02_bufferSizeExt
#define cusparseDcsrilu02_numericBoost hipsparseDcsrilu02_numericBoost
#define cusparseDcsrmm hipsparseDcsrmm
#define cusparseDcsrmm2 hipsparseDcsrmm2
#define cusparseDcsrmv hipsparseDcsrmv
#define cusparseDcsrsm2_analysis hipsparseDcsrsm2_analysis
#define cusparseDcsrsm2_bufferSizeExt hipsparseDcsrsm2_bufferSizeExt
#define cusparseDcsrsm2_solve hipsparseDcsrsm2_solve
#define cusparseDcsrsv2_analysis hipsparseDcsrsv2_analysis
#define cusparseDcsrsv2_bufferSize hipsparseDcsrsv2_bufferSize
#define cusparseDcsrsv2_bufferSizeExt hipsparseDcsrsv2_bufferSizeExt
#define cusparseDcsrsv2_solve hipsparseDcsrsv2_solve
#define cusparseDcsru2csr hipsparseDcsru2csr
#define cusparseDcsru2csr_bufferSizeExt hipsparseDcsru2csr_bufferSizeExt
#define cusparseDdense2csc hipsparseDdense2csc
#define cusparseDdense2csr hipsparseDdense2csr
#define cusparseDdoti hipsparseDdoti
#define cusparseDenseToSparseAlg_t hipsparseDenseToSparseAlg_t
#define cusparseDenseToSparse_analysis hipsparseDenseToSparse_analysis
#define cusparseDenseToSparse_bufferSize hipsparseDenseToSparse_bufferSize
#define cusparseDenseToSparse_convert hipsparseDenseToSparse_convert
#define cusparseDestroy hipsparseDestroy
#define cusparseDestroyBsric02Info hipsparseDestroyBsric02Info
#define cusparseDestroyBsrilu02Info hipsparseDestroyBsrilu02Info
#define cusparseDestroyBsrsm2Info hipsparseDestroyBsrsm2Info
#define cusparseDestroyBsrsv2Info hipsparseDestroyBsrsv2Info
#define cusparseDestroyColorInfo hipsparseDestroyColorInfo
#define cusparseDestroyCsrgemm2Info hipsparseDestroyCsrgemm2Info
#define cusparseDestroyCsric02Info hipsparseDestroyCsric02Info
#define cusparseDestroyCsrilu02Info hipsparseDestroyCsrilu02Info
#define cusparseDestroyCsrsm2Info hipsparseDestroyCsrsm2Info
#define cusparseDestroyCsrsv2Info hipsparseDestroyCsrsv2Info
#define cusparseDestroyCsru2csrInfo hipsparseDestroyCsru2csrInfo
#define cusparseDestroyDnMat hipsparseDestroyDnMat
#define cusparseDestroyDnVec hipsparseDestroyDnVec
#define cusparseDestroyHybMat hipsparseDestroyHybMat
#define cusparseDestroyMatDescr hipsparseDestroyMatDescr
#define cusparseDestroyPruneInfo hipsparseDestroyPruneInfo
#define cusparseDestroySpMat hipsparseDestroySpMat
#define cusparseDestroySpVec hipsparseDestroySpVec
#define cusparseDgebsr2csr hipsparseDgebsr2csr
#define cusparseDgebsr2gebsc hipsparseDgebsr2gebsc
#define cusparseDgebsr2gebsc_bufferSize hipsparseDgebsr2gebsc_bufferSize
#define cusparseDgebsr2gebsr hipsparseDgebsr2gebsr
#define cusparseDgebsr2gebsr_bufferSize hipsparseDgebsr2gebsr_bufferSize
#define cusparseDgemmi hipsparseDgemmi
#define cusparseDgemvi hipsparseDgemvi
#define cusparseDgemvi_bufferSize hipsparseDgemvi_bufferSize
#define cusparseDgpsvInterleavedBatch hipsparseDgpsvInterleavedBatch
#define cusparseDgpsvInterleavedBatch_bufferSizeExt hipsparseDgpsvInterleavedBatch_bufferSizeExt
#define cusparseDgthr hipsparseDgthr
#define cusparseDgthrz hipsparseDgthrz
#define cusparseDgtsv2 hipsparseDgtsv2
#define cusparseDgtsv2StridedBatch hipsparseDgtsv2StridedBatch
#define cusparseDgtsv2StridedBatch_bufferSizeExt hipsparseDgtsv2StridedBatch_bufferSizeExt
#define cusparseDgtsv2_bufferSizeExt hipsparseDgtsv2_bufferSizeExt
#define cusparseDgtsv2_nopivot hipsparseDgtsv2_nopivot
#define cusparseDgtsv2_nopivot_bufferSizeExt hipsparseDgtsv2_nopivot_bufferSizeExt
#define cusparseDgtsvInterleavedBatch hipsparseDgtsvInterleavedBatch
#define cusparseDgtsvInterleavedBatch_bufferSizeExt hipsparseDgtsvInterleavedBatch_bufferSizeExt
#define cusparseDhyb2csr hipsparseDhyb2csr
#define cusparseDhybmv hipsparseDhybmv
#define cusparseDiagType_t hipsparseDiagType_t
#define cusparseDirection_t hipsparseDirection_t
#define cusparseDnMatDescr_t hipsparseDnMatDescr_t
#define cusparseDnMatGet hipsparseDnMatGet
#define cusparseDnMatGetStridedBatch hipsparseDnMatGetStridedBatch
#define cusparseDnMatGetValues hipsparseDnMatGetValues
#define cusparseDnMatSetStridedBatch hipsparseDnMatSetStridedBatch
#define cusparseDnMatSetValues hipsparseDnMatSetValues
#define cusparseDnVecDescr_t hipsparseDnVecDescr_t
#define cusparseDnVecGet hipsparseDnVecGet
#define cusparseDnVecGetValues hipsparseDnVecGetValues
#define cusparseDnVecSetValues hipsparseDnVecSetValues
#define cusparseDnnz hipsparseDnnz
#define cusparseDnnz_compress hipsparseDnnz_compress
#define cusparseDpruneCsr2csr hipsparseDpruneCsr2csr
#define cusparseDpruneCsr2csrByPercentage hipsparseDpruneCsr2csrByPercentage
#define cusparseDpruneCsr2csrByPercentage_bufferSizeExt hipsparseDpruneCsr2csrByPercentage_bufferSizeExt
#define cusparseDpruneCsr2csrNnz hipsparseDpruneCsr2csrNnz
#define cusparseDpruneCsr2csrNnzByPercentage hipsparseDpruneCsr2csrNnzByPercentage
#define cusparseDpruneCsr2csr_bufferSizeExt hipsparseDpruneCsr2csr_bufferSizeExt
#define cusparseDpruneDense2csr hipsparseDpruneDense2csr
#define cusparseDpruneDense2csrByPercentage hipsparseDpruneDense2csrByPercentage
#define cusparseDpruneDense2csrByPercentage_bufferSizeExt hipsparseDpruneDense2csrByPercentage_bufferSizeExt
#define cusparseDpruneDense2csrNnz hipsparseDpruneDense2csrNnz
#define cusparseDpruneDense2csrNnzByPercentage hipsparseDpruneDense2csrNnzByPercentage
#define cusparseDpruneDense2csr_bufferSizeExt hipsparseDpruneDense2csr_bufferSizeExt
#define cusparseDroti hipsparseDroti
#define cusparseDsctr hipsparseDsctr
#define cusparseFillMode_t hipsparseFillMode_t
#define cusparseFormat_t hipsparseFormat_t
#define cusparseGather hipsparseGather
#define cusparseGetErrorName hipsparseGetErrorName
#define cusparseGetErrorString hipsparseGetErrorString
#define cusparseGetMatDiagType hipsparseGetMatDiagType
#define cusparseGetMatFillMode hipsparseGetMatFillMode
#define cusparseGetMatIndexBase hipsparseGetMatIndexBase
#define cusparseGetMatType hipsparseGetMatType
#define cusparseGetPointerMode hipsparseGetPointerMode
#define cusparseGetStream hipsparseGetStream
#define cusparseGetVersion hipsparseGetVersion
#define cusparseHandle_t hipsparseHandle_t
#define cusparseHybMat_t hipsparseHybMat_t
#define cusparseHybPartition_t hipsparseHybPartition_t
#define cusparseIndexBase_t hipsparseIndexBase_t
#define cusparseIndexType_t hipsparseIndexType_t
#define cusparseMatDescr_t hipsparseMatDescr_t
#define cusparseMatrixType_t hipsparseMatrixType_t
#define cusparseOperation_t hipsparseOperation_t
#define cusparseOrder_t hipsparseOrder_t
#define cusparsePointerMode_t hipsparsePointerMode_t
#define cusparseRot hipsparseRot
#define cusparseSDDMM hipsparseSDDMM
#define cusparseSDDMMAlg_t hipsparseSDDMMAlg_t
#define cusparseSDDMM_bufferSize hipsparseSDDMM_bufferSize
#define cusparseSDDMM_preprocess hipsparseSDDMM_preprocess
#define cusparseSaxpyi hipsparseSaxpyi
#define cusparseSbsr2csr hipsparseSbsr2csr
#define cusparseSbsric02 hipsparseSbsric02
#define cusparseSbsric02_analysis hipsparseSbsric02_analysis
#define cusparseSbsric02_bufferSize hipsparseSbsric02_bufferSize
#define cusparseSbsrilu02 hipsparseSbsrilu02
#define cusparseSbsrilu02_analysis hipsparseSbsrilu02_analysis
#define cusparseSbsrilu02_bufferSize hipsparseSbsrilu02_bufferSize
#define cusparseSbsrilu02_numericBoost hipsparseSbsrilu02_numericBoost
#define cusparseSbsrmm hipsparseSbsrmm
#define cusparseSbsrmv hipsparseSbsrmv
#define cusparseSbsrsm2_analysis hipsparseSbsrsm2_analysis
#define cusparseSbsrsm2_bufferSize hipsparseSbsrsm2_bufferSize
#define cusparseSbsrsm2_solve hipsparseSbsrsm2_solve
#define cusparseSbsrsv2_analysis hipsparseSbsrsv2_analysis
#define cusparseSbsrsv2_bufferSize hipsparseSbsrsv2_bufferSize
#define cusparseSbsrsv2_bufferSizeExt hipsparseSbsrsv2_bufferSizeExt
#define cusparseSbsrsv2_solve hipsparseSbsrsv2_solve
#define cusparseSbsrxmv hipsparseSbsrxmv
#define cusparseScatter hipsparseScatter
#define cusparseScsc2dense hipsparseScsc2dense
#define cusparseScsr2bsr hipsparseScsr2bsr
#define cusparseScsr2csc hipsparseScsr2csc
#define cusparseScsr2csr_compress hipsparseScsr2csr_compress
#define cusparseScsr2csru hipsparseScsr2csru
#define cusparseScsr2dense hipsparseScsr2dense
#define cusparseScsr2gebsr hipsparseScsr2gebsr
#define cusparseScsr2gebsr_bufferSize hipsparseScsr2gebsr_bufferSize
#define cusparseScsr2hyb hipsparseScsr2hyb
#define cusparseScsrcolor hipsparseScsrcolor
#define cusparseScsrgeam hipsparseScsrgeam
#define cusparseScsrgeam2 hipsparseScsrgeam2
#define cusparseScsrgeam2_bufferSizeExt hipsparseScsrgeam2_bufferSizeExt
#define cusparseScsrgemm hipsparseScsrgemm
#define cusparseScsrgemm2 hipsparseScsrgemm2
#define cusparseScsrgemm2_bufferSizeExt hipsparseScsrgemm2_bufferSizeExt
#define cusparseScsric02 hipsparseScsric02
#define cusparseScsric02_analysis hipsparseScsric02_analysis
#define cusparseScsric02_bufferSize hipsparseScsric02_bufferSize
#define cusparseScsric02_bufferSizeExt hipsparseScsric02_bufferSizeExt
#define cusparseScsrilu02 hipsparseScsrilu02
#define cusparseScsrilu02_analysis hipsparseScsrilu02_analysis
#define cusparseScsrilu02_bufferSize hipsparseScsrilu02_bufferSize
#define cusparseScsrilu02_bufferSizeExt hipsparseScsrilu02_bufferSizeExt
#define cusparseScsrilu02_numericBoost hipsparseScsrilu02_numericBoost
#define cusparseScsrmm hipsparseScsrmm
#define cusparseScsrmm2 hipsparseScsrmm2
#define cusparseScsrmv hipsparseScsrmv
#define cusparseScsrsm2_analysis hipsparseScsrsm2_analysis
#define cusparseScsrsm2_bufferSizeExt hipsparseScsrsm2_bufferSizeExt
#define cusparseScsrsm2_solve hipsparseScsrsm2_solve
#define cusparseScsrsv2_analysis hipsparseScsrsv2_analysis
#define cusparseScsrsv2_bufferSize hipsparseScsrsv2_bufferSize
#define cusparseScsrsv2_bufferSizeExt hipsparseScsrsv2_bufferSizeExt
#define cusparseScsrsv2_solve hipsparseScsrsv2_solve
#define cusparseScsru2csr hipsparseScsru2csr
#define cusparseScsru2csr_bufferSizeExt hipsparseScsru2csr_bufferSizeExt
#define cusparseSdense2csc hipsparseSdense2csc
#define cusparseSdense2csr hipsparseSdense2csr
#define cusparseSdoti hipsparseSdoti
#define cusparseSetMatDiagType hipsparseSetMatDiagType
#define cusparseSetMatFillMode hipsparseSetMatFillMode
#define cusparseSetMatIndexBase hipsparseSetMatIndexBase
#define cusparseSetMatType hipsparseSetMatType
#define cusparseSetPointerMode hipsparseSetPointerMode
#define cusparseSetStream hipsparseSetStream
#define cusparseSgebsr2csr hipsparseSgebsr2csr
#define cusparseSgebsr2gebsc hipsparseSgebsr2gebsc
#define cusparseSgebsr2gebsc_bufferSize hipsparseSgebsr2gebsc_bufferSize
#define cusparseSgebsr2gebsr hipsparseSgebsr2gebsr
#define cusparseSgebsr2gebsr_bufferSize hipsparseSgebsr2gebsr_bufferSize
#define cusparseSgemmi hipsparseSgemmi
#define cusparseSgemvi hipsparseSgemvi
#define cusparseSgemvi_bufferSize hipsparseSgemvi_bufferSize
#define cusparseSgpsvInterleavedBatch hipsparseSgpsvInterleavedBatch
#define cusparseSgpsvInterleavedBatch_bufferSizeExt hipsparseSgpsvInterleavedBatch_bufferSizeExt
#define cusparseSgthr hipsparseSgthr
#define cusparseSgthrz hipsparseSgthrz
#define cusparseSgtsv2 hipsparseSgtsv2
#define cusparseSgtsv2StridedBatch hipsparseSgtsv2StridedBatch
#define cusparseSgtsv2StridedBatch_bufferSizeExt hipsparseSgtsv2StridedBatch_bufferSizeExt
#define cusparseSgtsv2_bufferSizeExt hipsparseSgtsv2_bufferSizeExt
#define cusparseSgtsv2_nopivot hipsparseSgtsv2_nopivot
#define cusparseSgtsv2_nopivot_bufferSizeExt hipsparseSgtsv2_nopivot_bufferSizeExt
#define cusparseSgtsvInterleavedBatch hipsparseSgtsvInterleavedBatch
#define cusparseSgtsvInterleavedBatch_bufferSizeExt hipsparseSgtsvInterleavedBatch_bufferSizeExt
#define cusparseShyb2csr hipsparseShyb2csr
#define cusparseShybmv hipsparseShybmv
#define cusparseSnnz hipsparseSnnz
#define cusparseSnnz_compress hipsparseSnnz_compress
#define cusparseSolvePolicy_t hipsparseSolvePolicy_t
#define cusparseSpGEMMAlg_t hipsparseSpGEMMAlg_t
#define cusparseSpGEMMDescr hipsparseSpGEMMDescr
#define cusparseSpGEMMDescr_t hipsparseSpGEMMDescr_t
#define cusparseSpGEMM_compute hipsparseSpGEMM_compute
#define cusparseSpGEMM_copy hipsparseSpGEMM_copy
#define cusparseSpGEMM_createDescr hipsparseSpGEMM_createDescr
#define cusparseSpGEMM_destroyDescr hipsparseSpGEMM_destroyDescr
#define cusparseSpGEMM_workEstimation hipsparseSpGEMM_workEstimation
#define cusparseSpGEMMreuse_compute hipsparseSpGEMMreuse_compute
#define cusparseSpGEMMreuse_copy hipsparseSpGEMMreuse_copy
#define cusparseSpGEMMreuse_nnz hipsparseSpGEMMreuse_nnz
#define cusparseSpGEMMreuse_workEstimation hipsparseSpGEMMreuse_workEstimation
#define cusparseSpMM hipsparseSpMM
#define cusparseSpMMAlg_t hipsparseSpMMAlg_t
#define cusparseSpMM_bufferSize hipsparseSpMM_bufferSize
#define cusparseSpMM_preprocess hipsparseSpMM_preprocess
#define cusparseSpMV hipsparseSpMV
#define cusparseSpMVAlg_t hipsparseSpMVAlg_t
#define cusparseSpMV_bufferSize hipsparseSpMV_bufferSize
#define cusparseSpMV_preprocess hipsparseSpMV_preprocess
#define cusparseSpMatAttribute_t hipsparseSpMatAttribute_t
#define cusparseSpMatDescr_t hipsparseSpMatDescr_t
#define cusparseSpMatGetAttribute hipsparseSpMatGetAttribute
#define cusparseSpMatGetFormat hipsparseSpMatGetFormat
#define cusparseSpMatGetIndexBase hipsparseSpMatGetIndexBase
#define cusparseSpMatGetSize hipsparseSpMatGetSize
#define cusparseSpMatGetStridedBatch hipsparseSpMatGetStridedBatch
#define cusparseSpMatGetValues hipsparseSpMatGetValues
#define cusparseSpMatSetAttribute hipsparseSpMatSetAttribute
#define cusparseSpMatSetStridedBatch hipsparseSpMatSetStridedBatch
#define cusparseSpMatSetValues hipsparseSpMatSetValues
#define cusparseSpSMAlg_t hipsparseSpSMAlg_t
#define cusparseSpSMDescr hipsparseSpSMDescr
#define cusparseSpSMDescr_t hipsparseSpSMDescr_t
#define cusparseSpSM_analysis hipsparseSpSM_analysis
#define cusparseSpSM_bufferSize hipsparseSpSM_bufferSize
#define cusparseSpSM_createDescr hipsparseSpSM_createDescr
#define cusparseSpSM_destroyDescr hipsparseSpSM_destroyDescr
#define cusparseSpSM_solve hipsparseSpSM_solve
#define cusparseSpSVAlg_t hipsparseSpSVAlg_t
#define cusparseSpSVDescr hipsparseSpSVDescr
#define cusparseSpSVDescr_t hipsparseSpSVDescr_t
#define cusparseSpSV_analysis hipsparseSpSV_analysis
#define cusparseSpSV_bufferSize hipsparseSpSV_bufferSize
#define cusparseSpSV_createDescr hipsparseSpSV_createDescr
#define cusparseSpSV_destroyDescr hipsparseSpSV_destroyDescr
#define cusparseSpSV_solve hipsparseSpSV_solve
#define cusparseSpVV hipsparseSpVV
#define cusparseSpVV_bufferSize hipsparseSpVV_bufferSize
#define cusparseSpVecDescr_t hipsparseSpVecDescr_t
#define cusparseSpVecGet hipsparseSpVecGet
#define cusparseSpVecGetIndexBase hipsparseSpVecGetIndexBase
#define cusparseSpVecGetValues hipsparseSpVecGetValues
#define cusparseSpVecSetValues hipsparseSpVecSetValues
#define cusparseSparseToDense hipsparseSparseToDense
#define cusparseSparseToDenseAlg_t hipsparseSparseToDenseAlg_t
#define cusparseSparseToDense_bufferSize hipsparseSparseToDense_bufferSize
#define cusparseSpruneCsr2csr hipsparseSpruneCsr2csr
#define cusparseSpruneCsr2csrByPercentage hipsparseSpruneCsr2csrByPercentage
#define cusparseSpruneCsr2csrByPercentage_bufferSizeExt hipsparseSpruneCsr2csrByPercentage_bufferSizeExt
#define cusparseSpruneCsr2csrNnz hipsparseSpruneCsr2csrNnz
#define cusparseSpruneCsr2csrNnzByPercentage hipsparseSpruneCsr2csrNnzByPercentage
#define cusparseSpruneCsr2csr_bufferSizeExt hipsparseSpruneCsr2csr_bufferSizeExt
#define cusparseSpruneDense2csr hipsparseSpruneDense2csr
#define cusparseSpruneDense2csrByPercentage hipsparseSpruneDense2csrByPercentage
#define cusparseSpruneDense2csrByPercentage_bufferSizeExt hipsparseSpruneDense2csrByPercentage_bufferSizeExt
#define cusparseSpruneDense2csrNnz hipsparseSpruneDense2csrNnz
#define cusparseSpruneDense2csrNnzByPercentage hipsparseSpruneDense2csrNnzByPercentage
#define cusparseSpruneDense2csr_bufferSizeExt hipsparseSpruneDense2csr_bufferSizeExt
#define cusparseSroti hipsparseSroti
#define cusparseSsctr hipsparseSsctr
#define cusparseStatus_t hipsparseStatus_t
#define cusparseXbsric02_zeroPivot hipsparseXbsric02_zeroPivot
#define cusparseXbsrilu02_zeroPivot hipsparseXbsrilu02_zeroPivot
#define cusparseXbsrsm2_zeroPivot hipsparseXbsrsm2_zeroPivot
#define cusparseXbsrsv2_zeroPivot hipsparseXbsrsv2_zeroPivot
#define cusparseXcoo2csr hipsparseXcoo2csr
#define cusparseXcoosortByColumn hipsparseXcoosortByColumn
#define cusparseXcoosortByRow hipsparseXcoosortByRow
#define cusparseXcoosort_bufferSizeExt hipsparseXcoosort_bufferSizeExt
#define cusparseXcscsort hipsparseXcscsort
#define cusparseXcscsort_bufferSizeExt hipsparseXcscsort_bufferSizeExt
#define cusparseXcsr2bsrNnz hipsparseXcsr2bsrNnz
#define cusparseXcsr2coo hipsparseXcsr2coo
#define cusparseXcsr2gebsrNnz hipsparseXcsr2gebsrNnz
#define cusparseXcsrgeam2Nnz hipsparseXcsrgeam2Nnz
#define cusparseXcsrgeamNnz hipsparseXcsrgeamNnz
#define cusparseXcsrgemm2Nnz hipsparseXcsrgemm2Nnz
#define cusparseXcsrgemmNnz hipsparseXcsrgemmNnz
#define cusparseXcsric02_zeroPivot hipsparseXcsric02_zeroPivot
#define cusparseXcsrilu02_zeroPivot hipsparseXcsrilu02_zeroPivot
#define cusparseXcsrsm2_zeroPivot hipsparseXcsrsm2_zeroPivot
#define cusparseXcsrsort hipsparseXcsrsort
#define cusparseXcsrsort_bufferSizeExt hipsparseXcsrsort_bufferSizeExt
#define cusparseXcsrsv2_zeroPivot hipsparseXcsrsv2_zeroPivot
#define cusparseXgebsr2gebsrNnz hipsparseXgebsr2gebsrNnz
#define cusparseZaxpyi hipsparseZaxpyi
#define cusparseZbsr2csr hipsparseZbsr2csr
#define cusparseZbsric02 hipsparseZbsric02
#define cusparseZbsric02_analysis hipsparseZbsric02_analysis
#define cusparseZbsric02_bufferSize hipsparseZbsric02_bufferSize
#define cusparseZbsrilu02 hipsparseZbsrilu02
#define cusparseZbsrilu02_analysis hipsparseZbsrilu02_analysis
#define cusparseZbsrilu02_bufferSize hipsparseZbsrilu02_bufferSize
#define cusparseZbsrilu02_numericBoost hipsparseZbsrilu02_numericBoost
#define cusparseZbsrmm hipsparseZbsrmm
#define cusparseZbsrmv hipsparseZbsrmv
#define cusparseZbsrsm2_analysis hipsparseZbsrsm2_analysis
#define cusparseZbsrsm2_bufferSize hipsparseZbsrsm2_bufferSize
#define cusparseZbsrsm2_solve hipsparseZbsrsm2_solve
#define cusparseZbsrsv2_analysis hipsparseZbsrsv2_analysis
#define cusparseZbsrsv2_bufferSize hipsparseZbsrsv2_bufferSize
#define cusparseZbsrsv2_bufferSizeExt hipsparseZbsrsv2_bufferSizeExt
#define cusparseZbsrsv2_solve hipsparseZbsrsv2_solve
#define cusparseZbsrxmv hipsparseZbsrxmv
#define cusparseZcsc2dense hipsparseZcsc2dense
#define cusparseZcsr2bsr hipsparseZcsr2bsr
#define cusparseZcsr2csc hipsparseZcsr2csc
#define cusparseZcsr2csr_compress hipsparseZcsr2csr_compress
#define cusparseZcsr2csru hipsparseZcsr2csru
#define cusparseZcsr2dense hipsparseZcsr2dense
#define cusparseZcsr2gebsr hipsparseZcsr2gebsr
#define cusparseZcsr2gebsr_bufferSize hipsparseZcsr2gebsr_bufferSize
#define cusparseZcsr2hyb hipsparseZcsr2hyb
#define cusparseZcsrcolor hipsparseZcsrcolor
#define cusparseZcsrgeam hipsparseZcsrgeam
#define cusparseZcsrgeam2 hipsparseZcsrgeam2
#define cusparseZcsrgeam2_bufferSizeExt hipsparseZcsrgeam2_bufferSizeExt
#define cusparseZcsrgemm hipsparseZcsrgemm
#define cusparseZcsrgemm2 hipsparseZcsrgemm2
#define cusparseZcsrgemm2_bufferSizeExt hipsparseZcsrgemm2_bufferSizeExt
#define cusparseZcsric02 hipsparseZcsric02
#define cusparseZcsric02_analysis hipsparseZcsric02_analysis
#define cusparseZcsric02_bufferSize hipsparseZcsric02_bufferSize
#define cusparseZcsric02_bufferSizeExt hipsparseZcsric02_bufferSizeExt
#define cusparseZcsrilu02 hipsparseZcsrilu02
#define cusparseZcsrilu02_analysis hipsparseZcsrilu02_analysis
#define cusparseZcsrilu02_bufferSize hipsparseZcsrilu02_bufferSize
#define cusparseZcsrilu02_bufferSizeExt hipsparseZcsrilu02_bufferSizeExt
#define cusparseZcsrilu02_numericBoost hipsparseZcsrilu02_numericBoost
#define cusparseZcsrmm hipsparseZcsrmm
#define cusparseZcsrmm2 hipsparseZcsrmm2
#define cusparseZcsrmv hipsparseZcsrmv
#define cusparseZcsrsm2_analysis hipsparseZcsrsm2_analysis
#define cusparseZcsrsm2_bufferSizeExt hipsparseZcsrsm2_bufferSizeExt
#define cusparseZcsrsm2_solve hipsparseZcsrsm2_solve
#define cusparseZcsrsv2_analysis hipsparseZcsrsv2_analysis
#define cusparseZcsrsv2_bufferSize hipsparseZcsrsv2_bufferSize
#define cusparseZcsrsv2_bufferSizeExt hipsparseZcsrsv2_bufferSizeExt
#define cusparseZcsrsv2_solve hipsparseZcsrsv2_solve
#define cusparseZcsru2csr hipsparseZcsru2csr
#define cusparseZcsru2csr_bufferSizeExt hipsparseZcsru2csr_bufferSizeExt
#define cusparseZdense2csc hipsparseZdense2csc
#define cusparseZdense2csr hipsparseZdense2csr
#define cusparseZdotci hipsparseZdotci
#define cusparseZdoti hipsparseZdoti
#define cusparseZgebsr2csr hipsparseZgebsr2csr
#define cusparseZgebsr2gebsc hipsparseZgebsr2gebsc
#define cusparseZgebsr2gebsc_bufferSize hipsparseZgebsr2gebsc_bufferSize
#define cusparseZgebsr2gebsr hipsparseZgebsr2gebsr
#define cusparseZgebsr2gebsr_bufferSize hipsparseZgebsr2gebsr_bufferSize
#define cusparseZgemmi hipsparseZgemmi
#define cusparseZgemvi hipsparseZgemvi
#define cusparseZgemvi_bufferSize hipsparseZgemvi_bufferSize
#define cusparseZgpsvInterleavedBatch hipsparseZgpsvInterleavedBatch
#define cusparseZgpsvInterleavedBatch_bufferSizeExt hipsparseZgpsvInterleavedBatch_bufferSizeExt
#define cusparseZgthr hipsparseZgthr
#define cusparseZgthrz hipsparseZgthrz
#define cusparseZgtsv2 hipsparseZgtsv2
#define cusparseZgtsv2StridedBatch hipsparseZgtsv2StridedBatch
#define cusparseZgtsv2StridedBatch_bufferSizeExt hipsparseZgtsv2StridedBatch_bufferSizeExt
#define cusparseZgtsv2_bufferSizeExt hipsparseZgtsv2_bufferSizeExt
#define cusparseZgtsv2_nopivot hipsparseZgtsv2_nopivot
#define cusparseZgtsv2_nopivot_bufferSizeExt hipsparseZgtsv2_nopivot_bufferSizeExt
#define cusparseZgtsvInterleavedBatch hipsparseZgtsvInterleavedBatch
#define cusparseZgtsvInterleavedBatch_bufferSizeExt hipsparseZgtsvInterleavedBatch_bufferSizeExt
#define cusparseZhyb2csr hipsparseZhyb2csr
#define cusparseZhybmv hipsparseZhybmv
#define cusparseZnnz hipsparseZnnz
#define cusparseZnnz_compress hipsparseZnnz_compress
#define cusparseZsctr hipsparseZsctr
