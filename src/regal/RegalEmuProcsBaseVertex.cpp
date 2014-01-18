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
#include "RegalBaseVertex.h"
#include "RegalEmuProcsBaseVertex.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

static void REGAL_CALL emuProcInterceptBaseVertex_glBindBuffer(RegalContext *_context, GLenum target, GLuint buffer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glBindBuffer( target, buffer );

  orig.glBindBuffer( _context, target, buffer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glBindVertexArray(RegalContext *_context, GLuint array)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glBindVertexArray( array );

  orig.glBindVertexArray( _context, array );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glBindVertexBuffer(RegalContext *_context, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glBindVertexBuffer( bindingindex, buffer, offset, stride );

  orig.glBindVertexBuffer( _context, bindingindex, buffer, offset, stride );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glClientActiveTexture(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glClientActiveTexture( texture );

  orig.glClientActiveTexture( _context, texture );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glClientActiveTextureARB(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glClientActiveTexture( texture );

  orig.glClientActiveTextureARB( _context, texture );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glColorPointer(RegalContext *_context, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glColorPointer( size, type, stride, pointer );

  orig.glColorPointer( _context, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisable(RegalContext *_context, GLenum cap)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisable( cap );

  orig.glDisable( _context, cap );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableClientState(RegalContext *_context, GLenum cap)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableClientState( cap );

  orig.glDisableClientState( _context, cap );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableClientStateIndexedEXT(RegalContext *_context, GLenum array, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableClientStateIndexedEXT( array, index );

  orig.glDisableClientStateIndexedEXT( _context, array, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableClientStateiEXT(RegalContext *_context, GLenum array, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableClientStateiEXT( array, index );

  orig.glDisableClientStateiEXT( _context, array, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableIndexedEXT(RegalContext *_context, GLenum target, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableIndexedEXT( target, index );

  orig.glDisableIndexedEXT( _context, target, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableVertexArrayAttribEXT(RegalContext *_context, GLuint vaobj, GLenum array)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableVertexArrayAttribEXT( vaobj, array );

  orig.glDisableVertexArrayAttribEXT( _context, vaobj, array );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableVertexArrayEXT(RegalContext *_context, GLuint vaobj, GLenum array)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableVertexArrayEXT( vaobj, array );

  orig.glDisableVertexArrayEXT( _context, vaobj, array );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisableVertexAttribArray(RegalContext *_context, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisableVertexAttribArray( index );

  orig.glDisableVertexAttribArray( _context, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDisablei(RegalContext *_context, GLenum cap, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glDisablei( cap, index );

  orig.glDisablei( _context, cap, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDrawElementsBaseVertex(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // impl
  if( ! _context->bv->glDrawElementsBaseVertex( *_context, mode, count, type, indices, basevertex ) ) {
    orig.glDrawElementsBaseVertex( _context, mode, count, type, indices, basevertex );
  }

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDrawElementsInstancedBaseVertex(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // impl
  if( ! _context->bv->glDrawElementsInstancedBaseVertex( *_context, mode, count, type, indices, primcount, basevertex ) ) {
    orig.glDrawElementsInstancedBaseVertex( _context, mode, count, type, indices, primcount, basevertex );
  }

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDrawElementsInstancedBaseVertexBaseInstance(RegalContext *_context, GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // impl
  if( ! _context->bv->glDrawElementsInstancedBaseVertexBaseInstance( *_context, mode, count, type, indices, primcount, basevertex, baseinstance ) ) {
    orig.glDrawElementsInstancedBaseVertexBaseInstance( _context, mode, count, type, indices, primcount, basevertex, baseinstance );
  }

}

static void REGAL_CALL emuProcInterceptBaseVertex_glDrawRangeElementsBaseVertex(RegalContext *_context, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // impl
  if( ! _context->bv->glDrawRangeElementsBaseVertex( *_context, mode, start, end, count, type, indices, basevertex ) ) {
    orig.glDrawRangeElementsBaseVertex( _context, mode, start, end, count, type, indices, basevertex );
  }

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEdgeFlagPointer(RegalContext *_context, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEdgeFlagPointer( stride, pointer );

  orig.glEdgeFlagPointer( _context, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnable(RegalContext *_context, GLenum cap)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnable( cap );

  orig.glEnable( _context, cap );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableClientState(RegalContext *_context, GLenum cap)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableClientState( cap );

  orig.glEnableClientState( _context, cap );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableClientStateIndexedEXT(RegalContext *_context, GLenum array, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableClientStateIndexedEXT( array, index );

  orig.glEnableClientStateIndexedEXT( _context, array, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableClientStateiEXT(RegalContext *_context, GLenum array, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableClientStateiEXT( array, index );

  orig.glEnableClientStateiEXT( _context, array, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableIndexedEXT(RegalContext *_context, GLenum target, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableIndexedEXT( target, index );

  orig.glEnableIndexedEXT( _context, target, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableVertexArrayAttribEXT(RegalContext *_context, GLuint vaobj, GLenum array)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableVertexArrayAttribEXT( vaobj, array );

  orig.glEnableVertexArrayAttribEXT( _context, vaobj, array );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableVertexArrayEXT(RegalContext *_context, GLuint vaobj, GLenum array)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableVertexArrayEXT( vaobj, array );

  orig.glEnableVertexArrayEXT( _context, vaobj, array );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnableVertexAttribArray(RegalContext *_context, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnableVertexAttribArray( index );

  orig.glEnableVertexAttribArray( _context, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glEnablei(RegalContext *_context, GLenum cap, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glEnablei( cap, index );

  orig.glEnablei( _context, cap, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glFogCoordPointer(RegalContext *_context, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glFogCoordPointer( type, stride, pointer );

  orig.glFogCoordPointer( _context, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glIndexPointer(RegalContext *_context, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glIndexPointer( type, stride, pointer );

  orig.glIndexPointer( _context, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glInterleavedArrays(RegalContext *_context, GLenum format, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glInterleavedArrays( format, stride, pointer );

  orig.glInterleavedArrays( _context, format, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glMultiDrawElementsBaseVertex(RegalContext *_context, GLenum mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount, const GLint *basevertex)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // impl
  if( ! _context->bv->glMultiDrawElementsBaseVertex( *_context, mode, count, type, indices, primcount, basevertex ) ) {
    orig.glMultiDrawElementsBaseVertex( _context, mode, count, type, indices, primcount, basevertex );
  }

}

static void REGAL_CALL emuProcInterceptBaseVertex_glMultiTexCoordPointerEXT(RegalContext *_context, GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glMultiTexCoordPointerEXT( texunit, size, type, stride, pointer );

  orig.glMultiTexCoordPointerEXT( _context, texunit, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glNormalPointer(RegalContext *_context, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glNormalPointer( type, stride, pointer );

  orig.glNormalPointer( _context, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glPrimitiveRestartIndex(RegalContext *_context, GLuint index)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glPrimitiveRestartIndex( index );

  orig.glPrimitiveRestartIndex( _context, index );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glSecondaryColorPointer(RegalContext *_context, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glSecondaryColorPointer( size, type, stride, pointer );

  orig.glSecondaryColorPointer( _context, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glTexCoordPointer(RegalContext *_context, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glTexCoordPointer( size, type, stride, pointer );

  orig.glTexCoordPointer( _context, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayColorOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayColorOffsetEXT( vaobj, buffer, size, type, stride, offset );

  orig.glVertexArrayColorOffsetEXT( _context, vaobj, buffer, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayEdgeFlagOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayEdgeFlagOffsetEXT( vaobj, buffer, stride, offset );

  orig.glVertexArrayEdgeFlagOffsetEXT( _context, vaobj, buffer, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayFogCoordOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayFogCoordOffsetEXT( vaobj, buffer, type, stride, offset );

  orig.glVertexArrayFogCoordOffsetEXT( _context, vaobj, buffer, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayIndexOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayIndexOffsetEXT( vaobj, buffer, type, stride, offset );

  orig.glVertexArrayIndexOffsetEXT( _context, vaobj, buffer, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayMultiTexCoordOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayMultiTexCoordOffsetEXT( vaobj, buffer, texunit, size, type, stride, offset );

  orig.glVertexArrayMultiTexCoordOffsetEXT( _context, vaobj, buffer, texunit, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayNormalOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayNormalOffsetEXT( vaobj, buffer, type, stride, offset );

  orig.glVertexArrayNormalOffsetEXT( _context, vaobj, buffer, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArraySecondaryColorOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArraySecondaryColorOffsetEXT( vaobj, buffer, size, type, stride, offset );

  orig.glVertexArraySecondaryColorOffsetEXT( _context, vaobj, buffer, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayTexCoordOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayTexCoordOffsetEXT( vaobj, buffer, size, type, stride, offset );

  orig.glVertexArrayTexCoordOffsetEXT( _context, vaobj, buffer, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayVertexAttribIOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayVertexAttribIOffsetEXT( vaobj, buffer, index, size, type, stride, offset );

  orig.glVertexArrayVertexAttribIOffsetEXT( _context, vaobj, buffer, index, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayVertexAttribOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayVertexAttribOffsetEXT( vaobj, buffer, index, size, type, normalized, stride, offset );

  orig.glVertexArrayVertexAttribOffsetEXT( _context, vaobj, buffer, index, size, type, normalized, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexArrayVertexOffsetEXT(RegalContext *_context, GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, const GLintptr offset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexArrayVertexOffsetEXT( vaobj, buffer, size, type, stride, offset );

  orig.glVertexArrayVertexOffsetEXT( _context, vaobj, buffer, size, type, stride, offset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribBinding(RegalContext *_context, GLuint attribindex, GLuint bindingindex)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribBinding( attribindex, bindingindex );

  orig.glVertexAttribBinding( _context, attribindex, bindingindex );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribDivisor(RegalContext *_context, GLuint index, GLuint divisor)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribDivisor( index, divisor );

  orig.glVertexAttribDivisor( _context, index, divisor );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribFormat(RegalContext *_context, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribFormat( attribindex, size, type, normalized, relativeoffset );

  orig.glVertexAttribFormat( _context, attribindex, size, type, normalized, relativeoffset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribIFormat(RegalContext *_context, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribIFormat( attribindex, size, type, relativeoffset );

  orig.glVertexAttribIFormat( _context, attribindex, size, type, relativeoffset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribIPointer(RegalContext *_context, GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribIPointer( index, size, type, stride, pointer );

  orig.glVertexAttribIPointer( _context, index, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribLFormat(RegalContext *_context, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribLFormat( attribindex, size, type, relativeoffset );

  orig.glVertexAttribLFormat( _context, attribindex, size, type, relativeoffset );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribLPointer(RegalContext *_context, GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribLPointer( index, size, type, stride, pointer );

  orig.glVertexAttribLPointer( _context, index, size, type, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexAttribPointer(RegalContext *_context, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexAttribPointer( index, size, type, normalized, stride, pointer );

  orig.glVertexAttribPointer( _context, index, size, type, normalized, stride, pointer );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexBindingDivisor(RegalContext *_context, GLuint bindingindex, GLuint divisor)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexBindingDivisor( bindingindex, divisor );

  orig.glVertexBindingDivisor( _context, bindingindex, divisor );

}

static void REGAL_CALL emuProcInterceptBaseVertex_glVertexPointer(RegalContext *_context, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
  RegalAssert(_context);
  EmuProcsOriginateBaseVertex & orig = _context->bv->orig;

  // prefix
  _context->bv->glVertexPointer( size, type, stride, pointer );

  orig.glVertexPointer( _context, size, type, stride, pointer );

}

void EmuProcsInterceptBaseVertex( Dispatch::GL & dt ) {
  dt.glBindBuffer                                  = emuProcInterceptBaseVertex_glBindBuffer;
  dt.glBindVertexArray                             = emuProcInterceptBaseVertex_glBindVertexArray;
  dt.glBindVertexBuffer                            = emuProcInterceptBaseVertex_glBindVertexBuffer;
  dt.glClientActiveTexture                         = emuProcInterceptBaseVertex_glClientActiveTexture;
  dt.glClientActiveTextureARB                      = emuProcInterceptBaseVertex_glClientActiveTextureARB;
  dt.glColorPointer                                = emuProcInterceptBaseVertex_glColorPointer;
  dt.glDisable                                     = emuProcInterceptBaseVertex_glDisable;
  dt.glDisableClientState                          = emuProcInterceptBaseVertex_glDisableClientState;
  dt.glDisableClientStateIndexedEXT                = emuProcInterceptBaseVertex_glDisableClientStateIndexedEXT;
  dt.glDisableClientStateiEXT                      = emuProcInterceptBaseVertex_glDisableClientStateiEXT;
  dt.glDisableIndexedEXT                           = emuProcInterceptBaseVertex_glDisableIndexedEXT;
  dt.glDisableVertexArrayAttribEXT                 = emuProcInterceptBaseVertex_glDisableVertexArrayAttribEXT;
  dt.glDisableVertexArrayEXT                       = emuProcInterceptBaseVertex_glDisableVertexArrayEXT;
  dt.glDisableVertexAttribArray                    = emuProcInterceptBaseVertex_glDisableVertexAttribArray;
  dt.glDisablei                                    = emuProcInterceptBaseVertex_glDisablei;
  dt.glDrawElementsBaseVertex                      = emuProcInterceptBaseVertex_glDrawElementsBaseVertex;
  dt.glDrawElementsInstancedBaseVertex             = emuProcInterceptBaseVertex_glDrawElementsInstancedBaseVertex;
  dt.glDrawElementsInstancedBaseVertexBaseInstance = emuProcInterceptBaseVertex_glDrawElementsInstancedBaseVertexBaseInstance;
  dt.glDrawRangeElementsBaseVertex                 = emuProcInterceptBaseVertex_glDrawRangeElementsBaseVertex;
  dt.glEdgeFlagPointer                             = emuProcInterceptBaseVertex_glEdgeFlagPointer;
  dt.glEnable                                      = emuProcInterceptBaseVertex_glEnable;
  dt.glEnableClientState                           = emuProcInterceptBaseVertex_glEnableClientState;
  dt.glEnableClientStateIndexedEXT                 = emuProcInterceptBaseVertex_glEnableClientStateIndexedEXT;
  dt.glEnableClientStateiEXT                       = emuProcInterceptBaseVertex_glEnableClientStateiEXT;
  dt.glEnableIndexedEXT                            = emuProcInterceptBaseVertex_glEnableIndexedEXT;
  dt.glEnableVertexArrayAttribEXT                  = emuProcInterceptBaseVertex_glEnableVertexArrayAttribEXT;
  dt.glEnableVertexArrayEXT                        = emuProcInterceptBaseVertex_glEnableVertexArrayEXT;
  dt.glEnableVertexAttribArray                     = emuProcInterceptBaseVertex_glEnableVertexAttribArray;
  dt.glEnablei                                     = emuProcInterceptBaseVertex_glEnablei;
  dt.glFogCoordPointer                             = emuProcInterceptBaseVertex_glFogCoordPointer;
  dt.glIndexPointer                                = emuProcInterceptBaseVertex_glIndexPointer;
  dt.glInterleavedArrays                           = emuProcInterceptBaseVertex_glInterleavedArrays;
  dt.glMultiDrawElementsBaseVertex                 = emuProcInterceptBaseVertex_glMultiDrawElementsBaseVertex;
  dt.glMultiTexCoordPointerEXT                     = emuProcInterceptBaseVertex_glMultiTexCoordPointerEXT;
  dt.glNormalPointer                               = emuProcInterceptBaseVertex_glNormalPointer;
  dt.glPrimitiveRestartIndex                       = emuProcInterceptBaseVertex_glPrimitiveRestartIndex;
  dt.glSecondaryColorPointer                       = emuProcInterceptBaseVertex_glSecondaryColorPointer;
  dt.glTexCoordPointer                             = emuProcInterceptBaseVertex_glTexCoordPointer;
  dt.glVertexArrayColorOffsetEXT                   = emuProcInterceptBaseVertex_glVertexArrayColorOffsetEXT;
  dt.glVertexArrayEdgeFlagOffsetEXT                = emuProcInterceptBaseVertex_glVertexArrayEdgeFlagOffsetEXT;
  dt.glVertexArrayFogCoordOffsetEXT                = emuProcInterceptBaseVertex_glVertexArrayFogCoordOffsetEXT;
  dt.glVertexArrayIndexOffsetEXT                   = emuProcInterceptBaseVertex_glVertexArrayIndexOffsetEXT;
  dt.glVertexArrayMultiTexCoordOffsetEXT           = emuProcInterceptBaseVertex_glVertexArrayMultiTexCoordOffsetEXT;
  dt.glVertexArrayNormalOffsetEXT                  = emuProcInterceptBaseVertex_glVertexArrayNormalOffsetEXT;
  dt.glVertexArraySecondaryColorOffsetEXT          = emuProcInterceptBaseVertex_glVertexArraySecondaryColorOffsetEXT;
  dt.glVertexArrayTexCoordOffsetEXT                = emuProcInterceptBaseVertex_glVertexArrayTexCoordOffsetEXT;
  dt.glVertexArrayVertexAttribIOffsetEXT           = emuProcInterceptBaseVertex_glVertexArrayVertexAttribIOffsetEXT;
  dt.glVertexArrayVertexAttribOffsetEXT            = emuProcInterceptBaseVertex_glVertexArrayVertexAttribOffsetEXT;
  dt.glVertexArrayVertexOffsetEXT                  = emuProcInterceptBaseVertex_glVertexArrayVertexOffsetEXT;
  dt.glVertexAttribBinding                         = emuProcInterceptBaseVertex_glVertexAttribBinding;
  dt.glVertexAttribDivisor                         = emuProcInterceptBaseVertex_glVertexAttribDivisor;
  dt.glVertexAttribFormat                          = emuProcInterceptBaseVertex_glVertexAttribFormat;
  dt.glVertexAttribIFormat                         = emuProcInterceptBaseVertex_glVertexAttribIFormat;
  dt.glVertexAttribIPointer                        = emuProcInterceptBaseVertex_glVertexAttribIPointer;
  dt.glVertexAttribLFormat                         = emuProcInterceptBaseVertex_glVertexAttribLFormat;
  dt.glVertexAttribLPointer                        = emuProcInterceptBaseVertex_glVertexAttribLPointer;
  dt.glVertexAttribPointer                         = emuProcInterceptBaseVertex_glVertexAttribPointer;
  dt.glVertexBindingDivisor                        = emuProcInterceptBaseVertex_glVertexBindingDivisor;
  dt.glVertexPointer                               = emuProcInterceptBaseVertex_glVertexPointer;
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
