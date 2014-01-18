/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"
#include "RegalSo.h"
#include "RegalEmuProcsSo.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

static void REGAL_CALL emuProcInterceptSo_glActiveTexture(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->ActiveTexture( *_context, texture ) ) {
     orig.glActiveTexture( _context, texture );
  }

}

static void REGAL_CALL emuProcInterceptSo_glActiveTextureARB(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->ActiveTexture( *_context, texture ) ) {
     orig.glActiveTexture( _context, texture );
  }

}

static void REGAL_CALL emuProcInterceptSo_glBindSampler(RegalContext *_context, GLuint unit, GLuint sampler)
{
  RegalAssert(_context);

  // impl
  _context->so->BindSampler( unit, sampler );

}

static void REGAL_CALL emuProcInterceptSo_glBindTexture(RegalContext *_context, GLenum target, GLuint texture)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->BindTexture( *_context, target, texture ) ) {
     orig.glBindTexture( _context, target, texture );
  }

}

static void REGAL_CALL emuProcInterceptSo_glDeleteSamplers(RegalContext *_context, GLsizei count, const GLuint *samplers)
{
  RegalAssert(_context);

  // impl
  _context->so->DeleteSamplers( count, samplers );

}

static void REGAL_CALL emuProcInterceptSo_glDeleteTextures(RegalContext *_context, GLsizei n, const GLuint *textures)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->DeleteTextures( *_context, n, textures );

  orig.glDeleteTextures( _context, n, textures );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArrays(RegalContext *_context, GLenum mode, GLint first, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArrays( _context, mode, first, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArraysEXT(RegalContext *_context, GLenum mode, GLint first, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArraysEXT( _context, mode, first, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArraysIndirect(RegalContext *_context, GLenum mode, const GLvoid *indirect)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArraysIndirect( _context, mode, indirect );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArraysInstanced(RegalContext *_context, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArraysInstanced( _context, mode, start, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArraysInstancedARB(RegalContext *_context, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArraysInstancedARB( _context, mode, start, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawArraysInstancedEXT(RegalContext *_context, GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawArraysInstancedEXT( _context, mode, start, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementArrayAPPLE(RegalContext *_context, GLenum mode, GLint first, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementArrayAPPLE( _context, mode, first, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementArrayATI(RegalContext *_context, GLenum mode, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementArrayATI( _context, mode, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElements(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElements( _context, mode, count, type, indices );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsBaseVertex(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsBaseVertex( _context, mode, count, type, indices, basevertex );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsIndirect(RegalContext *_context, GLenum mode, GLenum type, const GLvoid *indirect)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsIndirect( _context, mode, type, indirect );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsInstanced(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsInstanced( _context, mode, count, type, indices, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsInstancedARB(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsInstancedARB( _context, mode, count, type, indices, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsInstancedBaseVertex(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsInstancedBaseVertex( _context, mode, count, type, indices, primcount, basevertex );

}

static void REGAL_CALL emuProcInterceptSo_glDrawElementsInstancedEXT(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawElementsInstancedEXT( _context, mode, count, type, indices, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glDrawRangeElementArrayAPPLE(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawRangeElementArrayAPPLE( _context, mode, start, end, first, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawRangeElementArrayATI(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLsizei count)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawRangeElementArrayATI( _context, mode, start, end, count );

}

static void REGAL_CALL emuProcInterceptSo_glDrawRangeElements(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawRangeElements( _context, mode, start, end, count, type, indices );

}

static void REGAL_CALL emuProcInterceptSo_glDrawRangeElementsBaseVertex(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawRangeElementsBaseVertex( _context, mode, start, end, count, type, indices, basevertex );

}

static void REGAL_CALL emuProcInterceptSo_glDrawRangeElementsEXT(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glDrawRangeElementsEXT( _context, mode, start, end, count, type, indices );

}

static void REGAL_CALL emuProcInterceptSo_glGenSamplers(RegalContext *_context, GLsizei count, GLuint *samplers)
{
  RegalAssert(_context);

  // impl
  _context->so->GenSamplers( count, samplers );

}

static void REGAL_CALL emuProcInterceptSo_glGenTextures(RegalContext *_context, GLsizei n, GLuint *textures)
{
  RegalAssert(_context);

  // impl
  RegalAssert(_context);
  _context->so->GenTextures( *_context, n, textures );

}

static void REGAL_CALL emuProcInterceptSo_glGetDoublev(RegalContext *_context, GLenum pname, GLdouble *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  if ( !_context->so->Get( pname, params ) ) {
     orig.glGetDoublev( _context, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetFloatv(RegalContext *_context, GLenum pname, GLfloat *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  if ( !_context->so->Get( pname, params ) ) {
     orig.glGetFloatv( _context, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetInteger64v(RegalContext *_context, GLenum pname, GLint64 *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  if ( !_context->so->Get( pname, params ) ) {
     orig.glGetInteger64v( _context, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetIntegerv(RegalContext *_context, GLenum pname, GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  if ( !_context->so->Get( pname, params ) ) {
     orig.glGetIntegerv( _context, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetSamplerParameterIiv(RegalContext *_context, GLuint sampler, GLenum pname, GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetSamplerParameterv( *_context, sampler, pname, params )) {
     orig.glGetSamplerParameterIiv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetSamplerParameterIuiv(RegalContext *_context, GLuint sampler, GLenum pname, GLuint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetSamplerParameterv( *_context, sampler, pname, params )) {
     orig.glGetSamplerParameterIuiv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetSamplerParameterfv(RegalContext *_context, GLuint sampler, GLenum pname, GLfloat *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetSamplerParameterv( *_context, sampler, pname, params )) {
     orig.glGetSamplerParameterfv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetSamplerParameteriv(RegalContext *_context, GLuint sampler, GLenum pname, GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetSamplerParameterv( *_context, sampler, pname, params )) {
     orig.glGetSamplerParameteriv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetTexParameterIiv(RegalContext *_context, GLenum target, GLenum pname, GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetTexParameterv( *_context, target, pname, params ) ) {
     orig.glGetTexParameterIiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetTexParameterIuiv(RegalContext *_context, GLenum target, GLenum pname, GLuint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetTexParameterv( *_context, target, pname, params ) ) {
     orig.glGetTexParameterIuiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetTexParameterfv(RegalContext *_context, GLenum target, GLenum pname, GLfloat *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetTexParameterv( *_context, target, pname, params ) ) {
     orig.glGetTexParameterfv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glGetTexParameteriv(RegalContext *_context, GLenum target, GLenum pname, GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->GetTexParameterv( *_context, target, pname, params ) ) {
     orig.glGetTexParameteriv( _context, target, pname, params );
  }

}

static GLboolean REGAL_CALL emuProcInterceptSo_glIsSampler(RegalContext *_context, GLuint sampler)
{
  RegalAssert(_context);

  // impl
  return _context->so->IsSampler( sampler );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawArrays(RegalContext *_context, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawArrays( _context, mode, first, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawArraysEXT(RegalContext *_context, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawArraysEXT( _context, mode, first, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawArraysIndirect(RegalContext *_context, GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawArraysIndirect( _context, mode, indirect, primcount, stride );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawArraysIndirectAMD(RegalContext *_context, GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawArraysIndirectAMD( _context, mode, indirect, primcount, stride );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElementArrayAPPLE(RegalContext *_context, GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElementArrayAPPLE( _context, mode, first, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElements(RegalContext *_context, GLenum mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElements( _context, mode, count, type, indices, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElementsBaseVertex(RegalContext *_context, GLenum mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount, const GLint *basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElementsBaseVertex( _context, mode, count, type, indices, primcount, basevertex );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElementsEXT(RegalContext *_context, GLenum mode, const GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElementsEXT( _context, mode, count, type, indices, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElementsIndirect(RegalContext *_context, GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElementsIndirect( _context, mode, type, indirect, primcount, stride );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawElementsIndirectAMD(RegalContext *_context, GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawElementsIndirectAMD( _context, mode, type, indirect, primcount, stride );

}

static void REGAL_CALL emuProcInterceptSo_glMultiDrawRangeElementArrayAPPLE(RegalContext *_context, GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // prefix
  RegalAssert(_context);
  _context->so->PreDraw( *_context );

  orig.glMultiDrawRangeElementArrayAPPLE( _context, mode, start, end, first, count, primcount );

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameterIiv(RegalContext *_context, GLuint sampler, GLenum pname, const GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameterv( *_context, sampler, pname, params )) {
     orig.glSamplerParameterIiv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameterIuiv(RegalContext *_context, GLuint sampler, GLenum pname, const GLuint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameterv( *_context, sampler, pname, params )) {
     orig.glSamplerParameterIuiv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameterf(RegalContext *_context, GLuint sampler, GLenum pname, GLfloat param)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameter( *_context, sampler, pname, param )) {
     orig.glSamplerParameterf( _context, sampler, pname, param );
  }

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameterfv(RegalContext *_context, GLuint sampler, GLenum pname, const GLfloat *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameterv( *_context, sampler, pname, params )) {
     orig.glSamplerParameterfv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameteri(RegalContext *_context, GLuint sampler, GLenum pname, GLint param)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameter( *_context, sampler, pname, param )) {
     orig.glSamplerParameteri( _context, sampler, pname, param );
  }

}

static void REGAL_CALL emuProcInterceptSo_glSamplerParameteriv(RegalContext *_context, GLuint sampler, GLenum pname, const GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->SamplerParameterv( *_context, sampler, pname, params )) {
     orig.glSamplerParameteriv( _context, sampler, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterIiv(RegalContext *_context, GLenum target, GLenum pname, const GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameterIiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterIivEXT(RegalContext *_context, GLenum target, GLenum pname, const GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameterIiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterIuiv(RegalContext *_context, GLenum target, GLenum pname, const GLuint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameterIuiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterIuivEXT(RegalContext *_context, GLenum target, GLenum pname, const GLuint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameterIuiv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterf(RegalContext *_context, GLenum target, GLenum pname, GLfloat param)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameter( *_context, target, pname, param ) ) {
     orig.glTexParameterf( _context, target, pname, param );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameterfv(RegalContext *_context, GLenum target, GLenum pname, const GLfloat *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameterfv( _context, target, pname, params );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameteri(RegalContext *_context, GLenum target, GLenum pname, GLint param)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameter( *_context, target, pname, param ) ) {
     orig.glTexParameteri( _context, target, pname, param );
  }

}

static void REGAL_CALL emuProcInterceptSo_glTexParameteriv(RegalContext *_context, GLenum target, GLenum pname, const GLint *params)
{
  RegalAssert(_context);
  EmuProcsOriginateSo & orig = _context->so->orig;

  // impl
  RegalAssert(_context);
  if ( !_context->so->TexParameterv( *_context, target, pname, params ) ) {
     orig.glTexParameteriv( _context, target, pname, params );
  }

}

void EmuProcsInterceptSo( Dispatch::GL & dt ) {
  dt.glActiveTexture                   = emuProcInterceptSo_glActiveTexture;
  dt.glActiveTextureARB                = emuProcInterceptSo_glActiveTextureARB;
  dt.glBindSampler                     = emuProcInterceptSo_glBindSampler;
  dt.glBindTexture                     = emuProcInterceptSo_glBindTexture;
  dt.glDeleteSamplers                  = emuProcInterceptSo_glDeleteSamplers;
  dt.glDeleteTextures                  = emuProcInterceptSo_glDeleteTextures;
  dt.glDrawArrays                      = emuProcInterceptSo_glDrawArrays;
  dt.glDrawArraysEXT                   = emuProcInterceptSo_glDrawArraysEXT;
  dt.glDrawArraysIndirect              = emuProcInterceptSo_glDrawArraysIndirect;
  dt.glDrawArraysInstanced             = emuProcInterceptSo_glDrawArraysInstanced;
  dt.glDrawArraysInstancedARB          = emuProcInterceptSo_glDrawArraysInstancedARB;
  dt.glDrawArraysInstancedEXT          = emuProcInterceptSo_glDrawArraysInstancedEXT;
  dt.glDrawElementArrayAPPLE           = emuProcInterceptSo_glDrawElementArrayAPPLE;
  dt.glDrawElementArrayATI             = emuProcInterceptSo_glDrawElementArrayATI;
  dt.glDrawElements                    = emuProcInterceptSo_glDrawElements;
  dt.glDrawElementsBaseVertex          = emuProcInterceptSo_glDrawElementsBaseVertex;
  dt.glDrawElementsIndirect            = emuProcInterceptSo_glDrawElementsIndirect;
  dt.glDrawElementsInstanced           = emuProcInterceptSo_glDrawElementsInstanced;
  dt.glDrawElementsInstancedARB        = emuProcInterceptSo_glDrawElementsInstancedARB;
  dt.glDrawElementsInstancedBaseVertex = emuProcInterceptSo_glDrawElementsInstancedBaseVertex;
  dt.glDrawElementsInstancedEXT        = emuProcInterceptSo_glDrawElementsInstancedEXT;
  dt.glDrawRangeElementArrayAPPLE      = emuProcInterceptSo_glDrawRangeElementArrayAPPLE;
  dt.glDrawRangeElementArrayATI        = emuProcInterceptSo_glDrawRangeElementArrayATI;
  dt.glDrawRangeElements               = emuProcInterceptSo_glDrawRangeElements;
  dt.glDrawRangeElementsBaseVertex     = emuProcInterceptSo_glDrawRangeElementsBaseVertex;
  dt.glDrawRangeElementsEXT            = emuProcInterceptSo_glDrawRangeElementsEXT;
  dt.glGenSamplers                     = emuProcInterceptSo_glGenSamplers;
  dt.glGenTextures                     = emuProcInterceptSo_glGenTextures;
  dt.glGetDoublev                      = emuProcInterceptSo_glGetDoublev;
  dt.glGetFloatv                       = emuProcInterceptSo_glGetFloatv;
  dt.glGetInteger64v                   = emuProcInterceptSo_glGetInteger64v;
  dt.glGetIntegerv                     = emuProcInterceptSo_glGetIntegerv;
  dt.glGetSamplerParameterIiv          = emuProcInterceptSo_glGetSamplerParameterIiv;
  dt.glGetSamplerParameterIuiv         = emuProcInterceptSo_glGetSamplerParameterIuiv;
  dt.glGetSamplerParameterfv           = emuProcInterceptSo_glGetSamplerParameterfv;
  dt.glGetSamplerParameteriv           = emuProcInterceptSo_glGetSamplerParameteriv;
  dt.glGetTexParameterIiv              = emuProcInterceptSo_glGetTexParameterIiv;
  dt.glGetTexParameterIuiv             = emuProcInterceptSo_glGetTexParameterIuiv;
  dt.glGetTexParameterfv               = emuProcInterceptSo_glGetTexParameterfv;
  dt.glGetTexParameteriv               = emuProcInterceptSo_glGetTexParameteriv;
  dt.glIsSampler                       = emuProcInterceptSo_glIsSampler;
  dt.glMultiDrawArrays                 = emuProcInterceptSo_glMultiDrawArrays;
  dt.glMultiDrawArraysEXT              = emuProcInterceptSo_glMultiDrawArraysEXT;
  dt.glMultiDrawArraysIndirect         = emuProcInterceptSo_glMultiDrawArraysIndirect;
  dt.glMultiDrawArraysIndirectAMD      = emuProcInterceptSo_glMultiDrawArraysIndirectAMD;
  dt.glMultiDrawElementArrayAPPLE      = emuProcInterceptSo_glMultiDrawElementArrayAPPLE;
  dt.glMultiDrawElements               = emuProcInterceptSo_glMultiDrawElements;
  dt.glMultiDrawElementsBaseVertex     = emuProcInterceptSo_glMultiDrawElementsBaseVertex;
  dt.glMultiDrawElementsEXT            = emuProcInterceptSo_glMultiDrawElementsEXT;
  dt.glMultiDrawElementsIndirect       = emuProcInterceptSo_glMultiDrawElementsIndirect;
  dt.glMultiDrawElementsIndirectAMD    = emuProcInterceptSo_glMultiDrawElementsIndirectAMD;
  dt.glMultiDrawRangeElementArrayAPPLE = emuProcInterceptSo_glMultiDrawRangeElementArrayAPPLE;
  dt.glSamplerParameterIiv             = emuProcInterceptSo_glSamplerParameterIiv;
  dt.glSamplerParameterIuiv            = emuProcInterceptSo_glSamplerParameterIuiv;
  dt.glSamplerParameterf               = emuProcInterceptSo_glSamplerParameterf;
  dt.glSamplerParameterfv              = emuProcInterceptSo_glSamplerParameterfv;
  dt.glSamplerParameteri               = emuProcInterceptSo_glSamplerParameteri;
  dt.glSamplerParameteriv              = emuProcInterceptSo_glSamplerParameteriv;
  dt.glTexParameterIiv                 = emuProcInterceptSo_glTexParameterIiv;
  dt.glTexParameterIivEXT              = emuProcInterceptSo_glTexParameterIivEXT;
  dt.glTexParameterIuiv                = emuProcInterceptSo_glTexParameterIuiv;
  dt.glTexParameterIuivEXT             = emuProcInterceptSo_glTexParameterIuivEXT;
  dt.glTexParameterf                   = emuProcInterceptSo_glTexParameterf;
  dt.glTexParameterfv                  = emuProcInterceptSo_glTexParameterfv;
  dt.glTexParameteri                   = emuProcInterceptSo_glTexParameteri;
  dt.glTexParameteriv                  = emuProcInterceptSo_glTexParameteriv;
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
