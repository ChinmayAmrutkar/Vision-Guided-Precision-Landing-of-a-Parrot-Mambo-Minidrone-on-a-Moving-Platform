#ifndef __c1_flightControlSystem_h__
#define __c1_flightControlSystem_h__

/* Forward Declarations */
#ifndef c1_typedef_c1_cell_1
#define c1_typedef_c1_cell_1

typedef struct c1_tag_lfyg79q6Kpk0jaJgYJuk8C c1_cell_1;

#endif                                 /* c1_typedef_c1_cell_1 */

#ifndef c1_typedef_c1_cell_wrap_2
#define c1_typedef_c1_cell_wrap_2

typedef struct c1_tag_uwJsGEKtvfiUxcdf0z0AYH c1_cell_wrap_2;

#endif                                 /* c1_typedef_c1_cell_wrap_2 */

#ifndef c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF
#define c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF

typedef struct c1_tag_WSTEAPgNJmllMDXoFTifcF c1_s_WSTEAPgNJmllMDXoFTifcF;

#endif                                 /* c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF */

#ifndef c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD
#define c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD

typedef struct c1_tag_MY3jsqmREaTzOC09vCGedD c1_s_MY3jsqmREaTzOC09vCGedD;

#endif                                 /* c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD */

/* Type Definitions */
#ifndef c1_struct_c1_tag_lfyg79q6Kpk0jaJgYJuk8C
#define c1_struct_c1_tag_lfyg79q6Kpk0jaJgYJuk8C

struct c1_tag_lfyg79q6Kpk0jaJgYJuk8C
{
  char_T f1[5];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
};

#endif                                 /* c1_struct_c1_tag_lfyg79q6Kpk0jaJgYJuk8C */

#ifndef c1_typedef_c1_cell_1
#define c1_typedef_c1_cell_1

typedef struct c1_tag_lfyg79q6Kpk0jaJgYJuk8C c1_cell_1;

#endif                                 /* c1_typedef_c1_cell_1 */

#ifndef c1_struct_c1_tag_uwJsGEKtvfiUxcdf0z0AYH
#define c1_struct_c1_tag_uwJsGEKtvfiUxcdf0z0AYH

struct c1_tag_uwJsGEKtvfiUxcdf0z0AYH
{
  char_T f1[4];
};

#endif                                 /* c1_struct_c1_tag_uwJsGEKtvfiUxcdf0z0AYH */

#ifndef c1_typedef_c1_cell_wrap_2
#define c1_typedef_c1_cell_wrap_2

typedef struct c1_tag_uwJsGEKtvfiUxcdf0z0AYH c1_cell_wrap_2;

#endif                                 /* c1_typedef_c1_cell_wrap_2 */

#ifndef c1_struct_c1_tag_WSTEAPgNJmllMDXoFTifcF
#define c1_struct_c1_tag_WSTEAPgNJmllMDXoFTifcF

struct c1_tag_WSTEAPgNJmllMDXoFTifcF
{
  c1_cell_1 _data;
};

#endif                                 /* c1_struct_c1_tag_WSTEAPgNJmllMDXoFTifcF */

#ifndef c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF
#define c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF

typedef struct c1_tag_WSTEAPgNJmllMDXoFTifcF c1_s_WSTEAPgNJmllMDXoFTifcF;

#endif                                 /* c1_typedef_c1_s_WSTEAPgNJmllMDXoFTifcF */

#ifndef c1_struct_c1_tag_MY3jsqmREaTzOC09vCGedD
#define c1_struct_c1_tag_MY3jsqmREaTzOC09vCGedD

struct c1_tag_MY3jsqmREaTzOC09vCGedD
{
  c1_cell_wrap_2 _data;
};

#endif                                 /* c1_struct_c1_tag_MY3jsqmREaTzOC09vCGedD */

#ifndef c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD
#define c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD

typedef struct c1_tag_MY3jsqmREaTzOC09vCGedD c1_s_MY3jsqmREaTzOC09vCGedD;

#endif                                 /* c1_typedef_c1_s_MY3jsqmREaTzOC09vCGedD */

#ifndef typedef_SFc1_flightControlSystemInstanceStruct
#define typedef_SFc1_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_JITStateAnimation[1];
  uint8_T c1_JITTransitionAnimation[1];
  real_T c1_I[57600];
  void *c1_fEmlrtCtx;
  uint8_T (*c1_R)[19200];
  boolean_T (*c1_BW)[19200];
  uint8_T (*c1_G)[19200];
  uint8_T (*c1_B)[19200];
} SFc1_flightControlSystemInstanceStruct;

#endif                                 /* typedef_SFc1_flightControlSystemInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c1_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
