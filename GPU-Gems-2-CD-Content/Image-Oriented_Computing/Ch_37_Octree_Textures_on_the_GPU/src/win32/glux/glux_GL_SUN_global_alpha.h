
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_SUN_global_alpha__
#define __GLUX_GL_SUN_global_alpha__

GLUX_NEW_PLUGIN(GL_SUN_global_alpha);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_GLOBAL_ALPHA_SUN
#  define GL_GLOBAL_ALPHA_SUN 0x81D9
#endif
#ifndef GL_GLOBAL_ALPHA_FACTOR_SUN
#  define GL_GLOBAL_ALPHA_FACTOR_SUN 0x81DA
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorbSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORBSUNPROC) (GLbyte factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorsSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORSSUNPROC) (GLshort factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactoriSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORISUNPROC) (GLint factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorfSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORFSUNPROC) (GLfloat factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactordSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORDSUNPROC) (GLdouble factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorubSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORUBSUNPROC) (GLubyte factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorusSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORUSSUNPROC) (GLushort factor);
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactoruiSUN
typedef void (APIENTRYP PFNGLUXGLOBALALPHAFACTORUISUNPROC) (GLuint factor);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorbSUN
extern PFNGLUXGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorsSUN
extern PFNGLUXGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactoriSUN
extern PFNGLUXGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorfSUN
extern PFNGLUXGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactordSUN
extern PFNGLUXGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorubSUN
extern PFNGLUXGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactorusSUN
extern PFNGLUXGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN;
#endif
#ifndef __GLUX__GLFCT_glGlobalAlphaFactoruiSUN
extern PFNGLUXGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------