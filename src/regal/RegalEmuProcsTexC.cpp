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
#include "RegalTexC.h"
#include "RegalEmuProcsTexC.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

static void REGAL_CALL emuProcInterceptTexC_glActiveTexture(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowActiveTexture( texture );

  orig.glActiveTexture( _context, texture );

}

static void REGAL_CALL emuProcInterceptTexC_glActiveTextureARB(RegalContext *_context, GLenum texture)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowActiveTexture( texture );

  orig.glActiveTextureARB( _context, texture );

}

static void REGAL_CALL emuProcInterceptTexC_glBindTexture(RegalContext *_context, GLenum target, GLuint texture)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowBindTexture( target, texture );

  orig.glBindTexture( _context, target, texture );

}

static void REGAL_CALL emuProcInterceptTexC_glBindTextureEXT(RegalContext *_context, GLenum target, GLuint texture)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowBindTexture( target, texture );

  orig.glBindTextureEXT( _context, target, texture );

}

static void REGAL_CALL emuProcInterceptTexC_glDeleteTextures(RegalContext *_context, GLsizei n, const GLuint *textures)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowDeleteTextures( n, textures );

  orig.glDeleteTextures( _context, n, textures );

}

static void REGAL_CALL emuProcInterceptTexC_glDeleteTexturesEXT(RegalContext *_context, GLsizei n, const GLuint *textures)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowDeleteTextures( n, textures );

  orig.glDeleteTexturesEXT( _context, n, textures );

}

static void REGAL_CALL emuProcInterceptTexC_glGenTextures(RegalContext *_context, GLsizei n, GLuint *textures)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // impl

  orig.glGenTextures( _context, n, textures );
  _context->texc->ShadowGenTextures( n, textures );

}

static void REGAL_CALL emuProcInterceptTexC_glGenTexturesEXT(RegalContext *_context, GLsizei n, GLuint *textures)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // impl

  orig.glGenTextures( _context, n, textures );
  _context->texc->ShadowGenTextures( n, textures );

}

static void REGAL_CALL emuProcInterceptTexC_glGenerateMipmap(RegalContext *_context, GLenum target)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowGenerateMipmap( target );

  orig.glGenerateMipmap( _context, target );

}

static void REGAL_CALL emuProcInterceptTexC_glGenerateMipmapEXT(RegalContext *_context, GLenum target)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowGenerateMipmap( target );

  orig.glGenerateMipmapEXT( _context, target );

}

static void REGAL_CALL emuProcInterceptTexC_glPixelStorei(RegalContext *_context, GLenum pname, GLint param)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowPixelStore( pname, param );

  orig.glPixelStorei( _context, pname, param );

}

static void REGAL_CALL emuProcInterceptTexC_glTexImage2D(RegalContext *_context, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // prefix
  _context->texc->ShadowTexImage2D( target, level, format, type );

  orig.glTexImage2D( _context, target, level, internalformat, width, height, border, format, type, pixels );

}

static void REGAL_CALL emuProcInterceptTexC_glTexSubImage2D(RegalContext *_context, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
  RegalAssert(_context);
  EmuProcsOriginateTexC & orig = _context->texc->orig;

  // impl

  GLenum targetFormat;
  GLenum targetType;
  _context->texc->GetFormatAndType( target, level, &targetFormat, &targetType );
  Emu::ConvertedBuffer _buffer( _context->texc->unpackPSS, targetFormat, targetType );
  if ( _buffer.ConvertFrom( width, height, format, type, pixels ) )
  {
    if (_context->texc->unpackPSS.alignment != 4)
      orig.glPixelStorei( _context, GL_UNPACK_ALIGNMENT, 4 );
    orig.glTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, targetFormat, targetType, _buffer.Get() );
    if (_context->texc->unpackPSS.alignment != 4)
      orig.glPixelStorei( _context, GL_UNPACK_ALIGNMENT, _context->texc->unpackPSS.alignment );
  }
  else
  {
    orig.glTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, type, pixels );
  }

}

void EmuProcsInterceptTexC( Dispatch::GL & dt ) {
  dt.glActiveTexture     = emuProcInterceptTexC_glActiveTexture;
  dt.glActiveTextureARB  = emuProcInterceptTexC_glActiveTextureARB;
  dt.glBindTexture       = emuProcInterceptTexC_glBindTexture;
  dt.glBindTextureEXT    = emuProcInterceptTexC_glBindTextureEXT;
  dt.glDeleteTextures    = emuProcInterceptTexC_glDeleteTextures;
  dt.glDeleteTexturesEXT = emuProcInterceptTexC_glDeleteTexturesEXT;
  dt.glGenTextures       = emuProcInterceptTexC_glGenTextures;
  dt.glGenTexturesEXT    = emuProcInterceptTexC_glGenTexturesEXT;
  dt.glGenerateMipmap    = emuProcInterceptTexC_glGenerateMipmap;
  dt.glGenerateMipmapEXT = emuProcInterceptTexC_glGenerateMipmapEXT;
  dt.glPixelStorei       = emuProcInterceptTexC_glPixelStorei;
  dt.glTexImage2D        = emuProcInterceptTexC_glTexImage2D;
  dt.glTexSubImage2D     = emuProcInterceptTexC_glTexSubImage2D;
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
