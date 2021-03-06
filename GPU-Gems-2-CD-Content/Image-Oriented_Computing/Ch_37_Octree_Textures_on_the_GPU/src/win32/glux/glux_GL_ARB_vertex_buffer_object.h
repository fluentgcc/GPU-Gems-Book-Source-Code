
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

#ifndef __GLUX_GL_ARB_vertex_buffer_object__
#define __GLUX_GL_ARB_vertex_buffer_object__

GLUX_NEW_PLUGIN(GL_ARB_vertex_buffer_object);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_BUFFER_SIZE_ARB
#  define GL_BUFFER_SIZE_ARB 0x8764
#endif
#ifndef GL_BUFFER_USAGE_ARB
#  define GL_BUFFER_USAGE_ARB 0x8765
#endif
#ifndef GL_ARRAY_BUFFER_ARB
#  define GL_ARRAY_BUFFER_ARB 0x8892
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_ARB
#  define GL_ELEMENT_ARRAY_BUFFER_ARB 0x8893
#endif
#ifndef GL_ARRAY_BUFFER_BINDING_ARB
#  define GL_ARRAY_BUFFER_BINDING_ARB 0x8894
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB
#  define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#endif
#ifndef GL_VERTEX_ARRAY_BUFFER_BINDING_ARB
#  define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#endif
#ifndef GL_NORMAL_ARRAY_BUFFER_BINDING_ARB
#  define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#endif
#ifndef GL_COLOR_ARRAY_BUFFER_BINDING_ARB
#  define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#endif
#ifndef GL_INDEX_ARRAY_BUFFER_BINDING_ARB
#  define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB
#  define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB
#  define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB
#  define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB
#  define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#endif
#ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB
#  define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB
#  define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#endif
#ifndef GL_READ_ONLY_ARB
#  define GL_READ_ONLY_ARB 0x88B8
#endif
#ifndef GL_WRITE_ONLY_ARB
#  define GL_WRITE_ONLY_ARB 0x88B9
#endif
#ifndef GL_READ_WRITE_ARB
#  define GL_READ_WRITE_ARB 0x88BA
#endif
#ifndef GL_BUFFER_ACCESS_ARB
#  define GL_BUFFER_ACCESS_ARB 0x88BB
#endif
#ifndef GL_BUFFER_MAPPED_ARB
#  define GL_BUFFER_MAPPED_ARB 0x88BC
#endif
#ifndef GL_BUFFER_MAP_POINTER_ARB
#  define GL_BUFFER_MAP_POINTER_ARB 0x88BD
#endif
#ifndef GL_STREAM_DRAW_ARB
#  define GL_STREAM_DRAW_ARB 0x88E0
#endif
#ifndef GL_STREAM_READ_ARB
#  define GL_STREAM_READ_ARB 0x88E1
#endif
#ifndef GL_STREAM_COPY_ARB
#  define GL_STREAM_COPY_ARB 0x88E2
#endif
#ifndef GL_STATIC_DRAW_ARB
#  define GL_STATIC_DRAW_ARB 0x88E4
#endif
#ifndef GL_STATIC_READ_ARB
#  define GL_STATIC_READ_ARB 0x88E5
#endif
#ifndef GL_STATIC_COPY_ARB
#  define GL_STATIC_COPY_ARB 0x88E6
#endif
#ifndef GL_DYNAMIC_DRAW_ARB
#  define GL_DYNAMIC_DRAW_ARB 0x88E8
#endif
#ifndef GL_DYNAMIC_READ_ARB
#  define GL_DYNAMIC_READ_ARB 0x88E9
#endif
#ifndef GL_DYNAMIC_COPY_ARB
#  define GL_DYNAMIC_COPY_ARB 0x88EA
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBindBufferARB
typedef void (APIENTRYP PFNGLUXBINDBUFFERARBPROC) (GLenum target, GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glDeleteBuffersARB
typedef void (APIENTRYP PFNGLUXDELETEBUFFERSARBPROC) (GLsizei n, const GLuint *buffers);
#endif
#ifndef __GLUX__GLFCT_glGenBuffersARB
typedef void (APIENTRYP PFNGLUXGENBUFFERSARBPROC) (GLsizei n, GLuint *buffers);
#endif
#ifndef __GLUX__GLFCT_glIsBufferARB
typedef GLboolean (APIENTRYP PFNGLUXISBUFFERARBPROC) (GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glBufferDataARB
typedef void (APIENTRYP PFNGLUXBUFFERDATAARBPROC) (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage);
#endif
#ifndef __GLUX__GLFCT_glBufferSubDataARB
typedef void (APIENTRYP PFNGLUXBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glGetBufferSubDataARB
typedef void (APIENTRYP PFNGLUXGETBUFFERSUBDATAARBPROC) (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glMapBufferARB
typedef GLvoid* (APIENTRYP PFNGLUXMAPBUFFERARBPROC) (GLenum target, GLenum access);
#endif
#ifndef __GLUX__GLFCT_glUnmapBufferARB
typedef GLboolean (APIENTRYP PFNGLUXUNMAPBUFFERARBPROC) (GLenum target);
#endif
#ifndef __GLUX__GLFCT_glGetBufferParameterivARB
typedef void (APIENTRYP PFNGLUXGETBUFFERPARAMETERIVARBPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetBufferPointervARB
typedef void (APIENTRYP PFNGLUXGETBUFFERPOINTERVARBPROC) (GLenum target, GLenum pname, GLvoid* *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBindBufferARB
extern PFNGLUXBINDBUFFERARBPROC glBindBufferARB;
#endif
#ifndef __GLUX__GLFCT_glDeleteBuffersARB
extern PFNGLUXDELETEBUFFERSARBPROC glDeleteBuffersARB;
#endif
#ifndef __GLUX__GLFCT_glGenBuffersARB
extern PFNGLUXGENBUFFERSARBPROC glGenBuffersARB;
#endif
#ifndef __GLUX__GLFCT_glIsBufferARB
extern PFNGLUXISBUFFERARBPROC glIsBufferARB;
#endif
#ifndef __GLUX__GLFCT_glBufferDataARB
extern PFNGLUXBUFFERDATAARBPROC glBufferDataARB;
#endif
#ifndef __GLUX__GLFCT_glBufferSubDataARB
extern PFNGLUXBUFFERSUBDATAARBPROC glBufferSubDataARB;
#endif
#ifndef __GLUX__GLFCT_glGetBufferSubDataARB
extern PFNGLUXGETBUFFERSUBDATAARBPROC glGetBufferSubDataARB;
#endif
#ifndef __GLUX__GLFCT_glMapBufferARB
extern PFNGLUXMAPBUFFERARBPROC glMapBufferARB;
#endif
#ifndef __GLUX__GLFCT_glUnmapBufferARB
extern PFNGLUXUNMAPBUFFERARBPROC glUnmapBufferARB;
#endif
#ifndef __GLUX__GLFCT_glGetBufferParameterivARB
extern PFNGLUXGETBUFFERPARAMETERIVARBPROC glGetBufferParameterivARB;
#endif
#ifndef __GLUX__GLFCT_glGetBufferPointervARB
extern PFNGLUXGETBUFFERPOINTERVARBPROC glGetBufferPointervARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
