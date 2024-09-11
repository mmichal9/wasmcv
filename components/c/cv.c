// Generated by `wit-bindgen` 0.31.0. DO NOT EDIT!
#include "cv.h"
#include <stdlib.h>

// Imported Functions from `wasm:cv/mat`

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[constructor]mat")))
extern int32_t __wasm_import_wasm_cv_mat_constructor_mat(int32_t, int32_t, int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.close")))
extern void __wasm_import_wasm_cv_mat_method_mat_close(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.cols")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_cols(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.rows")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_rows(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.type")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_type(int32_t);

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[method]mat.size")))
extern int32_t __wasm_import_wasm_cv_mat_method_mat_size(int32_t);

// Imported Functions from `cv`

__attribute__((__import_module__("$root"), __import_name__("adaptive-threshold")))
extern int32_t __wasm_import_cv_adaptive_threshold(int32_t, float, int32_t, int32_t, int32_t, float);

__attribute__((__import_module__("$root"), __import_name__("blur")))
extern int32_t __wasm_import_cv_blur(int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("box-filter")))
extern int32_t __wasm_import_cv_box_filter(int32_t, int32_t, int32_t, int32_t);

__attribute__((__import_module__("$root"), __import_name__("gaussian-blur")))
extern int32_t __wasm_import_cv_gaussian_blur(int32_t, int32_t, int32_t, float, float, int32_t);

__attribute__((__import_module__("$root"), __import_name__("threshold")))
extern int32_t __wasm_import_cv_threshold(int32_t, float, float, int32_t);

// Exported Functions from `wasm:cv/request`


// Canonical ABI intrinsics

__attribute__((__weak__, __export_name__("cabi_realloc")))
void *cabi_realloc(void *ptr, size_t old_size, size_t align, size_t new_size) {
  (void) old_size;
  if (new_size == 0) return (void*) align;
  void *ret = realloc(ptr, new_size);
  if (!ret) abort();
  return ret;
}

// Helper Functions

__attribute__((__import_module__("wasm:cv/mat"), __import_name__("[resource-drop]mat")))
extern void __wasm_import_wasm_cv_mat_mat_drop(int32_t handle);

void wasm_cv_mat_mat_drop_own(wasm_cv_mat_own_mat_t handle) {
  __wasm_import_wasm_cv_mat_mat_drop(handle.__handle);
}

wasm_cv_mat_borrow_mat_t wasm_cv_mat_borrow_mat(wasm_cv_mat_own_mat_t arg) {
  return (wasm_cv_mat_borrow_mat_t) { arg.__handle };
}

// Component Adapters

wasm_cv_mat_own_mat_t wasm_cv_mat_constructor_mat(uint32_t cols, uint32_t rows, wasm_cv_mat_mattype_t type) {
  int32_t ret = __wasm_import_wasm_cv_mat_constructor_mat((int32_t) (cols), (int32_t) (rows), (int32_t) type);
  return (wasm_cv_mat_own_mat_t) { ret };
}

void wasm_cv_mat_method_mat_close(wasm_cv_mat_borrow_mat_t self) {
  __wasm_import_wasm_cv_mat_method_mat_close((self).__handle);
}

uint32_t wasm_cv_mat_method_mat_cols(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_cols((self).__handle);
  return (uint32_t) (ret);
}

uint32_t wasm_cv_mat_method_mat_rows(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_rows((self).__handle);
  return (uint32_t) (ret);
}

wasm_cv_mat_mattype_t wasm_cv_mat_method_mat_type(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_type((self).__handle);
  return ret;
}

uint32_t wasm_cv_mat_method_mat_size(wasm_cv_mat_borrow_mat_t self) {
  int32_t ret = __wasm_import_wasm_cv_mat_method_mat_size((self).__handle);
  return (uint32_t) (ret);
}

cv_own_mat_t cv_adaptive_threshold(cv_own_mat_t src, float max_value, cv_adaptive_threshold_type_t adaptive_type, cv_threshold_type_t threshold_type, uint32_t block_size, float c) {
  int32_t ret = __wasm_import_cv_adaptive_threshold((src).__handle, max_value, (int32_t) adaptive_type, (int32_t) threshold_type, (int32_t) (block_size), c);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_blur(cv_own_mat_t src, cv_size_t *k_size) {
  int32_t ret = __wasm_import_cv_blur((src).__handle, (*k_size).x, (*k_size).y);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_box_filter(cv_own_mat_t src, uint32_t depth, cv_size_t *k_size) {
  int32_t ret = __wasm_import_cv_box_filter((src).__handle, (int32_t) (depth), (*k_size).x, (*k_size).y);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_gaussian_blur(cv_own_mat_t src, cv_size_t *size, float sigma_x, float sigma_y, cv_border_type_t border) {
  int32_t ret = __wasm_import_cv_gaussian_blur((src).__handle, (*size).x, (*size).y, sigma_x, sigma_y, (int32_t) border);
  return (cv_own_mat_t) { ret };
}

cv_own_mat_t cv_threshold(cv_own_mat_t src, float thresh, float max_value, cv_threshold_type_t threshold_type) {
  int32_t ret = __wasm_import_cv_threshold((src).__handle, thresh, max_value, (int32_t) threshold_type);
  return (cv_own_mat_t) { ret };
}

__attribute__((__export_name__("wasm:cv/request#process")))
int32_t __wasm_export_exports_wasm_cv_request_process(int32_t arg) {
  exports_wasm_cv_request_own_mat_t ret = exports_wasm_cv_request_process((exports_wasm_cv_request_own_mat_t) { arg });
  return (ret).__handle;
}

// Ensure that the *_component_type.o object is linked in

extern void __component_type_object_force_link_cv(void);
void __component_type_object_force_link_cv_public_use_in_this_compilation_unit(void) {
  __component_type_object_force_link_cv();
}
