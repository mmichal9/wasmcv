// Generated by `wit-bindgen` 0.31.0. DO NOT EDIT!
#ifndef __BINDINGS_CV_H
#define __BINDINGS_CV_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct wasm_cv_types_size_t {
  int32_t   x;
  int32_t   y;
} wasm_cv_types_size_t;

typedef uint8_t wasm_cv_types_border_type_t;

#define WASM_CV_TYPES_BORDER_TYPE_BORDER_CONSTANT 0
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_REPLICATE 1
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_REFLECT 2
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_WRAP 3
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_REFLECT101 4
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_TRANSPARENT 5
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_DEFAULT 6
#define WASM_CV_TYPES_BORDER_TYPE_BORDER_ISOLATED 7

typedef uint8_t wasm_cv_types_adaptive_threshold_type_t;

#define WASM_CV_TYPES_ADAPTIVE_THRESHOLD_TYPE_ADAPTIVE_THRESHOLD_MEAN 0
#define WASM_CV_TYPES_ADAPTIVE_THRESHOLD_TYPE_ADAPTIVE_THRESHOLD_GAUSSIAN 1

typedef uint8_t wasm_cv_types_threshold_type_t;

#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_BINARY 0
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_BINARY_INV 1
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_TRUNC 2
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_TO_ZERO 3
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_TO_ZERO_INV 4
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_MASK 5
#define WASM_CV_TYPES_THRESHOLD_TYPE_THRESHOLD_OTSU 6
#define WASM_CV_TYPES_THRESHOLD_TYPE_TTHRESHOLD_TRIANGLE 7

typedef uint8_t wasm_cv_mat_mattype_t;

#define WASM_CV_MAT_MATTYPE_CV8U 0
#define WASM_CV_MAT_MATTYPE_CV8S 1
#define WASM_CV_MAT_MATTYPE_CV16U 2
#define WASM_CV_MAT_MATTYPE_CV16S 3
#define WASM_CV_MAT_MATTYPE_CV32S 4
#define WASM_CV_MAT_MATTYPE_CV32F 5
#define WASM_CV_MAT_MATTYPE_CV64F 6

typedef struct wasm_cv_mat_own_mat_t {
  int32_t __handle;
} wasm_cv_mat_own_mat_t;

typedef struct wasm_cv_mat_borrow_mat_t {
  int32_t __handle;
} wasm_cv_mat_borrow_mat_t;

typedef wasm_cv_types_border_type_t cv_border_type_t;

typedef wasm_cv_types_size_t cv_size_t;

typedef wasm_cv_types_adaptive_threshold_type_t cv_adaptive_threshold_type_t;

typedef wasm_cv_types_threshold_type_t cv_threshold_type_t;

typedef wasm_cv_mat_own_mat_t cv_own_mat_t;

typedef wasm_cv_mat_own_mat_t exports_wasm_cv_request_own_mat_t;

// Imported Functions from `wasm:cv/mat`
extern wasm_cv_mat_own_mat_t wasm_cv_mat_constructor_mat(uint32_t cols, uint32_t rows, wasm_cv_mat_mattype_t type);
extern void wasm_cv_mat_method_mat_close(wasm_cv_mat_borrow_mat_t self);
extern uint32_t wasm_cv_mat_method_mat_cols(wasm_cv_mat_borrow_mat_t self);
extern uint32_t wasm_cv_mat_method_mat_rows(wasm_cv_mat_borrow_mat_t self);
extern wasm_cv_mat_mattype_t wasm_cv_mat_method_mat_type(wasm_cv_mat_borrow_mat_t self);
extern uint32_t wasm_cv_mat_method_mat_size(wasm_cv_mat_borrow_mat_t self);

// Imported Functions from `cv`
// AdaptiveThreshold applies a fixed-level threshold to each array element.
// For further details, please see:
// https://docs.opencv.org/master/d7/d1b/group__imgproc__misc.html#ga72b913f352e4a1b1b397736707afcde3
extern cv_own_mat_t cv_adaptive_threshold(cv_own_mat_t src, float max_value, cv_adaptive_threshold_type_t adaptive_type, cv_threshold_type_t threshold_type, uint32_t block_size, float c);
// Blur blurs an image Mat using a normalized box filter.
// For further details, please see:
// https://docs.opencv.org/master/d4/d86/group__imgproc__filter.html#ga8c45db9afe636703801b0b2e440fce37
extern cv_own_mat_t cv_blur(cv_own_mat_t src, cv_size_t *k_size);
// BoxFilter blurs an image using the box filter.
// For further details, please see:
// https://docs.opencv.org/master/d4/d86/group__imgproc__filter.html#gad533230ebf2d42509547d514f7d3fbc3
extern cv_own_mat_t cv_box_filter(cv_own_mat_t src, uint32_t depth, cv_size_t *k_size);
// GaussianBlur blurs an image using a Gaussian filter.
// For further details, please see:
// https://docs.opencv.org/4.x/d4/d86/group__imgproc__filter.html#gae8bdcd9154ed5ca3cbc1766d960f45c1
extern cv_own_mat_t cv_gaussian_blur(cv_own_mat_t src, cv_size_t *size, float sigma_x, float sigma_y, cv_border_type_t border);
// Threshold applies a fixed-level threshold to each array element.
// For further details, please see:
// https://docs.opencv.org/3.3.0/d7/d1b/group__imgproc__misc.html#gae8a4a146d1ca78c626a53577199e9c57
extern cv_own_mat_t cv_threshold(cv_own_mat_t src, float thresh, float max_value, cv_threshold_type_t threshold_type);

// Exported Functions from `wasm:cv/request`
exports_wasm_cv_request_own_mat_t exports_wasm_cv_request_process(exports_wasm_cv_request_own_mat_t image);

// Helper Functions

extern void wasm_cv_mat_mat_drop_own(wasm_cv_mat_own_mat_t handle);

extern wasm_cv_mat_borrow_mat_t wasm_cv_mat_borrow_mat(wasm_cv_mat_own_mat_t handle);


#ifdef __cplusplus
}
#endif
#endif
